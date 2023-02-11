#include "Application.h"

#include "Global.h"
#include "../Renderer/Renderer.h"

namespace GGE {

	void Application::start() {

		Global::init(1600, 900, "Test Game");

		onStart();

		Window& window = Global::getWindow();

		while (!window.shouldClose()) {
			window.pollEvents();

			glClear(GL_COLOR_BUFFER_BIT);
			glClearColor(0, 0, 0, 1);

			update(0);
			GGE::Renderer::renderFrame();

			window.swapBuffers();
		}

		window.terminate();
	}

}