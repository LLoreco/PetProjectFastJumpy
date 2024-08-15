using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class Laser : MonoBehaviour
{
    public Color laserColor = Color.red;
    public float rotationSpeed = 45f; // �������� �������� ������� � �������
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
        if (GameManager.Instance._isGameWork) // ����������� GameManager.Instance ��� ������� � GameManager
        {
            // �������� �������
            float rotation = rotationSpeed * Time.deltaTime;
            transform.Rotate(Vector3.forward, rotation);

            // ����������� ��������� ����� ����
            Vector2 startPoint = transform.position;

            // ����������� ����������� ����
            Vector2 laserDirection = transform.up;

            // ���� ���� � �������� ������������ � �������� Ground
            RaycastHit2D hit = Physics2D.Raycast(startPoint, laserDirection, maxLaserLength);

            // ���� ���� ������������ � ������ � ����� "Ground", ������������� ����� ����� ������
            if (hit.collider != null && (hit.collider.CompareTag("Ground") || hit.collider.CompareTag("Platform")))
            {
                maxLaserLength = hit.distance;
            }
            else
            {
                // ���� ��� ������� ������ � ����� "Ground", ����������� ����� ������
                maxLaserLength = Mathf.Lerp(maxLaserLength, 30f, Time.deltaTime); // ����������� � �������� �����
            }

            // ����������� �������� ����� ����
            Vector2 endPoint = startPoint + laserDirection * maxLaserLength;

            // ��������� ����� ��� Line Renderer
            lineRenderer.SetPosition(0, startPoint);
            lineRenderer.SetPosition(1, endPoint);

            // ���� ���� ������������ � ������ � ����� "Player", ���������� ������ ������
            if (hit.collider != null && hit.collider.CompareTag("Player"))
            {
                Destroy(hit.collider.gameObject);
                var audio = GameObject.Find("Main Camera").GetComponent<AudioSource>();
                audio.enabled = false;
            }
        }
        
    }
}
