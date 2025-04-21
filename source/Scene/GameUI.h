#pragma once

class GameUI
{
private:
	int hp_ber;     //HP�o�[
	int hp_frame;   //HP�t���[��

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
