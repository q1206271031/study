#include<stdio.h>
#include<Windows.h>
//用引用参数的方式来实现两个数的交换
void exchange0(int *num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	printf("a=%d,b=%d\n", *num1,*num2);
}
int exchange1(int a, int b)
{
	printf("假交换a=%d,b=%d\n", a + b - a, a + b - b); return 0; 
}
void exchange2(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	printf("真假换a=%d,b=%d\n", *a, *b);
}


int main()
{
	int a = 10;
	int b = 12;
	exchange0(&a, &b);//引入参数传址交换
	exchange1(a,b);//不引入参数假交换
	exchange2(&a, &b);//不引入参数真交换
   	system("pause");
	return 0;
}
