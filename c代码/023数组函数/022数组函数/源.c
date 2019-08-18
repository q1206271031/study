#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


//定义一个方法遍历数组；
void Bianli(int a[], int len)
{
	printf("现在的数组是");
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

}

//实现函数init（）初始化数组
void init(int a[],int len) 
{
	int i;
	char c;
	for ( i = 0; i < len; i++)
	{
		printf("请输入数组的a[%d]元素", i);
		scanf("%d", &a[i]);
		//printf("输完了吗 y or n");
		//getchar();
		//scanf("%c", &c);
		////getchar();
		//if (c=='y')
		//{
		//	break;
		//}
	}
	printf("执行初始化完成\n");

}
//实现empty（）清空数组、
void empty(int a[],int len)
{
	printf("执行清空数组完成\n");
	int i;
	for (i = 0; i < len; i++)
	{
		memset(a, 0, sizeof(a[0]) * len);//string.h
	}
}
//实现reverse（）函数完成数组元素的逆置。
void reverse(int a[], int len)
{
	printf("执行数组元素的逆置完成\n");

	int i=0;
	int l = 0;
	int r = len-1;
	while (l < r)
	{
		int temp;
		temp = *(a + r);
		*(a + r) = *(a + l);
		*(a + l) = temp;
		l++;
		r--;
	}
}
int main()
{
	int a[] = {0};
	int len;
	printf("初始化几个数");
	scanf("%d", &len);
	//int len = sizeof(a)/sizeof(a[0]);
	init(a , len);
	Bianli(a , len);
	reverse(a, len);
	Bianli(a, len);
	empty(a ,len);
	Bianli(a, len);
	system("pause");
	return 0;
}