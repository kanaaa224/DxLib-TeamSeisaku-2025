#include "GameUI.h"
#include "DxLib.h"

// �ÓI�����o�ϐ���` nullptr�ŏ�����
GameUI* GameUI::instance = nullptr;

GameUI::GameUI() :  hp_ber(NULL), 
					hp_frame(NULL), 
					gameui(nullptr),
					player_frame(NULL),
					player_icon(NULL),
					time_frame(NULL),
					buf_attack(NULL),
					attack_frame(NULL),
					buf_defense(NULL),
					defense_frame(NULL),
					buf_HPUP(NULL),
					HPUP_fame(NULL),
					buf_recovery(NULL),
					recovery_frame(NULL),
					buf_movement(NULL),
					movement_frame(NULL)
{
}

GameUI::~GameUI()
{
}

void GameUI::Initialize()
{
	//HP�o�[
	hp_ber = LoadGraph("resource/images/ui/hp_bar_backA.png");
	//HP�t���[��
	hp_frame = LoadGraph("resource/images/ui/hp_frameA.png");

	//player�A�C�R��
	player_frame = LoadGraph("resource/images/ui/character_icon.png");
	//player�t���[��
	player_icon = LoadGraph("resource/images/ui/character_frame.png");

	//�^�C���t���[��
	time_frame = LoadGraph("resource/images/ui/timer_frame.png");

	//�o�t�E�U����UP
	buf_attack = LoadGraph("resource/images/ui/buf_icons/buf_attack_power_up.png");
	attack_frame = LoadGraph("resource/images/ui/buf_frames/frame_attack_power.png");
	//�o�t�E�h���UP
	buf_defense = LoadGraph("resource/images/ui/buf_icons/buf_Defense_power_up.png");
	defense_frame = LoadGraph("resource/images/ui/buf_frames/frame_Defense_power.png");
	//�o�t�E�̗͏��UP
	buf_HPUP = LoadGraph("resource/images/ui/buf_icons/buf_hp_upper_limit_up.png");
	HPUP_fame = LoadGraph("resource/images/ui/buf_frames/frame_hp_upper_limit.png");
	//�o�t�E�̗͉�
	buf_recovery = LoadGraph("resource/images/ui/buf_icons/buf_hp_recovery.png");
	recovery_frame = LoadGraph("resource/images/ui/buf_frames/frame_Defense_power.png");
	//�o�t�E�ړ����xUP
	buf_movement = LoadGraph("resource/images/ui/buf_icons/buf_movement_speed_up.png");
	movement_frame = LoadGraph("resource/images/ui/buf_frames/frame_movement_speed.png");
}

void GameUI::Update()
{
}

void GameUI::Draw()
{ 

	//HP�t���[���\��
	DrawGraph(45, 5, hp_frame, FALSE);
	//HP�o�[�\��
	DrawGraph(40, 15, hp_ber, FALSE);
	//player�t���[��
	DrawGraph(0, 5, player_frame, FALSE);
	//player�A�C�R��
	DrawGraph(0, 5, player_icon, FALSE);
	//�^�C���t���[��
	DrawGraph(65, 40, time_frame, FALSE);

	/* ���W x, y, �g�嗦 2.0, ��]�� 0.0, �摜�n���h��, ���߃t���O TRUE, �摜�𔽓]���邩 */
	//DrawRotaGraphF();
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
