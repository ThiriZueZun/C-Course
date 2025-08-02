#include <iostream>
#include <cmath>
#include "lab20-triangle.hpp"

int main() {
	Triangle tr;
	
	tr.setTriangle(10.0f,20.0f);
	tr.perimeter();
	tr.area();
	
	Rectangle rec;
	
	rec.setRectangle(10,20);
	rec.perimeter();
	rec.area();
	
	Circle cr;
	cr.setCircle(10);
	cr.perimeter();
	cr.area();
}
