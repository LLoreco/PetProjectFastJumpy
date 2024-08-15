using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEditor;
using UnityEngine;

public class BulletFly : MonoBehaviour
{
    [SerializeField] private float _bulletSpeed;
    private GameObject _gameManager;
    private Vector2 _bulletDirection = Vector2.left; // default

    void Start()
    {
        _gameManager = GameObject.Find("GameManager");
        _bulletSpeed = 10f;
    }

    void Update()
    {
        if (_gameManager.GetComponent<GameManager>()._isGameWork)
        {
            MoveLeft();
        }
    }
    void MoveLeft()
    {
        transform.Translate(_bulletDirection * _bulletSpeed * Time.deltaTime);
    }
    public void SetDirection(Vector2 direction)
    {
        _bulletDirection = direction.normalized;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            Destroy(collision.gameObject);
            var audio = GameObject.Find("Main Camera").GetComponent<AudioSource>();
            audio.enabled = false;
        }
        if (collision.gameObject.CompareTag("Ground") || collision.gameObject.CompareTag("Platform"))
        {
            Destroy(gameObject);
        }
    }
}
