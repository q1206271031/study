#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
/*
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/

void method(int arr[10][10],int n)
{
	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

}
void init(int arr[10][10],int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
	
		arr[i][0] = 1;
		arr[i][i] = 1;
		//printf("%d",arr[i][i]);
		
	}
}
void print(int arr[10][10],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		putchar('\n');
	}
}
int main()
{
	int n=9;
	int arr[10][10];
	init( arr, n);
	method( arr,n);
	print( arr,  n);
	//printf("%d", method(n));
	system("pause");
	return 0;
}