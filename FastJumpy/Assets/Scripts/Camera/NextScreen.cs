using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextScreen : MonoBehaviour
{
    [SerializeField] private Camera _camera;
    [SerializeField] private GameObject _playaer;
    [SerializeField] private float _speed;
    [SerializeField] private float _xPos;
    [SerializeField] private float _yPos;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            _camera.transform.Translate(new Vector2(_xPos, _yPos));
            TransformPlayer(_xPos, _yPos);
            StartCoroutine(DisableTrigger());
        }
    }
    IEnumerator DisableTrigger()
    {
        yield return new WaitForSeconds(0.1f);
        gameObject.GetComponent<Collider2D>().isTrigger = false;
    }
    private void TransformPlayer(float x, float y)
    {
        if (x != 0 )
        {
            if (x > 0)
            {
                _playaer.transform.position = new Vector2(_playaer.transform.position.x + 1, transform.position.y);
            }
            else
            {
                _playaer.transform.position = new Vector2(_playaer.transform.position.x - 1, transform.position.y);
            }
        }
        if (y != 0)
        {
            _playaer.transform.position = new Vector2(_playaer.transform.position.x, transform.position.y + 1);
        }
    }
}
