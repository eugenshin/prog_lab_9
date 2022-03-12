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
	point pt1, pt2(1), pt3(2, 3);//вызов конструкторов(без параметров, с 1 параметром, со всеми параметрами) статическими объектами
	pt1.vivod();
	printf("\n");
	pt2.vivod();
	printf("\n");
	pt3.vivod();
	printf("\n");
	point* pt4 = new point();//вызов конструктора без параметров динамическим объектом
	point* pt5 = new point(1);//вызов конструктора с 1 параметром динамическим объектом
	point* pt6 = new point(2, 3);//вызов конструктора со всеми параметрами динамическим объектом
	(*pt4).vivod();
	printf("\n");
	(*pt5).vivod();
	printf("\n");
	(*pt6).vivod();
	printf("\n");
	segments sm1(1);//вызов конструктора с 1 параметром инициализирующий массив
	printf("\nsm1\n");
	sm1.totalvivod();
	segments sm2(sm1);//вызов конструктора копирования
	printf("\nsm2\n");
	sm2.totalvivod();
	segments sm3(5);
	sm3 = sm1;//перегрузка оператора присваивания
	printf("\nsm3\n");
	sm3.totalvivod();
	printf("sm1 = %X, sm2 = %X, sm3 = %X", sm1.getptr(), sm2.getptr(), sm3.getptr());
	return 0;
}