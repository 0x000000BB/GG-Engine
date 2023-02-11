#pragma once
#include <GGEngine.h>

class TestApplication : public GGE::Application {
public:
	void update(float dt) override;

	void onStart() override;
};