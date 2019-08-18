#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int method(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	else
	{
		return x * method(x, y - 1);

	}
	//return x*method(x, y - 1);
}
int main()
{
	printf("%d^%d=%d\n", 2, 10, method(2, 10));
	system("pause");
	return 0;
}