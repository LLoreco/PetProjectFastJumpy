using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class SpikeCollide : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void ShowAdv();
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            Destroy(collision.gameObject);
            var audio = GameObject.Find("Main Camera").GetComponent<AudioSource>();
            audio.enabled = false;
        }
    }
}
