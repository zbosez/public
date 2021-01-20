#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[20] = { 0 };
	char password[20] = "1234zzz";//假设password是 1234zzz	
	char qr[2] = "";
	int i = 0;
	for (i = 0;i <= 3;i++)
	{
		printf("请输入您的密码>:");
		scanf("%s", arr1);
		printf("请确认(Y/N)>:");
		scanf("%s", qr);
		if (strcmp(qr, "Y") == 0)
		{
			if (strcmp(password, arr1) == 0)
			{
				printf("密码正确");
				break;
			}
			else if (strcmp(password, arr1) != 0)
			{
				printf("密码错误，请重试");
			}
		}
		else
			printf("请重试");
	}
	if (i == 4)
		printf("三次均输入错误，为保证账户安全，请1min后重试");	
	return 0;
}

