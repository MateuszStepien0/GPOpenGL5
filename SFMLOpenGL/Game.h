#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <MyVector3.h>
#include <MyMatrix3.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void setupPoints();

	Clock clock;
	Time elapsed;

	MyVector3 m_displacmentVector{ 0,0,0 };

	float m_rotationAngleX{ 1.0f };			//angle we rotate the cube on the X axis.
	float m_rotationAngleY{ 1.0f };			//angle we rotate the cube on the Y axis.
	float m_rotationAngleZ{ 1.0f };			//angle we rotate the cube on the Z axis.

	float m_scale{ 1.0f };
};

#endif