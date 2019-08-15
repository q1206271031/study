#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*************************************************\n");
	printf("****************1.piay***************************\n");
	printf("****************0.exit***************************\n");
	printf("*************************************************\n");
}

void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入你猜的数字");
		scanf("%d", &input);
		if (input == random_num) {
			printf("对了\n");
			break;

		}
		else if (input > random_num) {
			printf("大了\n");

		}
		else if (input < random_num) {
			printf("小了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重输入");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}