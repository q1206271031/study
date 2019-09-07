#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int method( int x,  int y)//(只有正数0x00~0xffffffff)（正负数都有的 int最高位为符号位 0x00~7fffffff）
{
	return ((x - y) >> 31 )? -1 : (x > y ? 1 : 0);//对于int型右移1位只剩符号位，为一则x<y,为零且x>y则x>y.......
	//对于unsigned	x-y是负数右移31位后为1；x-y=fff开头的正数右移也没辙；													
}							
int main() 
{	
#if 0
	int i;
	int n=5;
	//int result=1;
	int sum=0;
	for ( i = 1; i <= n; i++)
	{
		int j;
		int result = 1;
		for ( j = 1; j <= i; j++)
		{
			result = result * j;
		}
		sum += result;

	}

	int result=0;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		result = result * i;//一的阶乘，二的阶乘，三的阶乘......
		sum += result;//求和
	}
	int a1=10;
	int a2=10;
	int b1; 
	int b2; 
	b1 =( a1++ );//b1=10;括不括号都一样
	b2 = ++a2;//b2=11
	printf("%d\n", a1);//11
	printf("%d\n", a2);//11
	printf("%d\n", b1);//10
	printf("%d\n", b2);//11
	system("pause");
	return 0;
#endif
	unsigned x = 8;
	unsigned y = 80;
	//printf("%x", x - y);
	//printf("%d\n",sizeof( unsigned int));

	//printf("%0x\n", (0x8000000 - 0));
	//printf("%d\n",method(80, 0));//相减为1000 0000 0000  0000 0000 0000 0000
	printf("%d\n",method(0x80000000, 0));//相减为1000 0000 0000  0000 0000 0000 0000
	system("pause");
	return 0;

}