#define _CRT_SECURE_NO_WARNINGS 1
/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。 
嫌疑犯的一个。以下为4个嫌疑犯的供词。 
A说：不是我。 
B说：是C。 
C说：是D。 
D说：C在胡说 
已知3个人说了真话，1个人说的是假话。 
现在请根据这些信息，写一个程序来确定到底谁是凶手。 
*/
//1表示是凶手
#include<stdio.h>
#include<windows.h>

void method1()
{

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
		{
			for (int c = 0; c < 2; c++)
			{
				for (int d = 0; d < 2; d++)
				{
					if ((a == 1 && c == 1 && d == 1 & d == 0) && (a + b + c + d == 1))//每次假设一个人说谎
					{
						printf("a在说谎\n");
						if (a== 1)
						{
							printf("a是凶手\n");
						}
						if (b== 1)
						{
							printf("b是凶手");
						}
						if (c== 1)
						{
							printf("c是凶手");
						}
						if (d== 1)
						{
							printf("d是凶手");
						}
					}
					if ((a != 1 && c != 1 && d == 1 & d == 0) && (a + b + c + d == 1))
					{
						printf("b在说谎\n");
						if (a == 1)
						{
							printf("a是凶手");
						}
						if (b == 1)
						{
							printf("b是凶手");
						}
						if (c == 1)
						{
							printf("c是凶手");
						}
						if (d == 1)
						{
							printf("d是凶手");
						}
					}
					if ((a != 1 && c == 1 && d != 1 & d == 0) && (a + b + c + d == 1))
					{
						printf("c在说谎\n");
						if (a == 1)
						{
							printf("a是凶手");
						}
						if (b == 1)
						{
							printf("b是凶手");
						}
						if (c == 1)
						{
							printf("c是凶手");
						}
						if (d == 1)
						{
							printf("d是凶手");
						}
					}
					if ((a != 1 && c == 1 && d == 1 & d != 0) && (a + b + c + d == 1))
					{
						printf("d在说谎\n");
						if (a == 1)
						{
							printf("a是凶手\n");
						}
						if (b == 1)
						{
							printf("b是凶手");
						}
						if (c == 1)
						{
							printf("c是凶手");
						}
						if (d == 1)
						{
							printf("e是凶手");
						}
					}
				}
			}
		}
	}
}
void method2()
{
	char killer;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
		{
			printf("凶手是%c\n", killer);
		}
	}

}
int main()
{
	method1();
	putchar('\n');
	method2();
	system("pause");
	return 0;
}
