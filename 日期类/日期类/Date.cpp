#include"Header.h"
//内联函数在调用的地方展开，以时间换取空间。
inline int GetMonthDay(int year, int month)
{
	//static 放到静态区
	static int dayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && (year % 100 != 0 && year % 4 == 0 || year % 400 == 0))
	{
		dayArray[2] = 29;
	}
	return dayArray[month];

}
//缺省参数在定义或者申明函数的时候为参数指定一个默认值，
//只能存在于声明或者定义的其中一个。
Date::Date(int year , int month , int day)
{
	if (year >= 0
		&& month > 0 && month < 13
		&& day>0&&day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout<<"日期非法" << endl;

	}

}
void Date::Print()
{
	cout << _year << "年" << _month << "月" << _day << "日" << endl;
}
Date Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month > 12)
		{
			++_year;
			--_month;
		}
	}
	return *this;
}
Date Date::operator-=(int day)
{

}