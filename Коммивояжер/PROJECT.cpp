#include "Header.h"
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	glutInit(&argc, argv);
	graph = graph_implementation();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Задача коммивояжера");
	window_width = glutGet(GLUT_WINDOW_WIDTH);
	window_height = glutGet(GLUT_WINDOW_HEIGHT);
	glutDisplayFunc(watch_display);
	glutReshapeFunc(reshape);
	glutMouseFunc(button_click);
	glutMainLoop();
	return 0;
}