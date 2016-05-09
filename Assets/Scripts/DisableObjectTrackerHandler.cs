using UnityEngine;
using Vuforia;

public class DisableObjectTrackerHandler : MonoBehaviour, ITrackableEventHandler
{
    public GameObject world;

    private TrackableBehaviour mTrackableBehaviour;

    bool isARMode = true;
    public bool IsARMode
    {
        get
        {
            return isARMode;
        }
        set
        {
            isARMode = value;
            if (value)
                TargetLost();
        }

    }

    void Awake()
    {
        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
        {
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
        }
    }

    public void OnTrackableStateChanged(
        TrackableBehaviour.Status previousStatus,
        TrackableBehaviour.Status newStatus)
    {
        if (!IsARMode)
            return;

        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED ||
            newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
        {
            TargetFound();
        }
        else
        {
            TargetLost();
        }
    }

    private void TargetFound()
    {
        world.SetActive(true);
    }

    private void TargetLost()
    {
        world.SetActive(false);
    }
}
