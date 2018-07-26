#include<stdio.h>

void put_chars(int ch,int n)
{
	while (n-- > 0)
	{
		putchar(ch);
	}
}

void main()
{
	int len;
	puts("生成一个直角在右下方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &len);
	for (int i = 1; i <= len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
	system("pause");
}