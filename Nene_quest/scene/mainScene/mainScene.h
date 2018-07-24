#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../scene.h"
#include "../../camera/camera.h"

class mainScene : public Scene {
private:
	GLuint vertexbuffer;
public:
	Camera camera;
	mainScene(GLFWwindow* window);
	~mainScene(void);
	Scene* update(void);
};