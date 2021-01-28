#define _CRT_SECURE_NO_WARNINGS 1
//判断，要么真（！=0），要么假（=0）
int is_leap_year(int x)
{
	return((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));
}
