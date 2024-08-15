using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Runtime.InteropServices;
using System;
using Unity.VisualScripting;

public class GameManager : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void SetToLeader(int value);

    private static GameManager _instance;
    [SerializeField] public static float _timerToAd;

    [SerializeField] public float _currentTime;
    [SerializeField] public string _seconds;
    [SerializeField] public bool _isGameWork;
    [SerializeField] private GameObject _player;
    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] public GameObject _winPanel;
    [SerializeField] public GameObject _camera;
    [SerializeField] public GameObject _panelBeforeAd;
    private AudioSource _audio;
    public static GameManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<GameManager>();
                if (_instance == null)
                {
                    GameObject obj = new GameObject();
                    obj.name = "GameManager";
                    _instance = obj.AddComponent<GameManager>();
                }
            }
            return _instance;
        }
    }
    public static float TimerToAd
    {
        get { return _timerToAd; }
        set { _timerToAd = value; }
    }

    void Start()
    {
        _isGameWork = true;
        _player = GameObject.Find("Player");
    }

    void Update()
    {
        _timerToAd += Time.deltaTime;
        Debug.Log(_timerToAd);
        UpdateTime();
        if (_player == null && !_panelBeforeAd.active)
        {
            _isGameWork=false;
            //_audio.enabled = false;
            _gameOverPanel.SetActive(true);
        }
    }
    void UpdateTime()
    {
        if (_isGameWork)
        {
            _currentTime += Time.deltaTime;
            _seconds = _currentTime.ToString("0000");
        }
    }
    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void GameWin()
    {
        _isGameWork = false;
        _winPanel.SetActive(true);
        SetToLeader(Convert.ToInt32(_seconds));
    }
}
