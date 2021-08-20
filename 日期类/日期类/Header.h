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
	Date& operator+=(int day);
	Date& operator-=(int day);
	int operator-(Date& date2);
	Date& operator++();
	Date& operator++(int);
	Date& operator--();
	Date& operator--(int);
	bool operator>(Date& date2);
	bool operator<(Date& date2);
	bool operator<=(Date& date2);
	bool operator>=(Date& date2);
	bool operator==(Date& date2);
	bool operator!=(Date& date2);
private:
	int _year;
	int _month;
	int _day;
};

