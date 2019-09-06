#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<stdlib.h>
//临时指针变量在函数运行完，生命周期结束。不改变主函数的参数值；
void fun(int* p1)
{
	int data = 1;
	p1 = &data;//给p存储的值赋值为date的地址，null=&date这一步是正确的；
	printf("%d\n",*p1);
}
//可以将函数返回值解释，解决这个为题
int main()
{
	int* p = 0;
	fun(p);//拷贝了p的值（p存储的地址null）//函数只是对拷贝的P的值进行了修改，而没有通过地址访问P并进行值修改，表面看起来是址传递，实质是值传递//应该传p的地址，进而对p的值进行修改；
	printf("%d", *p);
	system("pause");
	return 0;
}

void fun(int* p1)
{
	int data = 1;
	*p1 = data;             //解引用null地址，（*null=date）没有访问权限无法完成；
}
int main()
{
	int* p = 0;
	fun(p);                         //拷贝了p的值（p存储的地址null）
	printf("%d", *p);
	system("pause");
	return 0;
}
关于指针传递的联系2：函数返回临时变量的地址
void fun(int* p1)
{
	int data = 2;
	*p1 = data;              //解引用a地址并赋值为date，*(&a)=date;
}
int main()
{
	int a = 0;
	fun(&a);                  //拷贝了a的地址
	printf("%d", a);
	system("pause");
	return 0;
}


关于指针传递的联系3：传递给函数的是指针的指针
void fun(int** p1)//参数二级地址存储指针的地址
{
	int data = 3;
	*p1 = &data;          //p1是二级指针存储一级指针，解引用一次就取出了一级地址内的内容，*p1相当于 *(&p）即p的内容,赋值为date的地址，p=&date;（使p指向date）给以p为地址的空间里放了date的地址里（地址—>内容修改） 
                                                一级地址指向date
}
int main()
{

	int* p = 0;
	int **p2 = 0;
	fun(&p);                //拷贝了p的地址；参数为一级指针的地址，相当于二级指针存储的内容；
	p2 = &p;				 //	让p2存储p的地址	p中存储了&date
	printf("%d", **p2);
	system("pause");
	return 0;
}
//
//我们一般使用函数的返回值来进行校验，如果要使用函数的返回值，一般采用出参（传址参数）的形式；而函数的传值和传址只需记住一句话——”函数的形参是实参的拷贝“
//就可以推出函数是不是改变了实参，下面是几个例子相信你看完例子就会彻底搞懂传址，
