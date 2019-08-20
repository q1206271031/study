#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//非递归实现strlen
int strlen1(const char*str) 
{
	int count=0;
	while (*str != '\0')
	{
		count++;
		str += 1;
	}
	return count;
}

//递归实现strlen
int strlen2(const char*str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen2(str + 1);
	}

}

int main()
{
	char *str = "abcdef";
	printf("%d\n", strlen1(str));
	printf("%d\n", strlen2(str));
	system("pause");
	return 0;
}