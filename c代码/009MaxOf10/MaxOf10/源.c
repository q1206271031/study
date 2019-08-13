#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
//#define _CRT_SECURE_NO_WARNINGS 1


int Max(int arr[], int len) {
	int max =arr[0];
	for (int i = 0; i < len; i++) {
		//max > arr[i] ? max = max : max = arr[i];
		if (max > arr[i])
		{
			max = max;
		}
		else {
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	int a[10];
	char b;
	for (int  i = 0; i < 10; i++)
	{
		printf("请输入数组的a[%d]元素", i);
		scanf("%d",&a[i]);
		printf("按任意键继续录入，输入N结束");
		getchar();
		scanf("%c", &b);
		if (b=='N')
		{
			break;
		}
	}
	//int a[] = { 1,23,34,44,321,1,122,1,1,12 };
	int len = sizeof(a) / sizeof(a[0]);
	int max= Max(a, len);
	printf("%d\n", max);
	system("pause");
	return 0;

}