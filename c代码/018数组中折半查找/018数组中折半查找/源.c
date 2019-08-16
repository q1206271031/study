#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int a[],int len,int key)
{
	int lift=0;//都是索引
	int right=len+1;
	int mid;
	while (lift<=right)
	{
		mid = (lift + right) / 2;
		if (a[mid] > key)
		{
			right = mid - 1;
		}   
		else if (a[mid] < key)
		{
			lift = mid + 1;
		}
		else if (a[mid] = key)
		{
			break;
		}

	}
	if (a[mid]==key)
	{
		printf("%d的下标是%d\n", key, mid);
	}
	else {
		printf("没找到\n");
	}

}
int main()
{
	int a[] = { 1,2,3,4,5,56,66 };
	int len = sizeof(a) / sizeof(a[0]);
	int key ;
	printf("请输入要查找的数\n");
	scanf("%d",&key);
	method(a, len, key);
	system("pause");
	return 0;
}