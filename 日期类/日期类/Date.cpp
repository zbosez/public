#include"Header.h"
//���������ڵ��õĵط�չ������ʱ�任ȡ�ռ䡣
inline int GetMonthDay(int year, int month)
{
	//static �ŵ���̬��
	static int dayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && (year % 100 != 0 && year % 4 == 0 || year % 400 == 0))
	{
		dayArray[2] = 29;
	}
	return dayArray[month];

}
//ȱʡ�����ڶ����������������ʱ��Ϊ����ָ��һ��Ĭ��ֵ��
//ֻ�ܴ������������߶��������һ����
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
		cout<<"���ڷǷ�" << endl;

	}

}
void Date::Print()
{
	cout << _year << "��" << _month << "��" << _day << "��" << endl;
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