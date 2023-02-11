#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace GGE {

	class Application {
	public:
		void start();
	private:
		virtual void update(float dt) = 0;
		virtual void onStart() = 0;
	};

	namespace Renderer {
		void init();

		void renderQuad(glm::vec2 position, glm::vec2 scale);

		void renderFrame();
	}

}
