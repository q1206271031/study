#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void showmenu()
{
	printf("**********************************\n");
	printf("*********   1.play    ************\n");
	printf("*********   0.exit    ************\n");
	printf("**********************************\n");
}
//实现打印局势函数
void Print_che(char arr[3][3], int row, int col) //打印棋盘
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		//循环输出数组一行中的元素，并用|隔开
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				putchar('|');
		}
		putchar('\n');
		//循环输出数组一行中的元素，并用|隔开
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
				printf("___");
			else
			{
				printf("   ");
			}
			if (j < col - 1)
				putchar('|');
		}
		putchar('\n');
	}
}

//实现棋局为满函数
int Isfull(char arr[3][3])//未满返回0
{
	int i;
	for (i = 0; i < 3; i++)
	{
		int j;
		for (j = 0; j < 3; j++)
		{
			if (arr[i][j] ==' ')//存在空白点，未满
			{
				return 0;
			}
		}
	}
	return  1;

}

//实现判断落子点(x,y)合法性判断函数
int Isok(char arr[3][3], int x, int y)//合法返会1
{
	if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
	{
		if (arr[x - 1][y - 1] == ' ')//存在空白点
		{
			return 1;//OK
		}
	}
	return 0;
}
//实现模拟电脑落子函数
void computer(char arr[3][3], int row, int col)
{
	while (1)
	{
		int x,y;
		//产生随机
		x = rand() % row + 1;//3  [0-3)   [1-3]
		y = rand() % col + 1;
		//判断位置合法性
		if (Isok(arr, x, y) == 1)
		{
			arr[x-1][y-1] = 'o';
			break;
		}
	}
}
//实现玩家落子函数
void player(char arr[3][3])
{
	//请求玩家输入落子位置；
	while (1)
	{
		int x, y;
		printf("在这里数输入落子点坐标：");
		scanf("%d %d", &x, &y);
		//判断位置合法性
		if ( Isok(arr, x, y) == 1 )
		{
			arr[x - 1][y - 1] = 'x';
			break;
		}
		else
		{
			printf("坐标不合法重新输入\n");
		}
	}
}

char Iswin(char board[][3], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
    {
		//行
		if (board[i][0] == board[i][1]
			&& board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
		//列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[0][0] != ' ')
		{
			return board[0][2];
		}
		//平局
		if (Isfull(board) == 1)
		{
			return 'Q';
		}
	}
	//即没有赢，也没有平局继续游戏
	return '0';

}
//裁判函数宣布结果
void referee(char  flag)
{
	if (flag == 'x')
	{
		printf("玩家胜利\n");
	}
	else if (flag == 'o')
	{
		printf("电脑胜利\n");
	}
	else if (flag == 'Q')
	{
		printf("平局\n");
	}
}
//棋局初始化为空白格
void InitBoard(char board[3][3], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(board,' ',row*col*sizeof(char));
}

void game()
{
	char flag='0';
	char arr[3][3];
	//初始话空白棋局状态
	InitBoard(arr, 3, 3);
	while (flag == '0')
	{
		//打印当前棋盘状态
		Print_che(arr, 3, 3);
		//玩家落子
		player(arr);
		//电脑落子
		computer(arr, 3, 3);
		//判断输赢
		flag = Iswin(arr, 3, 3);
	}
	//调用裁判函数判断flag评定比赛结果
	referee(flag);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		showmenu();
		printf("请输入你的操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}