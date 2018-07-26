#include<stdio.h>

int min2(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

void main()
{
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("较小的数是：%d\n", min2(a, b));
	system("pause");
}