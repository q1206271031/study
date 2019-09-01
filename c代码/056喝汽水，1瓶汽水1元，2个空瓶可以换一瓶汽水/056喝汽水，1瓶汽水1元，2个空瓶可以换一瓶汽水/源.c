#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
/*喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现。*/
//方法一
int method(int n) {
	int drink = n;//上一次喝的//drink%2没兑完的
	int empty = n;//
	int remainder;
	while (empty > 1) {
		drink += empty / 2;//


		//remainder += drink % 2;//丢换剩余
		//empty = drink + remainder;//空瓶书等于上一次喝的数量+上上一次没兑换的瓶子//
		//drink = empty % 2;//换到的饮料数

		empty = empty / 2 + empty % 2;//空瓶书等于上一次喝的数量+上上一次没兑换的瓶子；
	}
	return drink;
}
//方法二
int num (int n)
{
	if (n != 0)//零元返回零瓶
	{
		if (n != 1)//一元返回一瓶
		{
			if (n%2 == 0)//偶数
			{
				return n + num(n/2);//偶数直接返回第n行的个数加第n-1行的个数

;
			}
			else//奇数
			{
				return (n - 1) + num((n/2) + 1);//奇数时吧第n行余下的一个挪到第n-1行，按n-1行的进行计算
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
//方法三
int Fun2(int money,int num)
{
	
	money = money - num;
	int sum = 0;
	sum += num+1;
	while (money)
	{
		money-=(num-1);
		sum += num;
	}
	return sum;
}
int main()
{

	int n = 20;
	printf("%d", method(n));
	system("pause");
	return 0;
}
