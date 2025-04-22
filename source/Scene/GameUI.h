#pragma once

class GameUI
{
private:
	int hp_ber;        //HP�o�[
	int hp_frame;      //HP�t���[��

	int player_icon;   //player�A�C�R��
	int player_frame;   //�t���[��

	int time_frame;     //�^�C���t���[��

	int buf_attack;   //�o�t�E�U����UP
	int attack_frame;
	int buf_defense;  //�o�t�E�h���UP
	int defense_frame;
	int buf_HPUP;     //�o�t�E�̗͏��UP
	int HPUP_fame;
	int buf_recovery; //�o�t�E�̗͉�
	int recovery_frame;
	int buf_movement; //�o�t�E�ړ����xUP
	int movement_frame;


	static GameUI* instance;
	GameUI* gameui;

public:
	GameUI();
	virtual ~GameUI();

	void Initialize();
	void Update();
	void Draw();
	void Finalize();

	static GameUI* GetInstance();
};
