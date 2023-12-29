#include "shapes.h"

#define PI 3.1415

// dummy functions
double defaultArea(){
	return 0;
}

double defaultPerimeter(){
	return 0;
}

double circleArea(void *shape){

	Circle* circle = (Circle*) shape;
	return PI* circle->radius * circle->radius;
}

double circlePerimeter(void *shape){
	Circle *circle = (Circle*) shape;
	return 2.0 * PI * circle->radius;
}

double rectangleArea(void *shape){
	Rectangle* rectangle = (Rectangle*) shape;
	return rectangle->width * rectangle->height;
}

double rectanglePerimeter(void* shape){
	Rectangle* rectangle = (Rectangle*) shape;
	return 2.0 * (rectangle->height + rectangle->width);
}

void calculateArea(char* string, ...){
	va_list ap;
	va_start(ap, string);
	char* p = string;
	for(p = string; *p; ++p){
		if(*p != '%'){
			putchar(*p);
		} else {
			switch(*(++p)){
				// rectangle
				case 'r':
					Rectangle rectTemp = va_arg(ap, Rectangle);
					printf("%lf", rectTemp.base.area(&rectTemp));
					//printf("%lf", rectangleArea(&rectTemp));
					break;

				case 'c':
					Circle circleTemp = va_arg(ap, Circle);
					printf("%lf", circleTemp.base.area(&circleTemp));
					//printf("%lf", circleArea(&circleTemp));	
					break;
				default:
					printf("%lf", defaultArea());
					break;	
			}

		}
	}
	va_end(ap);
}	
