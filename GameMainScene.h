﻿#pragma once
#include "AbstractScene.h"

class GameMainScene:public AbstractScene
{
private:

public:
	//コンストラクタ
	GameMainScene();
	//デストラクタ
	virtual ~GameMainScene();

	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;

	//描画に関することを実装する
	virtual void Draw() const  override;
};

