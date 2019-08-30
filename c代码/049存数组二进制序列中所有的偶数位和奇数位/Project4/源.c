#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void print_num(unsigned value)
{
	int count = 0;//计算二进制 位数
	int a[32] = { 0 };
	int i = 0;
	while (value) {
		a[i++] = value % 2;
		value /= 2;
		count++;
	}
	printf("奇数序列\n");
	for (i = count; i >= 0; i -= 2) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("偶数序列\n");
	for (i = count - 1; i >= 0; i -= 2) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	printf("获取一个数二进制序列中所有的偶数位和奇数位,分别输出二进制序列(测试数字01011)\n");
	int value = 11;//01011
	print_num(value);
	system("pause");
	return 0;
}