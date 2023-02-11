#include "Renderer.h"

#include "../Core/Global.h"

void GGE::Renderer::renderQuad(glm::vec2 position, glm::vec2 scale)
{
	Global::getRenderContext().addQuad(Quad{ position, scale });
}

void GGE::Renderer::init()
{
	Global::getRenderContext().init();
}

void GGE::Renderer::renderFrame()
{
	RenderContext& ctx = Global::getRenderContext();
	std::vector<Quad>& quads = ctx.getQuads();

	for (Quad q : quads) {
		ctx.getShader().use();
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ctx.getEBO());
		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	}

	quads.resize(0);

}
