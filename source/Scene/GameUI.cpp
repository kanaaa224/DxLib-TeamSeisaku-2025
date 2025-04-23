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
					HPUP_frame(NULL),
					buf_recovery(NULL),
					recovery_frame(NULL),
					buf_movement(NULL),
					movement_frame(NULL),
					avoidance_button(NULL)
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
	player_icon = LoadGraph("resource/images/ui/character_icon.png");
	//player�t���[��
	player_frame = LoadGraph("resource/images/ui/character_frame.png");

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
	HPUP_frame = LoadGraph("resource/images/ui/buf_frames/frame_hp_upper_limit.png");
	//�o�t�E�̗͉�
	buf_recovery = LoadGraph("resource/images/ui/buf_icons/buf_hp_recovery.png");
	recovery_frame = LoadGraph("resource/images/ui/buf_frames/frame_hp_recovery.png");
	//�o�t�E�ړ����xUP
	buf_movement = LoadGraph("resource/images/ui/buf_icons/buf_movement_speed_up.png");
	movement_frame = LoadGraph("resource/images/ui/buf_frames/frame_movement_speed.png");

	//����{�^��
	avoidance_button = LoadGraph("resource/images/ui/button/short_button_animation1.png");

}

void GameUI::Update()
{
}

void GameUI::Draw()
{ 
	/* ���W x, y, �g�嗦 2.0, ��]�� 0.0, �摜�n���h��, ���߃t���O TRUE, �摜�𔽓]���邩 */
	//DrawRotaGraphF(45,5,2.0,0.0,hp_frame,TRUE,0);

	/*int size = 50;
	int width = size;
	int height = size;
	int a = 0;
	int b = 0;
	DrawExtendGraph(a,b,a+width,b+height,hp_frame, true);*/

	//HP�t���[���\��
	/* ���W x, y, �g�嗦 2.0, ��]�� 0.0, �摜�n���h��, ���߃t���O TRUE, �摜�𔽓]���邩 */
	DrawRotaGraph(255, 30, 1.0, 0.0, hp_frame, TRUE, FALSE);
	//HP�o�[�\��
	DrawRotaGraph(251, 30,0.9,0.0, hp_ber, TRUE,FALSE);

	//player�t���[��
	DrawRotaGraph(72,75,5.5,0.0, player_frame,TRUE,FALSE);
	//player�A�C�R��
	DrawRotaGraph(72,70,1.8,0.0, player_icon, TRUE,FALSE);

	//�^�C���t���[��
	DrawRotaGraph(240, 74,5.0,0.0, time_frame, TRUE,FALSE);
	DrawFormatString(155, 74, GetColor(255, 255, 255), "�^�C���\��������00:00");


	//�摜�̑傫���̔���
	int frame_size = 32;
	//�]��
	int pading_size = 170;
	//��l
	int x = 460 + frame_size/2;

	//�o�t�E�U����UP
	DrawRotaGraph(x, 74, 1.5, 0.0, attack_frame, TRUE, FALSE);//0
	DrawRotaGraph(x, 74, 1.5, 0.0, buf_attack, TRUE, FALSE);//0
	x += pading_size;
	//�o�t�E�h���UP
	DrawRotaGraph(x, 74, 1.5, 0.0, defense_frame, TRUE, FALSE);//0
	DrawRotaGraph(x, 74, 1.5, 0.0, buf_defense, TRUE, FALSE);//0
	x += pading_size;
	//�o�t�E�̗͏��
	DrawRotaGraph(x, 74, 1.5, 0.0, HPUP_frame, TRUE, FALSE);
	DrawRotaGraph(x, 74, 1.5, 0.0, buf_HPUP, TRUE, FALSE);
	x += pading_size;
	//�o�t�E�̗͉�
	DrawRotaGraph(x, 74, 1.5, 0.0, recovery_frame, TRUE, FALSE);
	DrawRotaGraph(x, 74, 1.5, 0.0, buf_recovery, TRUE, FALSE);//0
	x += pading_size;
	//�o�t�E�ړ����xUP
	DrawRotaGraph(x, 74, 1.5, 0.0, movement_frame, TRUE, FALSE);
	DrawRotaGraph(x, 74, 1.5, 0.0, buf_movement, TRUE, FALSE);

	//���UI
	DrawRotaGraph(1150, 650, 3.5, 0.0, avoidance_button, TRUE, FALSE);
	
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
