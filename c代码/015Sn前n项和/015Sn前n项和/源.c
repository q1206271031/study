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
int main()
{
	int s;
	printf("请输入S1");
	scanf("%d", &s);
	method(s);
	system("pause");
	return 0;
}