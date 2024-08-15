using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootGun : MonoBehaviour
{
    [SerializeField] private GameObject _bulletPrefab;
    [SerializeField] private float _shootPause = 2;
    private BulletFly _bulletFlyScript;
    [SerializeField] private string _direction;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("SpawnBullet");
    }

    // Update is called once per frame
    void Update()
    {

    }
    IEnumerator SpawnBullet()
    {
        while (true) // Используйте GameManager.Instance для доступа к GameManager
        {
            yield return new WaitForSeconds(_shootPause);

            if (GameManager.Instance._isGameWork) // Используйте GameManager.Instance для доступа к GameManager
            {
                // Instantiate the bullet with a specified direction (e.g., Vector2.right)
                GameObject bullet = Instantiate(_bulletPrefab, transform.position, _bulletPrefab.transform.rotation);
                _bulletFlyScript = bullet.GetComponent<BulletFly>();

                if (_bulletFlyScript != null)
                {
                    if (_direction == "u" || _direction == "U")
                    {
                        _bulletFlyScript.SetDirection(Vector2.up);
                    }
                    else if (_direction == "d" || _direction == "D")
                    {
                        _bulletFlyScript.SetDirection(Vector2.down);
                    }
                    else if (_direction == "r" || _direction == "R")
                    {
                        _bulletFlyScript.SetDirection(Vector2.right);
                    }
                    else if (_direction == "l" || _direction == "L")
                    {
                        _bulletFlyScript.SetDirection(Vector2.left);
                    }
                }
            }
        }
    }
}
