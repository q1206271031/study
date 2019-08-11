#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
double add()
{
	double result = 0;
	for (int  i = 1; i <= 100; i++)
	{	
		
		if (i%2 != 0)
		{
			result += 1/(double)i;

		}
		else
		{
			result -= 1/(double)i;
			//printf("%d\n",result);

		}
	}
	return result;
}

int main() 
{
	double accept = add();
	printf("%f\n", accept);
	system("pause");
	return 0;
}