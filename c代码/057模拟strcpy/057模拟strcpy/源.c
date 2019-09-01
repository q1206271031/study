#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* strcpy1(char *target,char*src)
{
	int i;
	for ( i = 0; src[i] != '\0'; i++)
	{
		target[i] = src[i];
	}
	target[i] = '\0';
	return target;
}
char* strcpy2(char *target, char*src)
{
	int i;
	for (i = 0; i<=strlen(src); i++)
	{
		target[i] = src[i];
	}
	return target;
}

//char*strcat(char *target, char*src)
//{
//	for (int i = 0; i <= strlen(src); i++)
//	{
//		target[i+ strlen(target)] = src[i];//使用下标只能访问这个长度数组的内容，而使用指针可以扩展数组
//	}
//	return target;
//}
char*strcat(char *target, char*src)
{
	char* temp = target;
	temp = target + strlen(target);
	for (int i = 0; i <= strlen(src); i++)
	{
		*(temp +i)= src[i];
	}
	return target;
}
char*strcat2(char *target, char*src)
{

	char* tmp = target;
	while (*target)
	{
		*target++;
	}
	while ((*target++ = *src++) != '\0' )
	{
		;
	}

	return tmp;
}
int main()
{
	char target[]="avcgf";
	char src[] = "abcdef";
	int len=sizeof(src)/sizeof(src[0]);
	printf("%s\n", strcpy2(target, src));
	printf("%s\n", strcat(target, src));
	system("pause");
	return 0;
}