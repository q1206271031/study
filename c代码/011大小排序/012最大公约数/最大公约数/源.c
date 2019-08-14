#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


int main()
{
	int numb1=10;
	int numb2=15;
	int gcd;
#if 0
	for (int  i = 1; i <= numb1&&i<=numb2; i++)
	{
		if (numb1%i==0&&numb2%i==0)//执行多次
		{
			gcd = i;
		}
	}
#endif
	for (int  i = numb1>numb2?numb2:numb1; i >0; i--)
	{
		if (numb1%i == 0 && numb2%i == 0)//执行一次
		{
			gcd = i;
			break;
		}
	}
	printf("%d\n", gcd);
	system("pause");
	return 0;

}
