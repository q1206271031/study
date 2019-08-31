#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method()
{
	//0x12345678
	//0x78563412
	int a = 0x12345678;
	int b = 0;
	int res = 0;
	int i;
	for ( i = 0; i < 4; i++)
	{
		b = a >> 8 * i & 255;
		res = (res<< 8)+b;
	}
	printf("%x\n", res);
}
int main()
{
	method();
	system("pause");
	return 0;
}
