#pragma once
#include"SceneBase.h"

class EndScene :public SceneBase
{

public:
	EndScene();
	~EndScene();

    void Initialize();
	virtual eSceneType Update() override;
	void Draw();
	void Finalize();

	virtual eSceneType GetNowScene() const override;
};

