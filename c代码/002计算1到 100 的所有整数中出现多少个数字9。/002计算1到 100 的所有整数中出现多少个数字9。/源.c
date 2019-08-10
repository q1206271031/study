#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int method()
{
	int total = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i / 1 % 10 == 9)//个位
		{
			total += 1;
		}
		if (i / 10 % 10 == 9)//十位
		{
			total += 1;
		}
	}
	return total;
}
int main()
{
	int accept = method();
	printf("%d\n", accept);	
	system("pause");
	return 0;
}
