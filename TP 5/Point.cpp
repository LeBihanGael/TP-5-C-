#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(float x0, float y0) {

	x = x0;
	y = y0;
}

Point::~Point()
{
}

void Point::deplace(float d1, float d2) {
	x += d1;
	y += d2;
	
}

void Point::affiche() {
	cout << "Point Initial :" << "x = " << x << "y =" << y << "\n";
}