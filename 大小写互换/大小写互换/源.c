#define _CRT_SECURE_NO_WARNINGS 1
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述 :
//多组输入，每一行输入一个字母。
//输出描述 :
//针对每组输入，输出单独占一行，输出字母的对应形式。
#include<stdio.h>
int main()
{

	char ch='a';
	while (scanf("%c", &ch) !=EOF)
	{
		if (ch >90)
		{
			ch -= 32;
		}
		else if (ch <= 90)
		{
			ch += 32;
		}
		printf("%c\n", ch);
		getchar();
	}
	return 0;
}