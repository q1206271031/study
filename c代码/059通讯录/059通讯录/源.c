#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>
#define SLDateType Information
/*实现一个通讯录；
通讯录可以用来存储1000个人的信息
*/
//typedef struct Information {
//	char name[1024];
//	char adress[1024];
//	char sex[3];
//	size_t age;
//	char tel[11];
//}Information;
typedef struct Information {
	char* name;
	char* adress;
	char* sex;
	char* age;
	char* tel;
}Information;
typedef struct List {
	SLDateType ** array;//指向动态开辟的空间，其中array存放结构体的地址
	size_t used;	//有效数据个数(使用的)
	size_t capicity;//容量空间大小
} List;

void initList(List* list,size_t capicity)
{
	list->capicity = capicity;
	list->used = 0;
	list->array = (Information**)malloc(capicity * sizeof(Information*));
}
//1. 添加联系人信息
List* add(List* list, Information* x)
{
	assert(list&&x);
	if (list->used < list->capicity)
	{
		list->array[list->used] = x;
		list->used++;
		return list;
	}
	else
	{
		//扩容；或结束
		return list;
	}
}
//3. 查找指定联系人信息(返回下标)
int Selelect(List*list, Information*x)
{
	assert(list&&x);
	for (size_t i = 0; i < list->used; i++)
	{
		if (list->array[i]->name == x->name)//(假设name是主键)//字符串常量都在只读取，所以地址应该一样
		{
			return i;
		}
	}
		return -1;
}
//2. 删除指定联系人信息
List* del(List* list, Information*x)
{
	assert(list&&x);
	//遍历
	int index = Selelect(list, x);
		if (index!=-1)
		{
			//删掉即后面的向前迁移覆盖掉；
			list->used--;//1
			for (size_t  j = index; j < list->used; j++)
			{
				list->array[j] = list->array[j + 1];
			}
			//如不调用Selsct，改用循环遍历；此处break则删除第一个;否则将del所有否和条件的
		}
	return list;
}
//4. 修改指定联系人信息
List* Change(List*list, Information*x)
{
	assert(list&&x);
	//查找
	int index = Selelect(list, x);
	if (index != -1)
	{
		list->array[index]->adress = x->adress;
		list->array[index]->age = x->age;
		list->array[index]->tel = x->tel;
		list->array[index]->sex = x->sex;
		//list->array[index] = x;
	}
	return list;

}
//5. 显示所有联系人信息
void show(List*list)
{
	assert(list);
	printf("共有%d项数据\n",list->used);
	printf("--------------------------------\n");
	for (size_t i = 0; i < list->used; i++)
	{
		printf("姓名:%s\n", list->array[i] ->name);
		printf("性别:%s\n",  list->array[i] ->sex);
		printf("年龄:%s\n", list->array[i] ->age);
		printf("电话:%s\n", list->array[i] ->tel);
		printf("地址:%s\n",list->array[i]->adress);
		printf("--------------------------------\n");
	}
}
//6. 清空所有联系人
void Destory(List* list)
{
	assert(list);
	if (list->array)	  //是否为空
	{
		free(list->array);
		list->array = NULL;
		list->used = 0;
		list->capicity = 0;
	}
}
//7. 以名字排序所有联系人


//8. 保存联系人到文件
void saveAsFile(List*list)
{
	FILE* fp = fopen("D:\test.TXT", "wt+");
	if (fp != NULL)
	{
		for (size_t i = 0; i < list->used; i++)
		{
			fwrite(&list->array[i]->name, sizeof(Information), 1, fp);
		}
		fclose(fp);
	}
	else
	{
		printf("%s", strerror(errno));
	}
}
//9. 加载联系人

int main()
{
	List *list=(List*)malloc(sizeof(List));
	Information* x=(Information*)malloc(sizeof(Information));
	x->adress = "北京";
	x->age=19;
	x->name="小张";
	x->sex="男";
	x->tel="11133332222";

	Information* y = (Information*)malloc(sizeof(Information));
	y->adress = "西安";
	y->age = 18;
	y->name = "小李";
	y->sex = "女";
	y->tel = "11122223333";

	/**
		char* name;
	char* adress;
	char* sex;
	size_t age;
	char* tel;
	*/
	Information x1={ "小赵","北京","男","18","12233334444" };
	Information x2={ "小钱","上海","女","18","13344445555" };
	Information x3={ "小孙","广州","男","18","14455556666" };
	Information x4={ "小李","深圳","女","18","15566667777" };
	Information x5={ "小周","江苏","男","18","16677778888" };
	Information x6={ "小武","四川","女","18","17788889999" };
	Information x7={ "小郑","云南","男","18","18899990000" };
	Information x8={ "小王","广西","女","18","10011112222" };

	initList(list,100);
	add(list, &x1);
	add(list, &x2);
	add(list, &x3);
	add(list, &x4);
	add(list, &x5);
	add(list, &x6);
	add(list, &x7);
	add(list, &x8);
	del(list, &x1);
	show(list);
	saveAsFile(list);
	system("pause");
	return 0;
}