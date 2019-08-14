#include<stdio.h>
#include<Windows.h>

//方法一
int factoria0(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}


//递归方法
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{	
	int m = 5;
	printf("%d\n", factoria0(m));
	printf("%d\n", factorial(m));
	system("pause");
	return 0;
}