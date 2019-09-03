#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 3 //字符串个数
#define MAX_SIZE 30 //字符数组大小，要求每个字符串长度不超过29
int main(void)
{
	char file_name[30] = "D:\\test.txt";
	char str[MAX_SIZE];

	FILE *fp;
	int i;
	fp = fopen(file_name, "a+"); 
	if (NULL == fp)
	{
		printf("Failed to open the file !\n");
		exit(0);
	}
	printf("请输入%d个字符串：\n", N);
	for (i = 0; i < N; i++)
	{
		printf("字符串%d:", i + 1);
		fgets(str, MAX_SIZE, stdin);//从键盘输入字符串，存入str数组中
		fputs(str, fp);//把str中字符串输出到fp所指文件中
	}
	rewind(fp); //把fp所指文件的读写位置调整为文件开始处
	while (fgets(str, MAX_SIZE, fp) != NULL)
	{
		fputs(str, stdout); //把字符串输出到屏幕
	}
	fclose(fp);
	system("pause");
	return 0;
}

int main1()
{
	char file_name[20] = "D:/test.TXT";
	FILE * fp = fopen(file_name, "a"); //打开文件
	int c; //c:接收fgetc的返回值，定义为int，而非char M
	if (NULL == fp)
	{
		printf("%s", strerror(errno));
		exit(0);
	}
	else
	{
		printf("请输入字符，按回车键结束：");
		while ((c = fgetc(fp)) != '\n') //stdin:指向标准输人设备键盘文件//调用scanf,并将键盘输入的字符赋值给c
		{
			fputc(c, stdout); //stdout:指向标准输出设备显示器文件
			fputc(c, fp);
		}
		fputc('\n', stdout);
		fclose(fp); //关闭文件
	}
	//int fgetc(FILE*fp);//从fp位置输入一个字符
	//getchar();
	//fgetc(stdin);
	//int fputc(int c,FILE*fp);//项fp所指文件中输入一个字符c
	//char c;
	//putchar(c);
	//fputc(c,stdout);

	system("pause");
	return 0;
}