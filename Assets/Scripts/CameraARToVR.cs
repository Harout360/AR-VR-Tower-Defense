using UnityEngine;
using Vuforia;

public class CameraARToVR : MonoBehaviour
{
    public GameObject reticule;
    public DisableObjectTrackerHandler tracker;

    VideoBackgroundAbstractBehaviour[] backgroundBehaviors;
    MeshRenderer[] backgroundPlanes;
    HideExcessAreaAbstractBehaviour[] excessBehaviors;
    Camera[] cameras;

    CardboardHead cardboardHead;
    CardboardEye[] cardboardEyes;

    void Start()
    {
        backgroundBehaviors = GetComponentsInChildren<VideoBackgroundAbstractBehaviour>();
        excessBehaviors = GetComponentsInChildren<HideExcessAreaAbstractBehaviour>();
        cameras = GetComponentsInChildren<Camera>();

        cardboardHead = GetComponent<CardboardHead>();
        cardboardEyes = GetComponentsInChildren<CardboardEye>();
    }

    void Update()
    {
        if (backgroundPlanes == null)
        {
            reticule.SetActive(false);
            backgroundPlanes = GetComponentsInChildren<MeshRenderer>();
            reticule.SetActive(true);
        }
    }

    public void Transition(bool isARMode)
    {
        //Switch off tracker
        tracker.IsARMode = isARMode;

        //Switch cardboard scripts
        cardboardHead.ARControlled = isARMode;
        cardboardEyes[0].ARControlled = isARMode;
        cardboardEyes[1].ARControlled = isARMode;

        //Switch Vuforia components
        for (int i = 0; i < backgroundBehaviors.Length; i++)
            backgroundBehaviors[i].enabled = isARMode;
        for (int i = 0; i < backgroundPlanes.Length; i++)
            backgroundPlanes[i].enabled = isARMode;
        for (int i = 0; i < excessBehaviors.Length; i++)
            excessBehaviors[i].enabled = isARMode;

        //Switch Vuforia behavior
        VuforiaBehaviour.Instance.enabled = isARMode;

        //Move the camera if needed
        if (!isARMode)
        {
            Transform mount = GameControl.instance.tower.transform.GetChild(0);
            transform.parent.position = mount.position;
            transform.parent.rotation = mount.rotation;

            transform.position = mount.position;
            Cardboard.SDK.Recenter();
        }

        //Set the background of cameras
        for (int i = 0; i < cameras.Length; i++)
        {
            if (isARMode)
                cameras[i].clearFlags = CameraClearFlags.Color;
            else
                cameras[i].clearFlags = CameraClearFlags.Skybox;
        }
    }
}
