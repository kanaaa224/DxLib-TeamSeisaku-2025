#include "DxLib.h"
#include "Common.h"
#include "SceneManager.h"

#include "fps.h"
#include "inputCtrl.h"

#include "GameMainScene.h"
#include "Scene/TitleScene.h"

#define _SCREEN_COLOR_BIT_16_ 16
#define _SCREEN_COLOR_BIT_32_ 32

#define DEBUG

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// ウィンドウモードで起動
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// 画面サイズを変更
	if (SetGraphMode(_SCREEN_WIDHT_, _SCREEN_HEIGHT_, _SCREEN_COLOR_BIT_32_) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// DXライブラリの初期化
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	//最初に描画される画面
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new TitleScene()));
	
	FPS::SetLimitRate(60); // TODO: マクロ定義
	FPS::SetUpdateInterval(1000);

	//ゲームループ
	while (ProcessMessage() != -1 && sceneMng.Update() != nullptr)
	{
		ClearDrawScreen();

		if ((GetMainWindowHandle() == GetForegroundWindow())) InputCtrl::Update();

		FPS::Limit();
		FPS::Update();

		sceneMng.Draw();//シーン描画

#ifdef DEBUG
		SetFontSize(16);
		DrawFormatString(10, 10, 0xffffff, "FPS: %0.0f", FPS::Get());

		if (InputCtrl::GetButtonState(XINPUT_BUTTON_BACK)) break; // 強制終了
#endif DEBUG
		ScreenFlip();
	}

	// DXライブラリの終了処理
	DxLib_End();

	return 0;
}