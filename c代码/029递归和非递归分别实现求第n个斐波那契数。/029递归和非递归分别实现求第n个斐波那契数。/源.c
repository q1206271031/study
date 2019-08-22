#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//递归方法
int method1(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return method1(n - 1) + method1(n - 2);
	}
}
//循环方法
int method2(int n)
{
	int result;
	int pre_result;
	int next_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_result=pre_result;
		pre_result=result;
		result= pre_result + next_result;

	}
	return result;
}
int main()
{
	printf("%d\n",method1(5));
	printf("%d\n",method2(5));
	system("pause");
	return 0;
}