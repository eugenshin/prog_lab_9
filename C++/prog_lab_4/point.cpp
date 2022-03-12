#define _CRT_SECURE_NO_WARNINGS
#include "point.h"
#include <iostream>
#include <math.h>

point::point()
{
	x = y = 0;
}

point::point(float x)
{
	this->x = this->y = x;
}

point::point(float x, float y)
{
	this->x = x;
	this->y = y;
}

void point::vvod()
{
	while (scanf("%f%f", &x, &y) < 2) {
		while (getchar() != '\n');
		printf("Координаты точки введены неверно.\n");
	}
	return;
}

void point::vivod()
{
	printf("x=%.3f, y=%.3f", x, y);
}

float point::distance(point* sdpoint)
{
	return sqrt(pow(sdpoint->x - x, 2) + pow(sdpoint->y - y, 2));
}

float point::getx()
{
	return x;
}

float point::gety()
{
	return y;
}

void point::descrin()
{//работа с std::string
	std::cin >> description;
}

void point::descrout()
{//работа с std::string
	std::cout << description;
}

void point::init(float x, float y)
{//использование this
	this->x = x;
	this->y = y;
}

point point::operator+(point b)
{//перегрузка +
	point c;
	c.x = x + b.x;
	c.y = y + b.y;
	return c;
}

point point::operator++(int)
{//перегрузка ++ префикс
	x++;
	return point();
}

point point::operator++()
{//перегрузка ++ постфикс
	y++;
	return point();
}

void pround(point& point)
{//дружественная функция
	point.x = round(point.x);
	point.y = round(point.y);
}
