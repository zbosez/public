#include"Header.h"
inline int GetMonthDay(int year, int month)
{
	static int dayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (month == 2 && (year % 100 != 0 && year % 4 == 0 || year % 400 == 0))
	{
		dayArray[2] = 29;
	}
	return dayArray[month];

}
Date::Date(int year , int month , int day)
{
	if (year >= 0
		&& month > 0 && month < 13
		&& day>0&&day <= GetMonthDay(year, month))
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
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
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		*this -= (-day);
		return *this;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month > 12)
		{
			++_year;
			_month=1;
		}
	}
	return *this;
}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		*this += (-day);
		return *this;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
//Date Date::operator-(int day)
//{
//	Date temp = *this;
//	temp -= day;
//	return temp;
//}
//前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
//后置++
Date& Date::operator++(int)
{
	Date temp = Date(*this);
	*this += 1;
	return temp;
}
//前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
//后置--
Date& Date::operator--(int)
{
	Date temp = Date(*this);
	*this += 1;
	return temp;
}
bool Date::operator>(Date& date2)
{
	if ((*this)._year > date2._year)
	{
		return true;
	}
	else if(_year == date2._year)
	{
		if(_month > date2._month)
		{
			return true;
		}
		else if (_month == date2._month)
		{
			if(_day > date2._day)
			{
				return true;
			}
		}		
	}
	return false;
}
bool Date::operator<(Date& date2)
{
	if (*this == date2)
		return false;
	return !(*this > date2);

	//2.return !(*this >=data2)
}
bool Date::operator<=(Date& date2)
{
	return *this < date2 || *this == date2;
}
bool Date::operator>=(Date& date2)
{
	return *this > date2 || *this == date2;
}

bool Date::operator==(Date& date2)
{
	return (_year == date2._year)
		&& (_month == date2._month)
		&& (_day == date2._day);
}
bool Date::operator!=(Date& date2)
{
	return !(*this == date2);
}
int Date::operator-(Date& date2)
{
	Date max = *this;
	Date min = date2;
	int sure = 1;
	if (*this < date2)
	{
		max = date2;
		min = *this;
		sure = -1;
	}
	int count = 0;
	while(max != min)
	{
		++min;
		++count;
	}
	return sure * count;
}