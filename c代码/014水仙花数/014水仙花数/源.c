#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

void method()
{
	int num;//输入待判断的数
	int sum = 0;
	printf("请输入一个数");
	scanf("%d", &num);
	if (num>0x7fffffff)
	{
		printf("数太大，判断不了");

	}
	else {
		//判断有几位，从而确定幂值；0x7fff=32767
		int n = 10;
		for (int i = 1000000000; i > 0; i /= 10)
		{
			if (num / i != 0)
			{
				break;
			}
			--n;
		}
		
		/*数位统计
		int n=0;
		for (int i = num; i ; i /= 10)
		{
			n++;
		}*/
		//各位幂次放加起来
		for (int i = 1; i < pow(10, n); i *= 10)
		{
			int a = num / i % 10;
			//int a2 = pow(a, n);
			sum += pow(a, n);
		}
		//判断是不是水仙花数
		if (num == sum)
		{
			printf("是水仙花数\n");
		}
		else {
			printf("不是水仙花数\n");

		}
	}
}
int main()
{
	method();
	system("pause");
	return 0;
}