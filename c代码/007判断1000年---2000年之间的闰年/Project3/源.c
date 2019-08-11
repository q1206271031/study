#include<stdio.h>
#include<windows.h>
int main()
{
	// 判断1000年---2000年之间的闰年 
	//if(i % 400 == 0 || (i % 100 != 0 && i % 4 == 0 ))
	 
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 100 == 0)
		{
			if (i % 400 == 0)
			{
				printf("%d是闰年  ", i);

			}
		}
		else
		{
			if (i % 4 == 0)
			{
				printf("%d是闰年  ", i);

			}
		}
	}
	system("pause");
	return 0;
	

}