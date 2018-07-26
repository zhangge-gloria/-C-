#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? (a - b) : (b - a);
}

void main()
{
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("a和b的平方差是：%d\n", diff(sqr(a), sqr(b)));
	system("pause");
}