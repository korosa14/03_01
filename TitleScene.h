#pragma once
#include "Iscene.h"

class TitleScene:public Iscene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
};

