#include<stdio.h>
#include<math.h>

int prime(int n)//定义一个判断素数的函数
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			printf("不是素数");
			break;
		}
	}
	if (i > sqrt(n))
	{
		printf("%d是素数\n",n);
	}
}

int main()
{
	for (int i = 100; i < 201; i++)
	{
		prime(i);
	}

}