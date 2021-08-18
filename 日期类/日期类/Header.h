#pragma once
#include<iostream>
#include<assert.h>
using std::cout;
using std::cin;
using std::endl;

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 0);
	void Print();
	Date operator+=(int day);
	Date operator-=(int day);
private:
	int _year;
	int _month;
	int _day;
};

