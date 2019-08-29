#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<assert.h>
#define SLDateType int

struct student {
	int id;
	int age;
	char name[10];
} stu1;
typedef struct Node
{
	SLDateType*p;
	int size;
	int used;
}Node;

void init(Node *node,int size)
{
	assert(node);
	node->p = (SLDateType)melloc(size*sizeof(SLDateType));
	node->size = size;
}
void addFront(Node*node, int size)
{
	assert(node);

}
int main()
{
	system("color ED");
	#if 0
	float price = 525.75;
	float sales_tax = 0.06;

	printf("The item cost is %f\n", price);//525.750000
	printf("Sales tax on the item is %f\n", price * sales_tax);

	float value = 1.23456;

	printf("%8.1f\n", value);//     1.2
	printf("%8.3f\n", value);//   1.234
	printf("%8.5f\n", value);// 1.23456
	// %g用来输出实数，它根据数值的大小，自动选f格式或e格式（选择输出时占宽度较小的一种），
	//且不输出无意义的0。即%g是根据结果自动选择科学记数法还是一般的小数记数法
	printf("Displaying 0.1234 yields %g\n", 0.1234);//0.1234
	printf("Displaying 0.00001234 yields %g\n", 0.00001234);//1.234e-5

	int i;
	int result = 0;
	int value = 1;

	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
		result = value * --i;   //--i就是i=i-1;潜意识中给i变成了i-1，故死循环；
	}

	printf("Result %d\n", result);
	int neg_int = -5;
	int pos_int = 5;

	float neg_flt = -100.23;
	float pos_flt = 100.23;

	printf("The integer values are \n%3d and %+d\n",
		neg_int, pos_int);

	printf("The floating point values are %+f %+f\n",
		neg_flt, pos_flt);



	printf("Variables of type int use %d bytes\n", sizeof(int));//4
	printf("Variables of type float use %d bytes\n", sizeof(float));//4
	printf("Variables of type double use %d bytes\n", sizeof(double));//8
	printf("Variables of type unsigned use %d bytes\n", sizeof(unsigned));//4
	printf("Variables of type long use %d bytes\n", sizeof(long int));//4

	//int c = 2;
	//printf("%d",c + --c);//标准未定义，结果为2
	/*int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);*///12
	//printf("%d", sizeof( void));//error
	char letter;  // Letter typed by the user

	printf("Do you want to continue? (Y/N): ");

	letter = getch();          // Get the letter  
	letter = toupper(letter);  // Convert letter to uppercase

	while ((letter != 'Y') && (letter != 'N'))
	{
		putch(7);                  // Beep the speaker
		letter = getch();          // Get the letter  
		letter = toupper(letter);  // Convert letter to uppercase
	}
	printf("\nYour response was %c\n", letter);
	int value = 5;

	printf("%01d\n", value);//5
	printf("%02d\n", value);//05
	printf("%03d\n", value);//005
	printf("%04d\n", value);//0005


///*
//	stu1.id = 12;
//	printf("%d",stu1.id);
//	system("pause");
//	return 0;*/
	//putch();
	//putchar(1);
	//printf("这是一行标题");
	//putchar(10);//换行
	//putchar(2);
	//printf("这是一行正文");
	//putchar(10);//换行
	/*
	int i;
	char a[1000];
	for (i = 0; i< 1000; i++)
	{
		a[i] = -1 - i;
		printf("%d  ",a[i]);
	}
	printf("%d",strlen(a));
	*/
	/*unsigned char i;
	for ( i = 0; i < 256; i++)//死循环
	{
		printf("%d  ",i);
	}*/
	//int a[3][4] = { 1,2,3,4,
	//					  5,6,7,8,
	//					  9,10,11 };
	//printf("%d\n",sizeof(a));						//48     数组名代表整个数组
	//printf("%d\n",sizeof(a[0][0]));				//4	
	//printf("%d\n",sizeof(a[0]));					//16     4*4（局部数组名）
	//printf("%d\n",sizeof(a[0]+1));				//4      地址     & a[0][1];
	//printf("%d\n",sizeof(*(a[0] + 1)));		   //4         a[0][1]
	//printf("%d\n",sizeof(a+1));				   //4       地址    &a[1]
	//printf("%d\n",sizeof(*(a + 1)));			   //16     a[1]
	//printf("%d\n",sizeof(&a[0]+1));			//4		数值指针；&a[1]
	//printf("%d\n",sizeof(*(&a[0] + 1)));		//16		a[0]表示一维数组。&a[0]得到地址，+1得到&a[1],解引用4*4
	//printf("%d\n",sizeof(*a));						//16		a[0]
	//printf("%d\n",sizeof(a[3]));					//16		a[][]
	/*int a[5] = { 1,2,3,4,5 };
	int *p = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(p - 1));*///2 ,5
//
//	int a[4] = { 1,2,3,4 };
//	int*p1 = (int*)(&a + 1);
//	int*p2 = (int*)((int)a + 1);
//	printf("%X,%X", p1[-1],*p2);
	//int a[5][5];
	//int(*p)[4];
	//p = a;
	////printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	//char*c[] = {"ENTER","NEW","POINT","FIRST"};
	//char** cp[] = {c+3,c+2,c+1,c};
	//char***cpp = cp;
	//printf("%s\n",**++cpp );
	//printf("%s\n",*--*++cpp+3 );
	//printf("%s\n",*cpp[-2]+3 );
	//printf("%s\n",cpp[-1][-1]+1 );
#endif
	
	system("pause");
	return 0;
}