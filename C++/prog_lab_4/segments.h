#pragma once
#include "line.h"

class segments
{
	static const int MAXN = 100;
	int n = 0;
	line* ptrline = nullptr;
public:
	void vvod();
	void totalvivod();
	void vivod(int i);
	float totallength();
	float length(int i);
	static int getmaxn();
	segments(int n);
	~segments();
	segments(segments& sm);
	segments& operator = (segments& sm);
	line* getptr();
};