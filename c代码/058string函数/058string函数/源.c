#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* Strcpy(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* temp = dest;
	while (*src)
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = *src;
	return dest;
}
char*Strcat(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* temp = dest;
	while (*temp)
	{
		++temp;
	}
	while (*src)
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = *src;
	return dest;
}
char*Strstr(const char* dest, const char* src)
{
	char* p = src;
	char* p1 = src;
	char* d = dest;
	while (p)
	{
		while (*p1 == *d&&d)
		{
			++p1;
			++d;
		}
		if (*d)
		{
			++p;
		}
		else
		{
			return p;
		}
	}
}
char*Strtchr(char* dest, const char* src)
{

}
int Strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL && str2 != NULL);
	while (*str2)
	{
		if (*str1 - *str2)
		{
			return 1;
		}
		else if ((*str1 - *str2) < 0)
		{
			return -1;
		}
		else
		{
			++str1;
			++str2;
		}
	}//Ìø³öÑ­»·Ê±*str=='\0'
	if (*str1 == '\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void* memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	char* temp = (char*)dest;
	while (num--)
	{
		*temp = *(char*)src;
		temp++;
		src = (char*)src + 1;
	}
	return dest;
}
void* memmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	void* temp = dest;
	if (dest <= src)
	{
		while (num--)
		{
			*(char*)temp = *(char*)src;
			temp = (char*)temp + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		temp = (char*)temp + num - 1;
		src = (char*)src + num - 1;
		while (num--)
		{
			*(char*)temp = *(char*)src;
			temp = (char*)temp - 1;
			src = (char*)src - 1;

		}
	}
	ret dest;
	}
}
int main()
{
	char dest[100] = { 0 };
	const char src[100] = "abcdef";
	const char str1[100] = "def";
	int ret = 0;
	int index = 0;
	Strcpy(dest, src);
	puts(dest);
	Strcat(dest, src);
	puts(dest);
	index = Strstr(str1, src);
	printf("%d", index);
	Strchr(dest, src);
	ret = Strcmp(dest, src);
	if (ret > 0)
	{
		printf("str1 > str2");
	}
	else if (ret < 0)
	{
		printf("str1 < str2");
	}
	else
	{
		printf("str1 = str2");
	}

	system("pause");
	return 0;

}