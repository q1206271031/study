#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int NumberOf1(int n)
{
	int count=0;
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	return count;
}
int method(int m,int n)
{
	int temp,result;
	temp = m ^ n;
	//NumberOf1(temp);
	return NumberOf1(temp);

}
int main()
{
	printf("%d\n ", method(13,2));
	system("pause");
	return 0;
}