#include "Application.h"

namespace GGE {

	void Application::start() {

		onStart();

		while (running) {
			update(0);
		}

	}

}