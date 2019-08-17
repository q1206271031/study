#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int*p)
{
	(*p)++;
	printf("%d\n",*p);
}
int main()
{
	int a = 8;
	method(&a);
	method(&a);
	method(&a);
	system("pause");
	return 0;
}