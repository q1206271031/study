#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void swap(int arr1[], int arr2[],size_t len)
{
	int temp;
	for (size_t i = 0; i < len; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
void  print(int arr[], size_t len)
{
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}
	putchar('\n');

}
int main()
{
	int arr0[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr1[10] = { 0,9,8,7,6,5,4,3,2,1 };
	int len= sizeof(arr0) / sizeof(arr0[0]);
	swap(arr0, arr1, len);
	print( arr0,  len);
	print(arr1, len);
	system("pause");
	return 0;
}
