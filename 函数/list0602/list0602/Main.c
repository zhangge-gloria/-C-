#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	return max;
}

void main()
{
	int a, b, c;
	puts("请输入三个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("整数c：");
	scanf("%d", &c);
	printf("最大值是：%d。\n", max3(a, b, c));

	system("pause");
}