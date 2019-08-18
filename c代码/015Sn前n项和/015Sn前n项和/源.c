#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int s)
{
	int n;
	int b=1;
	int result = 0;
	int si = 0;
	int sn = 0;

	printf("要求多少项之和");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)//循环N次
	{
		si = s * b;//Sn的某一位
	//2	si = s * pow(10,i);//Sn的某一位
		sn += si;//Sn
		result += sn;//Sn的和
		b *= 10;

	}
	printf("%d\n", result);
}

int Fun(int s1,int n)
{
	int i;
	int temp = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		temp = temp * 10 + s1;
		sum += temp;
	}
	return sum;
}
int main()
{
	int s1;
	int n = 3;
	printf("请输入S1");
	scanf("%d", &s1);

	//method(s1);
	printf("%d\n", Fun(s1,n));
	system("pause");
	return 0;
}