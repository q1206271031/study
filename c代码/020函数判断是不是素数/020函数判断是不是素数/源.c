#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

void method(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i==0)
		{
			printf("不是素数\n");
			break;

		}
	}
	if (i>sqrt(n))
	{
		printf("是素数\n");
	}
}
int main()
{
	method(4);
	system("pause");
	return 0;
}