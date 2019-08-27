#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void printArr(char a[],int len)
{
	char *p[];  //定义一个数组来存单词的地址；指针数组
	p[0] =& a[0];
	for (int i = 0; i < len; i++)
	{
		if (a[i]==' ')
		{
			p[i+1] = &a[i + 1];
		}
	}
	//p[]数组存好了，现在取出来%s
	int len2 = sizeof(p) / sizeof(p[0]);
	printf("%d", len2);
	for (int i = len-2; i >= 0; i--)
	{
		printf("%s", p[i]);
	}
}
int main()
{	
	char a[15] = "student a am i";
	int len=sizeof(a)/sizeof(a[0]);
	printArr(a, len);
	system("pause");
	return 0;
}