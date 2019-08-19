#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//先计算length;
int length(const char*str)
{
	if (*str != '\0')
	{
		return 0;
	}
	return 1 + length(str + 1);
}
//
void reverse_string(char * string)
{
	if (*string != '\0')
	{
		char tmp;
		int  end = length(string);
		tmp = *string;//首字母存起来
		*string = string[end];//尾字母完成替换 
		string[end]='\0';//尾巴置零控制递归进的过程
		reverse_string(string + 1);//
		string[end] = tmp;//递归的归过程，将存起来的前半截放回后半截
	}
}
int main()
{
	char * string = "abcde";
	reverse_string(string);
	system("pause");
	return 0;
}