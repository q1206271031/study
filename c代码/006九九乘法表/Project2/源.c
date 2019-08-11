#include<stdio.h>
#include<windows.h>
void method(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%-3d ", j, i, i*j);

		}
		putchar('\n');

	}

}

int main()
{
	method(12);
	system("pause");
	return 0;
}
