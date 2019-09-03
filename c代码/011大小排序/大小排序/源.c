#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//n*(n-1)/2时间复杂度O(n^2)
void swap(int *num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
//选择排序
void selectSort(int arr[],int length) {
	for (int i = 0; i < length; i++){
		int max = arr[i];//j假设第一个为最大数
		for (int j = i + 1; j < length; j++)//找剩余未排好序的最大数
		{
			if (max<arr[j])
			{
				swap(&max, &arr[j]);//交换max 和 arr[j];
			}
		}
		arr[i] = max;//将找到的最大数排序放入队列中
	}
}
void selectSort2(int a[], int len)
{
	int max ;
	for (int i = 0;  i < len;  i++)
	{
		max = a[i];
		for (int j = i; j < len; j++)
		{
			if (max < a[j])
			{
				swap(&max, &a[j]);
				/*
				 * int temp = a[j];
				 * a[j] = max;
				 * max = temp;
				 */
			}
		}
		a[i] = max;
	}
}
void selectSort3(int a[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = a[i];
		for (int j = i+1; j < len; j++)
		{
			if (max<a[j])
			{
				swap(&a[j], &max);
			}
		}
		a[i] = max;
	}
}
void selectSort4(int a[], size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		int max = a[i];
		for (size_t j = i+1; j < len; j++)
		{
			if (max<a[j])
			{
				swap(&max,& a[j]);
			}
		}
		a[i] = max;
	}
}

//插入排序
//把数组分成已排序和未排序两个区间，以数组第一个元素当做已排序区间，剩下的即被当做未排序区间，
//每次都从未排序区间中找出一个元素来和已排序区间中的元素比较，并插入到已排序区间中的合适位置，
//直到未排序区间元素为 0 。

void insertSort(int arr[], int length) {
	for (int i = 1; i < length; i++) {
		int insert = arr[i];//待插入数字
		int j;
		for (j = i - 1; j >= 0&&insert >arr[j]; j--)//待插入的数字比前一个数字大，
		{
			arr[j + 1] = arr[j];		//数字向右移东腾出空位；
		}
		arr[j + 1] = insert;//插入空位
	}
}
void insertSort2(int a[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int insert = a[i];
		int j;
		for ( j = i-1; j >= 0; j--)
		{
			if (insert>a[j])
			{
				a[j + 1] = a[j];//j位置被空出来
			}
			else
			{
				break;//当insert小于a[j]时，它就小a[j]前面的所有数，如果继续让j--，
							//跳出循环时就会把，insert插入a[0]位置；//算法错误
			}
		}
		//退出循环时j指向挪出来的空位置的前一个位置
		a[j + 1] = insert; 
	}

}
void insertSort3(int a[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int max = a[i];
		int j;
		for ( j = i-1; j >=0; j--)//若j为size_t则在等于零后在减一时就会大于零
		{
			if (max > a[j])
			{
				a[j + 1] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j + 1] = max;
	}
}
void insertSort4(int a[], size_t len)
{
	//假设前面的都已经排好序
	for (size_t i = 0; i < len-1; i++)
	{
		int tmp = a[i + 1];
		int j = i;
		for (; j >=0 ; j--)
		{
			if (tmp > a[j])//升序
			{
				//前面后移
				a[j + 1] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1] = tmp;
	}
}

//
void bubbleSort(int arr[],int length)
{
	int end = length - 1;
	for (int end = length-1; end > 0; end--)
	{
		for (int i = 0; i < end; i++)
		{
			if (arr[i] < arr[i + 1])//降序
			{
				swap(&arr[i], &arr[i + 1]);
			}
		}
	}
}
void bubbleSort1(int a[], int len)
{
	for (int j = 0; j < len; j++)
	{
		int i = 0;
		for ( ; i < len - 1; i++)
		{
			if (a[i] < a[i + 1])
			{
				swap(&a[i], &a[i + 1]);
			}
		}
	}
}


//print函数用来打印数组
void print(int arr[],int length)
{
	for (int i = 0; i < length; i++) {
		printf("%d  ", arr[i]);
	}
}
int main()
{

	int a[] = {1,2,7,3};
	int b[] = { 1,21,3,21,33,22,0,21};
	int c[] = { 1,21,3,21,33,22,0,21};
	int length1 = sizeof(a) / sizeof(a[0]);
	int length2 = sizeof(b) / sizeof(b[0]);
	int length3 = sizeof(c) / sizeof(c[0]);

	selectSort4(a, length1);
	insertSort4(b, length2);
	bubbleSort1(c, length3);
	print(a, length1);//print函数用来打印数组
	printf("\n");
	print(b, length2);//print函数用来打印数组
	printf("\n");
	print(c, length3);//print函数用来打印数组
	system("pause");
	return 0;
}
