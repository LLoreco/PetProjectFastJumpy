using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class Laser : MonoBehaviour
{
    public Color laserColor = Color.red;
    public float rotationSpeed = 45f; // Скорость вращения объекта с лазером
    private LineRenderer lineRenderer;
    private float maxLaserLength = 200f;

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        lineRenderer.startColor = laserColor;
        lineRenderer.endColor = laserColor;
    }

    void Update()
    {
        if (GameManager.Instance._isGameWork) // Используйте GameManager.Instance для доступа к GameManager
        {
            // Вращение объекта
            float rotation = rotationSpeed * Time.deltaTime;
            transform.Rotate(Vector3.forward, rotation);

            // Определение начальной точки луча
            Vector2 startPoint = transform.position;

            // Определение направления луча
            Vector2 laserDirection = transform.up;

            // Пуск луча и проверка столкновения с объектом Ground
            RaycastHit2D hit = Physics2D.Raycast(startPoint, laserDirection, maxLaserLength);

            // Если есть столкновение и объект с тегом "Ground", устанавливаем новую длину лазера
            if (hit.collider != null && (hit.collider.CompareTag("Ground") || hit.collider.CompareTag("Platform")))
            {
                maxLaserLength = hit.distance;
            }
            else
            {
                // Если луч покинул объект с тегом "Ground", увеличиваем длину лазера
                maxLaserLength = Mathf.Lerp(maxLaserLength, 30f, Time.deltaTime); // Возвращение к исходной длине
            }

            // Определение конечной точки луча
            Vector2 endPoint = startPoint + laserDirection * maxLaserLength;

            // Установка точек для Line Renderer
            lineRenderer.SetPosition(0, startPoint);
            lineRenderer.SetPosition(1, endPoint);

            // Если есть столкновение и объект с тегом "Player", уничтожаем объект игрока
            if (hit.collider != null && hit.collider.CompareTag("Player"))
            {
                Destroy(hit.collider.gameObject);
                var audio = GameObject.Find("Main Camera").GetComponent<AudioSource>();
                audio.enabled = false;
            }
        }
        
    }
}
