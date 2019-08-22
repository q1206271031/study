#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int method(int n)
{
	int count = 0;
	while ( n )
	{
		n &=(n - 1);
		count++;
	}
	return count;
}
int main()
{
	printf("%d\n",method(1));
	system("pause");
	return 0;
}