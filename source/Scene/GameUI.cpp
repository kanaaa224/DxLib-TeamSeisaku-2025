#include "GameUI.h"
#include "DxLib.h"

// �ÓI�����o�ϐ���` nullptr�ŏ�����
GameUI* GameUI::instance = nullptr;

GameUI::GameUI() : hp_ber(NULL), hp_frame(NULL)
{
}

GameUI::~GameUI()
{
}

void GameUI::Initialize()
{
	hp_ber = LoadGraph("resource/images/ui/hp_bar_backA.png");
	hp_frame = LoadGraph("resource/images/ui/hp_frameA.png");

	if (hp_ber == -1)
	{
		printf("�摜���Ȃ���I\n");
	}
}

void GameUI::Update()
{
}

void GameUI::Draw()
{

	//HP�t���[���\��
	DrawGraph(25, 30, hp_frame, FALSE);
	//HP�o�[�\��
	DrawGraph(20, 40, hp_ber, FALSE);
}

void GameUI::Finalize()
{
}

GameUI* GameUI::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new GameUI();
	}
	return instance;
}
