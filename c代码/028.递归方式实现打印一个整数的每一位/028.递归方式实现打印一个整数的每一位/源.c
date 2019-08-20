#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int n)
{
	if (n = 0)
	{
		return;//(¿ÉÑ¡Ìî0)
	}
	method(n / 10);
	//printf("%d ", n % 10); 
	putchar(n % 10 + 'A');
	putchar("01234567890"[n % 10]);
}
int main()
{
	method(1357);
	system("pause");
	return 0;
}