#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

	void method(int n)
	{
		for (int i = 1; i <= n; i++) {//循环输出n行
			for (int j = 0; j < n - i; j++) {//循环输出n-i个空格
				putchar(' ');
				putchar(' ');
			}
			for (int j = 0; j < 2*i-1; j++) {//输出*为1，3，5个
				putchar('*');
				putchar(' ');

			}
			
			putchar('\n');
		}
		for (int i = n-1; i >=0; i--) {//循环输出n行
			for (int j = 0; j < n - i; j++) {//循环输出个空格
				putchar(' ');
				putchar(' ');
			}
			for (int j = 0; j < 2 * i - 1; j++) {//输出*
				putchar('*');
				putchar(' ');

			}
			putchar('\n');
		}
		//for (int i = 1; i < n; i++) {
		//	for (int j = 1; j <= i; j++) {//循环输出i个空格
		//		putchar(' ');
		//		putchar(' ');
		//	}
		//	for (int j = 1; j <= 2*n-1 - 2*i; j++) {//输出*数为
		//		putchar('*');
		//		putchar(' ');
		//	}		
		//	putchar('\n');
	 //   }

    }

int main()
{
	int n=0;
	printf("恁先输个行数");
	scanf("%d", &n);
	method(n);
	system("pause");
	return 0;

}
