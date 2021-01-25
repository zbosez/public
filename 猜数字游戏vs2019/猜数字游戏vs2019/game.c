#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void game()
{
	int guess = 0;

	int rdig = rand()%100;
	while (1)
	{
		printf("你准备猜多大？>:");
		(void)scanf("%d", &guess);
		if (guess > rdig)
		{
			printf("猜大了\n");
		}
		else if (guess < rdig)
		{
			printf("猜小了\n");
		}
		else if (guess == rdig)
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}