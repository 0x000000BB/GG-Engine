#pragma once
#include "Shader.h"
#include <vector>

namespace GGE {

	typedef struct {
		glm::vec2 pos;
		glm::vec2 size;
	}Quad;

	class RenderContext {
	public:
		RenderContext() {}

		void init();

		void addQuad(Quad q) {
			quads.push_back(q);
		}

		std::vector<Quad>& getQuads() {
			return quads;
		}

		Shader getShader() {
			return colorShader;
		}

		unsigned int getEBO() {
			return quadEBO;
		}

	private:
		Shader colorShader = Shader();

		unsigned int quadVBO, quadEBO, quadVAO;

		float quadVertices[12] = {
			 0.5f,  0.5f, 0.0f,  // top right
			 0.5f, -0.5f, 0.0f,  // bottom right
			-0.5f, -0.5f, 0.0f,  // bottom left
			-0.5f,  0.5f, 0.0f   // top left 
		};
		unsigned int quadIndices[6] = {
			0, 1, 3,   // first triangle
			1, 2, 3    // second triangle
		};

		std::vector<Quad> quads = std::vector<Quad>();
	};
}