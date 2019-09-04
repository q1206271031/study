#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>

typedef int SLDateType;
typedef int Size_t;
typedef struct SeqList {
	SLDateType * array;//指向动态开辟的空间
	Size_t size;	//有效数据个数
	Size_t capicity;//容量空间大小
} SeqList;
//初始化顺序表
void SeqListInit(SeqList *psl, size_t capicity)
{
	assert(psl);//不怎么合a理；最好用错误码提示
	psl->array = (SLDateType*)malloc(capicity * sizeof(SLDateType));
	//if (psl->array!=NULL)
	assert(psl->array);//确保指向
	psl->capicity = capicity;//初始化capital个空间
	psl->size = 0;

}
//销毁全部
void SeqListDestory(SeqList*psl)
{
	assert(psl);
	if (psl->array)	  //判断顺序表是否为空
	{
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capicity = 0;
		/* assert(psl || psl->array);  //判断顺序表是否为空
			free(psl->array);
			psl->array = NULL;
			psl->size = 0;
			psl->capicity = 0;   */
	}
}
//查找特定元素
int SeqListFind(SeqList *psl, SLDateType x)
{
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//是否满了
void CheckCapacity(SeqList*psl)
{
	assert(psl->array);
	if (psl->size == psl->capicity)
	{
		//扩容

		psl->capicity *= 2;
		psl->array = (SLDateType*)realloc(psl->array, psl->capicity * sizeof(SLDateType));
		//assert(psl->array);
	}
}
//尾插
void SeqListPushBack(SeqList*psl, SLDateType x)
{
	//表是否存在
	assert(psl->array);
	//表是否满；满了会开辟空间
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
//头插
void SeqListPushFront(SeqList*psl, SLDateType x)
{
	assert(psl);
	if (psl->array)//数组不为空
	{
		//数组不为满
		CheckCapacity(psl);
		//向后移动
		for (int i = psl->size; i > 0; i--)
		{
			psl->array[i] = psl->array[i - 1];
		}
		psl->array[0] = x;
		psl->size++;
	}
	else
	{
		SeqListInit(psl, psl->capicity);//开辟数组
		psl->array[0] = x;
		psl->size++;
	}
}
//普通插入
void SeqListInsert(SeqList*psl, Size_t pos, SLDateType x)
{
	assert(psl && pos <= psl->size && pos > 0);
	for (int i = psl->size; i > pos; i--)
	{
		psl->array[i] = psl->array[i - 1];
	}
	psl->array[pos] = x;
	psl->size++;
}
//尾删除
void SeqListPopBack(SeqList*psl)
{
	assert(psl || psl->size);
	//psl->array[psl->size-1]=?
	psl->size--;

}
//头删除
void SeqListPopFront(SeqList*psl)
{
	assert(psl || psl->array);
	for (int i = 0; i < psl->size -1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
		psl->size--;
}
//普通删除
void SeqListErase(SeqList*psl, Size_t pos)
{//位置合法性
	assert(psl && pos < psl->size && pos>0);

	for (int i = pos; i < psl->size -1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}
//删掉指定元素
void SeqListRemove(SeqList*psl, SLDateType x)
{
	assert(psl);
	if (SeqListFind(psl, x) != -1)
	{
		SeqListErase(psl, SeqListFind(psl, x));
	}
	else
	{
		printf("元素%d不存在\n", x);
	}

}
//删掉表中所有x元素
void SeqListAll(SeqList*psl, SLDateType x)
{
	for (size_t i = 0; i < psl->size; i++)
	{
		if (psl->array[i]==x)
		{
			for (size_t j = i; j < psl->size-1; j++)
			{
				psl->array[j] = psl->array[j + 1];
			}
			psl->size--;
			--i;
		}
	}
}
//修改
void SeqListModify(SeqList*psl, Size_t pos, SLDateType x)
{
	assert(psl && psl->size >pos && pos>=0);
	psl->array[pos] = x;
}
//打印
void SeqListPrinnt(SeqList*psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d  ", psl->array[i]);
	}
	putchar('\n');
}
int main()
{
	SeqList test;
	SeqListInit(&test, 100);
	//尾插几个数
	SeqListPushBack(&test, 1);//1
	SeqListPushBack(&test, 12);//1 12
	SeqListPushBack(&test, 123);//1 12 123
	SeqListPushBack(&test, 1234);//1 12 123 1234
	////头插几个数
	SeqListPushFront(&test, 5678);//5678 1 12 123 1234
	SeqListPushFront(&test, 567);//567 5678 1 12 123 1234
	SeqListPushFront(&test, 56); //56 567 5678  1 12 123 1234
	SeqListPushFront(&test, 5); //5 56 567 5678  1 12 123 1234
	////尾删除两个数
	SeqListPopBack(&test);//5 56 567 5678 1 12 123
	SeqListPopBack(&test);//5 56 567 5678 1 12
	SeqListPopBack(&test);//5 56 567 5678 1
	//////头删除两个数
	SeqListPopFront(&test);// 56 567 5678 1 
	SeqListPopFront(&test);//567 5678 1 

	//1位置添加数字123
	SeqListInsert(&test, 1, 123);//567 123 5678 1
	//2位置添加数字1234
	SeqListInsert(&test, 2, 1234);//567 123 1234 5678 1
	//删掉123
	SeqListRemove(&test, 123);//567 1234 5678 1
	//删掉2下标元素
	SeqListErase(&test, 2);//567 1234 1
	//2位置添加数字567
	SeqListInsert(&test, 2, 567);//567 1234 567 1
	SeqListInsert(&test, 2, 567);//567 1234 567 567 1
	SeqListInsert(&test, 2, 567);//567 1234 567 567 567 1
	SeqListInsert(&test, 6, 2);    //567 1234 567 567 567  1 2
	SeqListInsert(&test, 7, 3);	//567 1234 567 567 567   1 2 3
	SeqListInsert(&test, 8, 4);	//567 1234 567 567 567   1 2 3 4
	//删掉所有567	
	SeqListAll(&test, 567);//1234 1 2 3 4
	//修改
	SeqListModify(&test, 0, 0);
	//printf("%d", test.size);

	SeqListPrinnt(&test);
	system("pause");
	return 0;
}
