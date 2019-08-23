#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int n)
{
	if (n>9)
	{
		method(n / 10);

	}
	printf("%d", n % 10);
	
}
int main()
{
	method(123567890);
	system("pause");
	return 0;
}