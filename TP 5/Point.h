#pragma once
class Point
{
public:
	Point(float x0, float y0);
	~Point();
	void deplace(float d1, float d2);

	void affiche();

private:
	float x, y;
	
};