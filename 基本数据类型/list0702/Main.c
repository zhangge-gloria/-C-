//判断char型有无符号

#include<stdio.h>
#include<limits.h>

void main()
{
	printf("这个编译器中的char型是");
	if (CHAR_MIN!=0)
	{
		puts("有符号的。");
	}
	else
	{
		puts("无符号的。");
	}

	system("pause");
}