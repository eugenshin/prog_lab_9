#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"
#include "segments.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point pt1, pt2(1), pt3(2, 3);//����� �������������(��� ����������, � 1 ����������, �� ����� �����������) ������������ ���������
	pt1.vivod();
	printf("\n");
	pt2.vivod();
	printf("\n");
	pt3.vivod();
	printf("\n");
	point* pt4 = new point();//����� ������������ ��� ���������� ������������ ��������
	point* pt5 = new point(1);//����� ������������ � 1 ���������� ������������ ��������
	point* pt6 = new point(2, 3);//����� ������������ �� ����� ����������� ������������ ��������
	(*pt4).vivod();
	printf("\n");
	(*pt5).vivod();
	printf("\n");
	(*pt6).vivod();
	printf("\n");
	segments sm1(1);//����� ������������ � 1 ���������� ���������������� ������
	printf("\nsm1\n");
	sm1.totalvivod();
	segments sm2(sm1);//����� ������������ �����������
	printf("\nsm2\n");
	sm2.totalvivod();
	segments sm3(5);
	sm3 = sm1;//���������� ��������� ������������
	printf("\nsm3\n");
	sm3.totalvivod();
	printf("sm1 = %X, sm2 = %X, sm3 = %X", sm1.getptr(), sm2.getptr(), sm3.getptr());
	return 0;
}