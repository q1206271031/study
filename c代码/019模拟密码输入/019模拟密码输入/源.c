#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method()
{
	char str[10] = { 0 };
	int i;
	for (i = 2; i >= 0 ; i--)
	{

		printf("请输入密码");
		scanf("%s", str);
		if (strcmp(str,"password")==0)
		{
			break;
		}
		if (i==1)
		{
			printf("exit\n");
		}
		printf("您还有%d次机会\n",i);
	}
	if (i<0)
	{
		printf("exit\n");
	}
	else
	{
		printf("log in\n");
	}
	//printf("");

}
int main()
{
	method();
	system("pause");
	return 0;
}