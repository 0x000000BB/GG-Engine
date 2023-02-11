#include "Global.h"

namespace GGE {


	void Global::init(int width, int height, std::string title) {
		window = Window(width, height, title);
		renderContext = RenderContext();
		renderContext.init();
	}
}
