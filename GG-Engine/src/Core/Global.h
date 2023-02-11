#pragma once
#include "Window.h"
#include "../Renderer/RenderContext.h"

namespace GGE {
	class Global {

	public:
		static void init(int width, int height, std::string title);

		static Window& getWindow() { return window; }
		static RenderContext& getRenderContext() { return renderContext; }

		inline static Window window;
		inline static RenderContext renderContext;
	};

}
