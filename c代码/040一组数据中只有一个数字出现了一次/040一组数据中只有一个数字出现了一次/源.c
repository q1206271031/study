#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int method(int arr[],int len)
{
	int result = 0;
	int i;
	for ( i = 0; i < len; i++)
	{
		result ^= arr[i];
	}
	return result;
}
int main()
{
	int arr[5] = {1,1,2,2,3};
	int len = sizeof(arr) / sizeof(arr[0]);
	system("title 一组数据中只有一个数字出现了一次,其他所有数字都是成对出现的.	请找出这个数字（使用位运算）		");
	system("color ED");

	printf("%d\n", method(arr,len));
	system("pause");
	return 0;
}