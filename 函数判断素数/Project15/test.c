#define _CRT_SECURE_NO_WARNINGS 1
#include"is_prime.h"
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int ret = 0;
		ret=is_prime(i);
		if(ret!=0)
			printf("%d ", ret);
	}
	return 0;
}