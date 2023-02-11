#include "RenderContext.h"

namespace GGE {
	void GGE::RenderContext::init()
	{
		glGenVertexArrays(1, &quadVAO);
		glGenBuffers(1, &quadVBO);
		glGenBuffers(1, &quadEBO);

		glBindVertexArray(quadVAO);

		glBindBuffer(GL_ARRAY_BUFFER, quadVBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(quadVertices), quadVertices, GL_DYNAMIC_DRAW);

		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, quadEBO);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(quadIndices), quadIndices, GL_STATIC_DRAW);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		glEnableVertexAttribArray(0);

		colorShader = Shader(std::filesystem::path("E:/Dev/C++/GG-Engine/GG-Engine/src/Renderer/shaders/colorVertex.vs"), std::filesystem::path("E:/Dev/C++/GG-Engine/GG-Engine/src/Renderer/shaders/colorFragment.fs"));
	}
}
