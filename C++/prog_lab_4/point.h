#pragma once
#include<String>

class point
{
	std::string description;//работа с std::string
	float x, y;
public:
	void vvod();
	void vivod();
	float distance(point* sdpoint);
	float getx();
	float gety();
	void descrin();
	void descrout();
	void init(float x, float y);
	friend void pround(point& point);
	point operator + (point b);
	point operator ++  (int);
	point operator ++ ();
	point();
	point(float x);
	point(float x, float y);
};