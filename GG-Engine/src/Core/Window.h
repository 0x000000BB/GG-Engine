#pragma once

#include <GL/glew.h>
#include<GLFW/glfw3.h>

#include<string>
#include<iostream>

namespace GGE {
	class Window {
	public:
		Window() {}
		Window(int width, int height, std::string titel);
		bool shouldClose();
		void swapBuffers();
		void pollEvents();
		void terminate();
	public:
		GLFWwindow* handel;
		int width, height;
	private:
		std::string titel;
	};
}
