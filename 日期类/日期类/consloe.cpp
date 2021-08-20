#include"Header.h"
void Test2()
{
	Date d1(2021, 8, 20);
	d1 -= (-100);
	d1.Print();
}
void Test3()
{
	Date d1(2021, 8, 20);
	Date temp = d1++;
	temp.Print();
	d1.Print();
	++d1;
	d1.Print();
}
void Test4()
{
	Date d2(2021, 8, 20);
	Date d1(2020, 8, 20);
	cout<<"Ïà²î" << d1 - d2 <<"Ìì¡£" << endl;
}
int main()
{
	Test4();
	return 0;
}