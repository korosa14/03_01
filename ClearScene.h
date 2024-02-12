#pragma once

#include"Iscene.h"

class ClearScene:public Iscene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
};

