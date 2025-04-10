#pragma once
#include "SceneBase.h"

class TitleScene : public SceneBase
{
private:


public:
	TitleScene();
	~TitleScene();

	void Initialize();
	virtual eSceneType Update() override;
	void Draw();
	void Finalize();

	virtual eSceneType GetNowScene() const override;

};

