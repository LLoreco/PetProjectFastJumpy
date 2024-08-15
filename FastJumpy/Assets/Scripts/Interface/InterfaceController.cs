using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using System.Runtime.InteropServices;

public class InterfaceController : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void ShowAdv();
    [SerializeField] public TextMeshProUGUI _timerText;
    [SerializeField] public TextMeshProUGUI _totalTime;
    [SerializeField] public GameManager _gameManager;
    [SerializeField] public GameObject _restartTitle;
    [SerializeField] private TextMeshProUGUI _textBeforeAdText;
    [SerializeField] private GameObject _beforeAdPanel;

    void Update()
    {
        float timerToAdvalue = GameManager.TimerToAd;
        UpdateTime();
        if(_gameManager._isGameWork == false && _gameManager._winPanel.active)
        {
            TotalTime();
        }
        if (timerToAdvalue > 120 && !_gameManager._isGameWork && !_beforeAdPanel.active)
        {
            StartCoroutine(ShowTimerBeforeAd());
        }
    }
    private void UpdateTime()
    {
        _timerText.text = _gameManager._seconds;
    }
    private void TotalTime()
    {
        _totalTime.text = "Твое время: " + _timerText.text;
    }
    IEnumerator ShowTimerBeforeAd()
    {
        _restartTitle.SetActive(false);
        _beforeAdPanel.SetActive(true);
        for (int i = 3; i >= 0; i--)
        {
            _textBeforeAdText.text = Convert.ToString(i);
            yield return new WaitForSeconds(1);
        }
        _textBeforeAdText.text = "0";
        GameManager.TimerToAd = 0;
        _beforeAdPanel.SetActive(false);
        ShowAdv();
        _restartTitle.SetActive(true);
    }
}
