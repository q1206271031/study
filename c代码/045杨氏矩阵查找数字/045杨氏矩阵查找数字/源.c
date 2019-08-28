#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>

int method1(int arr[][3], int row, int col, int value)
{
	int ret = 0;

	// i,j为右上角坐标
	int i = 0;
	int j = col - 1;
	while (i < row && j >= 0)
	{
		if (value == arr[i][j])//找到了
		{
			ret = 1;
			break;
		}
		else if (arr[i][j] > value)//右上角大于它，
		{
			--j;
		}
		else//右上角小于它，换到下一行
		{
			++i;
		}
	}
	return ret;
}
int method2(int a[][3], int row, int col, int **returnrow, int **returncol, int key)
{
	int i = 0;
	int j = col-1;
		while ((i>=0&&i<=row-1)&&(j >= 0 && j <= col - 1))
		{
			if (a[i][j] == key)
			{
				printf("找到了");
				/**returnrow =i;  
				*returncol = j;*/
				/*returnrow = &i;  临时指针在函数运行完后，生命周期结束，不能改变主函数参数的值；
				returncol = &j;*/
				*returnrow = &i;  
				*returncol = &j;
				break;
			}
			else if (a[i][j] < key)
			{
				i++;//到下一行
			}
			else if (a[i][j] > key)
			{
				j--;
			}
		}
		//判断一下坐标改变没有改变了返回1否则返回零
		if (true)
		{

		}
}

int main()
{
	//t1();
	int arr[][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
		int key = 5;
	/*int a = 0;
		int b = 0;*/
		int returnrow;
		int returncol;
		int *returnrow1=NULL;
		int *returncol1=NULL;
		int **returnrow2 = NULL;
		int **returncol2= NULL;

		method2(arr, 3, 3, &returnrow1, &returncol1, key);
		returncol2 = &returncol1;
		returnrow2 = &returnrow1;

	//if (method1(arr, 3, 3, 1))//找到了
	//{
	//	printf("1\n");
	//}
	//else
	//{
	//	printf("0\n");
	//}
	printf("%d的坐标是(%d,%d)\n", key, **returnrow2, **returncol2);
	system("pause");
	return 0;
}

