#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "would you marry me?";
	char arr2[] = "*******************";
	int sz1 = sizeof(arr1);
	//int sz2 = sizeof(arr2);
	int left = 0;
	int right = sz1 - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(500);//µ¥Î»ÊÇºÁÃë,windows.h
		system("cls");//stdlib.h
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}
