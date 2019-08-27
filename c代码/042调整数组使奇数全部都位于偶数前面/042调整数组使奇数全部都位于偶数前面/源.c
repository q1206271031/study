#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 0)//偶数
		{
			int temp;
			int j;
			for ( j = len - 1; j > i; j--)//找奇数
			{
				if (a[j] % 2 != 0)//直到找到奇数；
				{
					break;
				}
			}
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}
void printArr(int a[],int len)
{

	for (int  i = 0; i < len; i++)
	{
		printf("%d   ", a[i]);
	}
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int len = sizeof(a) / sizeof(a[0]);
	method( a,  len);
	printArr( a,  len);
	system("color ED");
	system("pause");
	return 0;
}