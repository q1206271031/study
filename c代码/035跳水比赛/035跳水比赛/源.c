#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
A选手说：B第二，我第三； 10 a=b=~e=~d=c
B选手说：我第二，E第四； 10 c=~d
C选手说：我第一，D第二；    d=~a
D选手说：C最后，我第三； 
E选手说：我第四，A第一； 
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。 
*/
void method()
{ 
	int a, b, c, d, e;
	for ( a = 1; a < 6; a++)
	{
		for ( b = 1; b < 6; b++)
		{
			for ( c = 1; c < 6; c++)
			{
				for ( d = 1; d < 6; d++)
				{
					for ( e = 1; e < 6; e++)//10
					{
						if ( a*b*c*d*e==120)
						{ 
							if ((2 == b && 3 != a) +(2 != b && 3 == a) == 1)
							{
								if ((2 == b && 4 != e) + (2 != b && 4 == e) == 1)
								{
									if ((1 == c && 2 != d) + (1 != c && 2 == d) == 1)
									{
										if ((5 == c && 3 != d) + (5 != c && 3 == d) == 1)
										{
											if ((4 == e && 1 != a) + (4 != e && 1 == a) == 1)
											{
												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
		
}
int main()
{
	method();
	system("pause");
	return 0;
}