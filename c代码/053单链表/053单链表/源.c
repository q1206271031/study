#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

typedef struct node
{
	int date;
	struct node *next;
}ListNode;
struct  node*head;
add(struct node pre,struct node new，int)
{
	pre.next = &new;

}
del(struct node pre, struct node new,int index)
{
	//判断索引合法性
}
int method(int n)
{

}
int main()
{


	printf("%d", method(n));
	system("pause");
	return 0;
}
