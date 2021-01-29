#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void reverse(char* arr)
{
	int leng = strlen(arr);
	if (leng >= 2)
	{
		int temp = *arr;
		*arr = *(arr + leng - 1);
		*(arr + leng - 1) = '\0';
		reverse(arr + 1);
		*(arr + leng - 1) = temp;
	}
}
void print(char* arr)
{
	int leng = strlen(arr);
	int i = 0;
	for (i = 0;i < leng;i++)
	{
		printf("%c", arr[i]);
	}

}
int main()
{
	char arr[7] = "abcdef";
	reverse(arr);
	print(arr);
	return 0;
}
