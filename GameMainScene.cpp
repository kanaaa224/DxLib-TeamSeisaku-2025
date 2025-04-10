#include "GameMainScene.h"
#include "DxLib.h"
#include "Common.h"

GameMainScene::GameMainScene()
{

}

GameMainScene::~GameMainScene()
{

}

AbstractScene* GameMainScene::Update()
{
	return this;
}

void GameMainScene::Draw() const
{
	DrawFormatString(0, 0, C_RED, "GameMain Test");
}
