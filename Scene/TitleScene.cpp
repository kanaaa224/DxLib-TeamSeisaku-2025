#include "TitleScene.h"


TitleScene::TitleScene()
{

}

TitleScene::~TitleScene()
{

}

void TitleScene::Initialize()
{

}

eSceneType TitleScene::Update()
{

}

void TitleScene::Draw()
{
	printf("ここはタイトル画面です\n");
}

void TitleScene::Finalize()
{

}

eSceneType TitleScene::GetNowScene() const
{
	return eSceneType::E_TITLE;
}
