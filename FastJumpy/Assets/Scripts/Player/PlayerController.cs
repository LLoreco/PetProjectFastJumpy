using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] private float _speed;
    [SerializeField] private float _jumpForce;
    [SerializeField] private bool _isOnGround = true;
    [SerializeField] private bool _isDoubleJump = true;
    [SerializeField] private GameManager _gameManager;
    private Rigidbody2D _playerRb;
    private bool _facingRight = true;
    

    // Start is called before the first frame update
    void Start()
    {
        _speed = 10;
        _jumpForce = 50;
        _playerRb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if (_gameManager._isGameWork)
        {
            MovePlayer();
            if (Input.GetKeyDown(KeyCode.Space))
            {
                PlayerJump();
            }
        }
    }
    void MovePlayer()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        Vector2 movement = new Vector2(horizontalInput, 0);
        transform.Translate(movement * _speed * Time.deltaTime);

        // Поворот спрайта
        if (horizontalInput > 0 && !_facingRight)
        {
            Flip();
        }
        else if (horizontalInput < 0 && _facingRight)
        {
            Flip();
        }
    }
    void PlayerJump()
    {
        if (_isOnGround)
        {
            _isOnGround = false;
            _playerRb.AddForce(Vector2.up * _jumpForce, ForceMode2D.Impulse);
        }
        else if (!_isOnGround && _isDoubleJump)
        {
            _isDoubleJump = false;
            _playerRb.AddForce(Vector2.up * _jumpForce, ForceMode2D.Impulse);
        }
    }
    void Flip()
    {
        _facingRight = !_facingRight;
        Vector3 theScale = transform.localScale;
        theScale.x *= -1;
        transform.localScale = theScale;
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Platform"))
        {
            _isOnGround = true;
            _isDoubleJump = true;
        }
    }
}
