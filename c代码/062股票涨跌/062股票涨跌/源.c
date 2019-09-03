#include<stdio.h>
#include<stdlib.h>
int Fun(int days)
{
	int countdays = 1;
	int i = 2;//周期，直接从第二个周期开始
	int money = 1;
	
	while (countdays < days)
	{
		if (countdays + i == days)
		{
			money += (i - 2);
			return money;
		}else if (countdays + i < days)
		{
			money += (i - 1);
			countdays += i;
			i++;
		}
		else
		{
			money += days - countdays;
			return money;
		}
	}
}
int main()
{
	printf("%d\n", Fun(10));
	system("pause");
	return 0;
}
