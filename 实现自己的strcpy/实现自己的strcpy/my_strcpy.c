#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* des,char* src)
{
	assert(des != NULL);
	assert(src != NULL);
	while (*des++ = *src++)
	{
		;
	}
	return des-4;
}
int main()
{
	char ch1[] = "abced";
	char ch2 []= "zzy";
	my_strcpy(ch1, ch2);
	printf("%s\n", ch1);
	printf("%s\n", my_strcpy(ch1, ch2));
	return 0;
}
