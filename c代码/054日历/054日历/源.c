#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define bigmonth 31
#define simmonth 30
#define bigFeb 29
#define simFeb 28

void math(int *day, int daysOfmonth)
{ 
	int numberOfline=0; 
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	//putchar('\n');
	if (*day != 7)
	{//不是星期日，打印空格填充
		for (int i = 0; i <* day; i++)
		{
			numberOfline++;
			printf("    " );
		}
	}
	//打印数字
	for (int i = 1; i <= daysOfmonth; i++)
	{
		numberOfline++;
		if (numberOfline % 7 == 0)
		{
			printf("%2d\n", i);
		}
		else
		{
			printf("%2d  ", i);
		}
	}
	putchar('\n');
	putchar('\n');
	putchar('\n');
	*day = (*day + daysOfmonth % 7)%7;
}

//判断闰年
void method(int year,int *day)
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		printf("%d-January\n", year); 
		putchar('\n');
		math(day, 31);
		printf("%d-Febuary\n", year);
		putchar('\n');
		math(day, 29);
		printf("%d-March\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-April\n",year);
		putchar('\n');
		math(day, 30);
		printf("%d-May\n",year);
		putchar('\n');
		math(day, 31);
		printf("%d-June\n",year);
		putchar('\n');
		math(day, 30);
		printf("%d-July\n",year);
		putchar('\n');
		math(day, 31);
		printf("%d-August\n",year);
		putchar('\n');
		math(day, 31);
		printf("%d-September\n",year);
		putchar('\n');
		math(day, 30);
		printf("%d-October\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-Noveber\n", year);
		putchar('\n');
		math(day, 30);
		printf("%d-Dacember\n", year);
		putchar('\n');
		math(day, 31);
	}
	else
	{
		printf("%d-January\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-Febuary\n", year);
		putchar('\n');
		math(day, 28);
		printf("%d-March\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-April\n", year);
		putchar('\n');
		math(day, 30);
		printf("%d-May\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-June\n", year);
		putchar('\n');
		math(day, 30);
		printf("%d-July\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-August\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-September\n", year);
		putchar('\n');
		math(day, 30);
		printf("%d-October\n", year);
		putchar('\n');
		math(day, 31);
		printf("%d-Noveber\n", year);
		putchar('\n');
		math(day, 30);
		printf("%d-Dacember\n", year);
		putchar('\n');
		math(day, 31);;

	}	
}

int main()
{
	int day = 2;
	int year = 2019;
	method(year,&day);
	system("pause");
	return 0;
}

