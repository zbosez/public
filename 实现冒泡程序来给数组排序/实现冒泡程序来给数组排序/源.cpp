#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr1[] , int sz)
{
	int i = 0;
	int flag = 0;
	int j = 0;
	for (i = 0; i<sz -1; i++)      
	{
		for(j=0;j<sz-2;j++)        
		if (arr1[j] > arr1[j + 1])    
		{
			int temp = arr1[j + 1];
			arr1[j + 1] = arr1[j];
			arr1[j] = temp;
			flag = 1;
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr1[10] = { 1,2,7,4,5,9,3,8,6,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d   ", arr1[i]);
	}


}