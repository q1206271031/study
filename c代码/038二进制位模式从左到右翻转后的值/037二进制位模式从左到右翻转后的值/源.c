#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
unsigned int reverse_bit(unsigned int value)//莫宁奇妙写出来了，真不知道当时咋想的
{
	unsigned int result=0;
	for (int  i = 0; i < 32; i++)
	{
		result = (result << 1) + ((value >> i) & 1);
	}
	return result;
}

int main()
{
	unsigned int value = 25;
	system("title value的二进制位模式从左到右翻转后的值");
	system("color ED");

	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}

