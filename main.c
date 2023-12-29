#include "shapes.h"

int main(void){
	
	Circle circleTest = {{circleArea, circlePerimeter}, 3.12};
	Rectangle rectangle = {{rectangleArea, rectanglePerimeter}, 2.34, 2.1};
	
	Shape shape = {defaultArea, defaultPerimeter};

	
	calculateArea("Rectangle area: %r \nCircle Area: %c \nSHAPE: %s\n", rectangle, circleTest, shape);
//	printf("RECTANGLE: Area: %lf, Perimeter: %lf\n", rectangle.base.area(&rectangle), rectangle.base.perimeter(&rectangle));

	return 0;
}
