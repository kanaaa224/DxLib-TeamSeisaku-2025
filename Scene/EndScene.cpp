#include "EndScene.h"
#include"../SceneManager.h"

EndScene::EndScene()
{
	
}

EndScene::~EndScene()
{

}

void EndScene::Initialize()
{

}

eSceneType EndScene::Update()
{
}


void EndScene::Draw()
{
	printf("ここはタイトル画面です\n");
}

void EndScene::Finalize()
{

}

eSceneType EndScene::GetNowScene() const
{
	return eSceneType::E_END;
}