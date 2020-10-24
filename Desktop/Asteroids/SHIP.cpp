#include "Ship.hpp"
#include <iostream>
#include <SDL2/SDL_opengl.h>

namespace Engine
{
    void Ship::Render() 
    {
            glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
		    glClear(GL_COLOR_BUFFER_BIT);

		    glBegin(GL_LINE_LOOP);
			glVertex2f(0, -12);
            glVertex2f(4, -6);
            glVertex2f(5, -5);
            glVertex2f(6, -5);
			glVertex2f(7, -6);
            glVertex2f(8, -8);
            glVertex2f(9, -6);
            glVertex2f(10, -5);
            glVertex2f(11, -5);
            glVertex2f(12, -6);
            glVertex2f(13, -8);
            glVertex2f(13, -9);
            glVertex2f(12, -11);
            glVertex2f(11, -12);
			glVertex2f(14, -11);
            glVertex2f(17, -9);
            glVertex2f(19, -7);
            glVertex2f(20, -5);
            glVertex2f(21, -2);
            glVertex2f(21, 1);
            glVertex2f(20, 4);
			glVertex2f(17, 8);
            glVertex2f(14, 10);
            glVertex2f(11, 11);
            glVertex2f(12, 10);
            glVertex2f(13, 8);
            glVertex2f(13, 7);
            glVertex2f(12, 5);
			glVertex2f(11, 4);
            glVertex2f(9, 3);
            glVertex2f(6, 3);
            glVertex2f(3, 4);
			glVertex2f(3, 12);
            glVertex2f(1, 9);
            glVertex2f(-1, 9);
            glVertex2f(-3, 12);
            glVertex2f(-3, 4);
            glVertex2f(-6, 3);
            glVertex2f(-9, 3);
            glVertex2f(-11, 4);
            glVertex2f(-12, 5);
            glVertex2f(-13, 7);
			glVertex2f(-13, 8);
            glVertex2f(-12, 10);
            glVertex2f(-11, 11);
            glVertex2f(-14, 10);
            glVertex2f(-17, 8);
            glVertex2f(-19, 6);
            glVertex2f(-20, 4);
			glVertex2f(-21, 1);
            glVertex2f(-21, -2);
            glVertex2f(-20, -5);
            glVertex2f(-19, -7);
            glVertex2f(-17, -9);
            glVertex2f(-14, -11);
            glVertex2f(-11, -12);
            glVertex2f(-12, -11);
            glVertex2f(-13, -9);
            glVertex2f(-13, -8);
			glVertex2f(-12, -6);
            glVertex2f(-11, -5);
            glVertex2f(-10, -5);
            glVertex2f(-9, -6);
            glVertex2f(-8, -8);
            glVertex2f(-7, -6);
            glVertex2f(-6, -5);
            glVertex2f(-5, -5);
            glVertex2f(-4, -6);
            glVertex2f(0, -12);
		    glEnd();

            
    }





}