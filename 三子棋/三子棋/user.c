#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
	int us = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("press button>:");
		scanf("%d", &us);
		switch (us)
		{
			case 1:
			{
				game();
				break;
			}
			case 0:
			{
				printf("ÍË³öÓÎÏ·\n");
				break;
			}
		}
	} while (us);
}