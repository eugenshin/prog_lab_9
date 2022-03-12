#define _CRT_SECURE_NO_WARNINGS
#include "circle.h"
#include <iostream>
#define PI 3.14159265

void circle::vvod()
{
	printf("������� ���������� ������ ����������: ");
	center.vvod();
	printf("������� ������ ������� ����������: ");
	while (scanf("%f", &radius) < 1) {
		while (getchar() != '\n');
		printf("������ ������ �������.");
	}
}

void circle::vivod()
{
	printf("����� ����������: %.3f %.3f\n������ ����������: %.3f", center.getx(), center.gety(), radius);
}

float circle::square()
{
	return radius*radius*PI;
}

float circle::per()
{
	return 2*PI*radius;
}