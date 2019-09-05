#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>
#define NAME_MAXE_SIZE 1024
#define ADERSS_MAXE_SIZE 1024
#define SEX_MAXE_SIZE 10
#define TEL_MAXE_SIZE 100
#define LEN 1024
#define SLDateType Information

typedef struct Information {
	char name[NAME_MAXE_SIZE];
//	char adress[ADERSS_MAXE_SIZE];
//	char sex[SEX_MAXE_SIZE];
//	int age;
	char tel[TEL_MAXE_SIZE];
}Information;
typedef struct List {
	SLDateType*  array;//array存放结构体的地址
	size_t used;	//有效数据个数(使用的)
	size_t capicity;
} List;
void initList(List* list, size_t capicity)
{
	list->capicity = capicity;
	list->used = 0;
	list->array = (Information*)malloc(capicity * sizeof(Information));
}
//1. 添加联系人信息
void add(List*list)
{
	printf("姓名：");
	scanf("%s", &(list->array[list->used].name));
	printf("电话：");
	scanf("%s", &(list->array[list->used].tel));
	list->used++;
	//char name[NAME_MAXE_SIZE];
	//char tel[TEL_MAXE_SIZE];
	//char sex[SEX_MAXE_SIZE];
	//char file_name[30] = "D:\\test.txt";
	//FILE *fp;
	//fp = fopen(file_name, "a+");
	//if (NULL == fp)
	//{
	//	printf("%s\n", strerror(errno));
	//	exit(0);
	//}
	//printf("录入联系人信息\n");
	//printf("姓名:");
	//getchar();
	//fgets(name, NAME_MAXE_SIZE, stdin);//从键盘输入字符串，存入name数组中
	//fputs(name, fp);//把str中字符串输出到fp所指文件中
	//printf("性别:");
	//fgets(sex, SEX_MAXE_SIZE, stdin);//从键盘输入字符串，存入name数组中
	//fputs(sex, fp);//把str中字符串输出到fp所指文件中
	//printf("电话:");
	//fgets(tel, TEL_MAXE_SIZE, stdin);//从键盘输入字符串，存入name数组中
	//fputs(tel, fp);//把str中字符串输出到fp所指文件中
	////rewind(fp); //把fp所指文件的读写位置调整为文件开始处
	//while (fgets(str, MAX_SIZE, fp) != NULL)
	//{
	//	fputs(str, stdout); //把字符串输出到屏幕
	//}
	//fclose(fp);
}
//3. 查找指定联系人信息
void Selelect(List*list)
{
	assert(list);
	char name1[NAME_MAXE_SIZE] = {0};
	printf("请输入要查找的联系人姓名：\n");
	scanf("%s", name1);
	for (size_t i = 0; i < list->used; i++)
	{
		if (strcmp(list->array[list->used].name , name1)==0)
		{
			printf("[%d] ,姓名：%s,电话：%s\n", i, list->array[i].name, list->array[i].tel);
		}
	}
}
//2. 删除指定联系人信息
void del(List*list)
{
	size_t input = 0;
	printf("请选择要删的编号");
	scanf("%d", &input);
	if (input >= 0 && input < list->used)
	{
		list->array[input] = list->array[list->used - 1];
		--list->used;
	}
	else
	{
		printf("无此编号\n");
	}
}
//4. 修改指定联系人信息
void update(List*list)
{
	size_t input = 0;
	printf("请选择要删的编号");
	scanf("%d", &input);
	if (input >= 0 && input < list->used)
	{
		printf("请输入修改后的名字\n");
		scanf("%s", &list->array[input].name);
		printf("请输入修改后的电话\n");
		scanf("%s", &list->array[input].tel);
	}
	else
	{
		printf("无次编号\n");
	}	
}
//5. 显示所有联系人信息
void show(List*list)
{
	assert(list);
	char arr[1024] = { 0 };
	int c;
	FILE* fp = fopen("D:/test.txt", "rt");
	if (fp != NULL)
	{
		printf("--------------------------------\n");

		/**方法1
			while ((c=fgetc(fp))!=EOF )
			{
				fputc(c, stdout);
				//putchar(c);
			}
			putchar('\n');
			fclose(fp);
		*/
		//方法2
			fgets(arr, LEN, fp);
			fputs(arr, stdout);
			putchar('\n');
			fclose(fp);
		

		/**方法3
			fread(arr, sizeof(char), LEN, fp);//从fp中读数据录入arr
			fwrite(arr, sizeof(char), LEN, stdout);//把fp写入stdout
			putchar('\n');
			//printf("%s\n", arr);
			fclose(fp);
		*/

	//	fprintf(stdout, "%s", list->array->name);
	//	fprintf(stdout, "%s", list->array->tel);
		//fscanf(stdout,"%s", list->array->name);
		//fscanf(stdout,"%s", list->array->tel);
		printf("--------------------------------\n");
	}
	else
	{
		printf("%s\n", strerror(errno));
	}
}
//6. 清空所有联系人
void Destory(List* list)
{
	assert(list);
}
//7. 以名字排序所有联系人

//8. 保存联系人到文件
void saveAsFile(List*list)
{
	FILE* fp ;
	char file_name[30] = "D:\\test.txt";
	fp = fopen(file_name, "a+");
	if (fp != NULL)
	{
		for (size_t i = 0; i < list->used; i++)
		{
		//	fwrite(list->array+i, sizeof(Information), 1, fp);
			fputs(list->array[i].name, fp);
			fputs(list->array[i].tel, fp);
		}
		fclose(fp);
	}
	else
	{
		printf("%s\n", strerror(errno));
	}
}

//9. 加载联系人

int showminu()
{
	printf("****************************\n");
	printf("**********1.增 *************\n");
	printf("**********2.删 *************\n");
	printf("**********3.改 *************\n");
	printf("**********4.查 *************\n");
	printf("**********5.show**********\n");
	printf("**********0.exit ************\n");
	printf("****************************\n");
	int input = 0;
	printf("请选择");
	scanf("%d", &input);
	return input;
}
int main()
{
	typedef void(*Fun)(List*);
	List list;
	initList(&list, 300);
	Fun arr[] = { add,del,update,Selelect,show };
	while (1)
	{
		char input = showminu();
		if (input == 0)
		{
			printf("GoodBye\n");
			break;
		}
		else
		{
			arr[input - 1](&list);
		}
	}
	saveAsFile(&list);
	system("pause");
	return 0;
}