#ifndef W_DISPLAY_H
#define W_DISPLAY_H

#include <cstdio>
#include <cstdlib>

#include <GLFW/glfw3.h>
#define GLFW_INCLUDE_NONE
#include <OpenGL/gl.h>

namespace W {

	class Display {
	private:
		GLFWwindow* window;
		
	public:
		Display(int width, int height, const char* title);
		~Display();
		
		void start();
	};

}

#endif // W_DISPLAY_H