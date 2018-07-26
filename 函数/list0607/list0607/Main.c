#include<stdio.h>

void put_stars(int n)
{
	while (n-- > 0)
	{
		putchar('*');
	}
}

void main()
{
	int len;
	puts("生成一个直角在左下方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &len);
	for (int i = 1; i <= len; i++)
	{
		put_stars(i);
		putchar('\n');
	}
	system("pause");
}