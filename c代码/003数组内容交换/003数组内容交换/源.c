#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//int len = sizeof(arr0) / sizeof(arr0[0]);
//int swap(int (*a)[10][1],int (*b)[10][1],int len)
//{
//	int temp;
//	for (int i = 0; i <  len; i++)
//	{
//		temp = *a[i];
//		*a[i] = *b[i];
//		*b[i] = *temp;
//	}
//}
int main()
{
	int arr0[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr1[10] = { 0,9,8,7,6,5,4,3,2,1 };
	int temp = 0;
	for (int i = 0; i < sizeof(arr0)/sizeof(arr0[0]); i++)
	{
		temp = arr0[i];
		arr0[i] = arr1[i];
		arr1[i] = temp;
	}
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d\t", arr0[i]);
		printf("%d\t", arr1[i]);
		printf("%\n");
		
	}
	system("pause");
	return 0;
}
