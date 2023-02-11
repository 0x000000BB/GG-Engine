#include "TestApplication.h"

void TestApplication::update(float dt)
{
	GGE::Renderer::renderQuad(glm::vec2(100, 100), glm::vec2(50, 50));
}

void TestApplication::onStart()
{

}
