#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int is_leap_year(int x);
int main()
{
	int year;
	for (year = 1000;year <= 2000;year++)
	{
		if (is_leap_year(year))
			printf("%d  ", year);
	}
	return 0;
}