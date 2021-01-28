#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* pc)
{
	int count = 0;
	while (*pc++!='\0')
	{
		count++;
	}
	return count;
}


int main()
{
	char ch []= "abcdefg";
	printf("%d", my_strlen(ch));
	
	return 0;
}


