using UnityEngine;
using Vuforia;

public class ShootingScript : MonoBehaviour
{
    public bool canTransitionARVR = false;

    public ParticleSystem impactEffect;
    public GameObject world;

    ObjectTarget objectToPlace;
    AudioSource gunFireAudio;
    RaycastHit rayHit;

    bool isARMode = true;
    CameraARToVR transitionScript;

    void Start()
    {
        gunFireAudio = GetComponent<AudioSource>();
        transitionScript = GetComponent<CameraARToVR>();
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            gunFireAudio.Stop();
            gunFireAudio.Play();

            if (Physics.Raycast(transform.position, transform.forward, out rayHit, 2000f))
            {
                impactEffect.transform.position = rayHit.point;
                impactEffect.transform.rotation = Quaternion.Euler(270, 0, 0);
                impactEffect.Stop();
                impactEffect.Play();

                switch (rayHit.transform.tag)
                {
                    case "Enemy":
                        DestroyEnemy();
                        break;
                    case "ObjectTarget":
                        PickupObject();
                        break;
                    case "Ground":
                        PlaceObject();
                        break;
                    case "ResetTarget":
                        ResetWorld();
                        break;
                    case "ExitTarget":
                        QuitApplication();
                        break;
                    case "SwitchTarget":
                        SwitchModes();
                        break;
                };
            }
        }
    }

    void DestroyEnemy()
    {
        Destroy(rayHit.transform.gameObject);
    }

    void PickupObject()
    {
        objectToPlace = rayHit.transform.GetComponent<ObjectTarget>();
    }

    void PlaceObject()
    {
        if (!objectToPlace || !isARMode)
            return;

        GameObject tempObj = objectToPlace.GetObject(rayHit.point);
        if (!tempObj)
            return;

        tempObj.transform.parent = world.transform;

        if (tempObj.tag == "Tower")
        {
            GameControl.instance.tower = tempObj;

            tempObj.transform.LookAt(new Vector3(0f, 0f, 0f), new Vector3(0f, 1f, 0f));

            objectToPlace = null;
        }
    }

    void ResetWorld()
    {
        Application.LoadLevel(Application.loadedLevel);
    }

    void QuitApplication()
    {
        Application.Quit();
    }

    void SwitchModes()
    {
        //Don't switch if it is disabled or there isn't a tower
        if (!canTransitionARVR || GameControl.instance.tower == null)
            return;

        isARMode = !isARMode;

        if (isARMode)
            GameControl.instance.SwitchToARMode();
        else
            GameControl.instance.SwitchToVRMode();

        transitionScript.Transition(isARMode);
    }
}
