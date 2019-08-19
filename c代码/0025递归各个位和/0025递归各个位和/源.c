#define _CRT_SECURE_NO_WARNINGS 1
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>
#include<windows.h>

int sum = 0;
int method(int n)
{
	//int sum = 0;
	if (n > 9)
	{
		method(n / 10);
	}
	sum += n % 10;
	
}
int main()
{
	method(11111);
	printf("%d\n",sum);
	system("pause");
	return 0;
}