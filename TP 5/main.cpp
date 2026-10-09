#include "Point.h";
#include <iostream>

int main(int argc, char** argv) {

	Point P(3.2, 4.5);


	P.affiche();
	P.deplace(3.2, 4.5);
	P.affiche();

	return 0;
}