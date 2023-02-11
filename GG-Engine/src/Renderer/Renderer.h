#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

namespace GGE {
	
	namespace Renderer {

		void init();

		void renderQuad(glm::vec2 position, glm::vec2 scale);

		void renderFrame();
	}
}