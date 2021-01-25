#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
extern void menu();
extern void game();
int main()
{
	menu();
	printf("请选择>:");
	srand((unsigned int)time(NULL));
	do
	{
		int sf = 0;
		scanf("%d", &sf);
		switch (sf)
		{	
			case 1:
			{
				game();
				menu();
				printf("请选择>:");
				break;
			}
			case 0:
			{
				printf("退出游戏\n");
				break;
			}
			default:
			{	
				printf("请输入正确的值\n");
				printf("请选择>:");
				break;
			}
		}
	} while (1);
	return 0;
}