#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void print(int n)
{
	int i;
	for (  i = 0; i < 32; i++)
	{
		if ((n>>i)&1)//右移后末尾为1
		{
			putchar('1');
			if ((n>>(i+1))==0)//再次右移后为0；就停止
			{
				break;
			}
		}
		else if ((n >> i) > 0)//右移以后末尾为0，且右移后不为0
		{
			putchar('0');
		}
		else
		{
			break;
		}
	}
}
void method(int n)
{
	int odd;//奇数
	int even;//偶数
	printf("左起奇数位：");
	for (int i = 31; i >=1; i-=2)//右移取左起奇数位
	{
		odd = (n >> i) & 1;
		//odd <<= odd;
		printf("%d", odd);
	}
	putchar('\n');
	printf("左起奇数位：");
	for (int i = 30; i >= 0; i -= 2)//右移取左起偶数位
	{
		even = (n >> i) & 1;
		//even <<= even;
		printf("%d", even);
	}
	putchar('\n');
}
void Fun(int n)
{
	int sum1 = 0;
	int sum2 = 0;
	int length = 0;
	for (int i = n; n; n >>= 2)
	{
		sum1 = (sum1 <<1 )+ (n & 1);//右起奇数位
		sum2 = (sum2 << 1)+ (n >> 1 & 1);//偶数位
		length++;
	}
	//打印
	//printf("%d",sum2);
	for (int i = 0; i <length ; i++)
	{
		printf("%d", sum1>>i&1);
	}
	putchar('\n');
	for (int i = 0; i < length; i++)
	{
		printf("%d", sum2 >> i & 1);
	}
}
int main()
{
	//printf("%d", method(n));
	//method(13); 8+4+1   1101
	Fun(13);
	system("pause");
	return 0;
}