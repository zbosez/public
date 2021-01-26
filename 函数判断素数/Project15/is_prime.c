#define _CRT_SECURE_NO_WARNINGS 1
#include"is_prime.h"
int is_prime(int i)
{
	int j = 2;
	int judge = 1;
	for (j = 2;j < sqrt(i);j++)
	{
		if (i % j == 0)
			judge = 0;
	}
	if (judge == 1)
	{
		return i;
	}
	else
		return 0;
}
