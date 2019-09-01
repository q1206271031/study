#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
/*一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个数字，编程实现。
*/
void method(int *a, int len)
{
	int ret = 0;
	int num = 0;
	int result1 = 0;
	int result2 = 0;
	for (int i = 0; i < len; i++)
	{
		ret ^= a[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			break;
		}
		num++;
	}
	for (int i = 0; i < len; i++)
	{
		if (a[i] >> num&1 == 1)
		{
			result1 ^= a[i];
		}
		else
		{
			result2 ^= a[i];
		}
	}
	printf("%d,%d",result1,result2);
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,5,4,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);
	method(a,len);
	system("pause");
	return 0;
}
