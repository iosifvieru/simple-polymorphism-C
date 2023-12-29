#ifndef __SHAPES_H_
#define __SHAPES_H_

#include <stdio.h>
#include <stdarg.h>

// base "class"
typedef struct {
	double (*area)();
	double (*perimeter)();
} Shape;

// Circle
typedef struct {
	Shape base;
	double radius;
} Circle;

// Rectangle
typedef struct {
	Shape base;
	double width;
	double height;
} Rectangle;

// default
double defaultArea();
double defaultPerimeter();

// circle 
double circleArea(void *shape);
double circlePerimeter(void *shape);

// rectangle
double rectangleArea(void *shape);
double rectanglePerimeter(void *shape);

//

void calculateArea(char* string, ...);

#endif
