#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//选择排序
void selectSort(int arr[],int length) {
	for (int i = 0; i < length; i++){
		int max = arr[i];//j假设第一个为最大数
		for (int j = i + 1; j < length; j++)//找剩余未排好序的最大数
		{
			if (max<arr[j])
			{
				//swap(&max, &arr[j]);//交换max 和 arr[j];
				int temp = max;
				max = arr[j];
				arr[j] = temp;
			}
		}
		arr[i] = max;//将找到的最大数排序放入队列中
	}
}
//插入排序
//把数组分成已排序和未排序两个区间，以数组第一个元素当做已排序区间，剩下的即被当做未排序区间，
//每次都从未排序区间中找出一个元素来和已排序区间中的元素比较，并插入到已排序区间中的合适位置，
//直到未排序区间元素为 0 。

void insertSort(int arr[], int length) {
	for (int i = 1; i < length; i++) {
		int insert = arr[i];
		int j;
		for (j = i - 1; j >= 0&&insert >arr[j]; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = insert;
	}
}

//void swap(int *num1,int *num2)
//{
//	int temp;
//	temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}

//print函数用来打印数组
void print(int arr[],int length)
{
	for (int i = 0; i < length; i++) {
		printf("%d  ", arr[i]);
	}
}
int main()
{

	int a[3] = {1,2,3};
	int b[9] = { 1,21,3,21,33,22,0,21};
	int length1 = sizeof(a) / sizeof(a[0]);
	int length2 = sizeof(b) / sizeof(b[0]);
	selectSort(a, length1);
	insertSort(b, length2);
	print(a, length1);//print函数用来打印数组
	printf("\n");
	print(b, length2);//print函数用来打印数组
	system("pause");


}
