using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Runtime.InteropServices;

public class LoadGame : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void ShowAdv();

    private void Start()
    {
        ShowAdv();
    }
    public void LoadGameScene()
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;

        // Загружаем следующую сцену по порядку (если она существует)
        if (currentSceneIndex < SceneManager.sceneCountInBuildSettings - 1)
        {
            SceneManager.LoadScene(currentSceneIndex + 1);
        }
        else
        {
            Debug.LogWarning("No next scene available.");
        }
    }
}
