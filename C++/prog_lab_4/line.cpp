#define _CRT_SECURE_NO_WARNINGS
#include "line.h"
#include <iostream>

void line::vvod()
{
	ftpoint.vvod();
	sdpoint.vvod();
	return;
}

void line::vivod()
{
	printf("���������� ������ �����: x=%.3f y=%.3f\n���������� ������ �����: x=%.3f y=%.3f",ftpoint.getx(), ftpoint.gety(), sdpoint.getx(), sdpoint.gety());
	return;
}

float line::length()
{
	return ftpoint.distance(&sdpoint);
}