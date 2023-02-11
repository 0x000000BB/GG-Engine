#pragma once
#include <GGEngine.h>
#include <iostream>

class TestApplication : public GGE::Application {
public:
	void update(float dt) override;

	void onStart() override;
};