#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void main()
{
	char letter;
	system("color ED");
	/*0 = 黑色 8 = 灰色
	1 = 蓝色 9 = 淡蓝色
　　2 = 绿色 A = 淡绿色
　　3 = 浅绿色 B = 淡浅绿色
　　4 = 红色 C = 淡红色
　　5 = 紫色 D = 淡紫色
　　6 = 黄色 E = 淡黄色
　　7 = 白色 F = 亮白色
*/

	do {
		printf("A Display directory listing\n");
		printf("B Display disk information\n");
		printf("C Change system date\n");
		printf("Q Quit\n");
		printf("Choice: ");

		letter = getch();
		letter = toupper(letter);

		if (letter == 'A')
			system("DIR");
		else if (letter == 'B')
			system("CHKDSK");
		else if (letter == 'C')
			system("DATE");
	} while (letter != 'Q');
	/**/

	system("pause");//可以实现冻结屏幕，便于观察程序的执行结果；
	system("CLS");//可以实现清屏操作。而调用color函数可以改变控制台的前景色和背景
	system("color 0A");// 而调用color函数可以改变控制台的前景色和背景其中color后面的0是背景色代号，A是前景色代号。
	//各颜色代码如下：
	//	0 = 黑色 1 = 蓝色 2 = 绿色 3 = 湖蓝色 4 = 红色 5 = 紫色 6 = 黄色 7 = 白色 8 = 灰色 9 = 淡蓝色 
	//A = 淡绿色 B = 淡浅绿色 C = 淡红色 D = 淡紫色 E = 淡黄色 F = 亮白色

}
