#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void method(int n)
{

}
int main()
{
	int ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
			printf("%c", ch - 32);
		if (ch >= 'A'&&ch <= 'Z')
			printf("%c", ch + 32);
		if (ch >= '0'&&ch <= '9')
			;
	}
	system("pause");
	return 0;
}