#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Cols 9
#define Rows 9
//打印菜单
void showmenu()
{
	printf("************************************\n");
	printf("************1.play******************\n");
	printf("************0. exit******************\n");
	printf("************************************\n");
}
//初始化雷表全部置零
void initnime(char mine[][Rows])
{
	for (int i = 0; i <= Cols; i++)
	{
		for (int j = 0; j <= Rows; j++)
		{
			mine[i][j] = '0';
		}
	}
}
//设置雷表
void designmine(char mine[][Rows], int minenum)
{
	int count = 0;
	while (count < minenum)
	{
		int x = rand() % Cols + 1;
		int y = rand() % Rows + 1;
		mine[x][y] = '1';
		count++;
	}
}
//初始化雷数信息表全表示为*
void initmineInfo(char mineinfo[][Rows])
{
	for (int i = 0; i <= Cols; i++)
	{
		for (int j = 0; j <= Rows; j++)
		{
			mineinfo[i][j] = '*';
		}
	}
}
//打印点击（输入坐标）后的雷数信息表
void showmineinfo(char mineinfo[][Rows])
{
	for (int i = 0; i <= Rows; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');
	for (int i = 1; i <= Rows; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= Cols; j++)
		{
			printf("%c ", mineinfo[i][j]);
		}
		putchar('\n');
	}
}
void showmine(char mine[][Rows])
{
	for (int i = 0; i <= Rows; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');
	for (int i = 1; i <= Rows; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= Cols; j++)
		{
			printf("%c ", mine[i][j]);
		}
		putchar('\n');
	}
}
void calculate(char mineinfo[][Rows], char mine[][Rows], int x, int y,int* count)
{
	mineinfo[x][y] = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0' + '0';
	if (mineinfo[x][y] == '0')
	{
		calculate(mineinfo, mine, x - 1, y - 1,count);
		calculate(mineinfo, mine, x - 1, y,count);
		calculate(mineinfo, mine, x - 1, y + 1,count);
		calculate(mineinfo, mine, x, y - 1,count);
		calculate(mineinfo, mine, x, y + 1,count);
		calculate(mineinfo, mine, x + 1, y - 1,count);
		calculate(mineinfo, mine, x + 1, y,count);
		calculate(mineinfo, mine, x + 1, y + 1,count);
	}
	else
	{		//展示次位置
		*count++;
		showmineinfo(mineinfo);
		return;
	}
}
//
void game()
{
	int x;
	int y;
	int count = 0;
	char mine[Cols][Rows];
	char mineinfo[Cols][Rows];
	int minenum = 10;
	//初始化雷表
	initnime(mine);
	//设计雷表，设置雷数，及位置
	designmine(mine, minenum);
	//初始化信息表为*
	initmineInfo(mineinfo);
	//
	showmineinfo(mineinfo);
	do
	{
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);
	} while (x < 0 && x >= Cols && y < 0 && y >= Rows);//坐标合法性判断,非法坐标继续输入
	//是否踩雷
	if (mine[x][y] == '1')
	{//首次踩雷将雷移开；
		mine[x][y] = '0';
		int x1;
		int y1;
		do
		{
			x1 = rand() % Cols + 1;
			y1 = rand() % Rows + 1;
			mine[x1][y1] = '1';
		} while (mine[x1][y1] == '1');
	}
	else
	{//计算周围雷数
		calculate(mineinfo, mine, x, y,&count);
		/*mineinfo[x][y] = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] +
			mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y - 1] - 8 * '0' + '0';*/
			//展示周围雷数信息表
			//mineinfo[x][y]=result+
		showmineinfo(mineinfo);
		count++;
	}

	do
	{
		do
		{
			printf("请输入坐标\n");
			scanf("%d%d", &x, &y);
		} while (x < 0 && x >= Cols && y < 0 && y >= Rows);//坐标合法性判断,非法坐标继续输入
		//是否踩雷
		if (mine[x][y] == '1')
		{
			printf("炸死了\n");
			showmine(mine);
		}
		else
		{//计算周围雷数
		    //	calculate(mineinfo, mine, x, y);
			//展示周围雷数信息表
			//mineinfo[x][y]=result+
			calculate(mineinfo, mine, x, y,&count);
		}
	} while (count = (Cols - 1)*(Rows - 1) - minenum);//找完了
		if (count == (Cols - 1)*(Rows - 1) - minenum)
		{
			printf("胜利");
		}
	}
	int main()
	{
		/*char mine[Cols][Rows];
		int mineInfo[Cols][Rows];*/
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			showmenu();
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出成功");
				break;
			default:
				break;
			}
		} while (input);
		system("pause");
		return 0;
	}
