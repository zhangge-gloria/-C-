#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? (a - b) : (b - a);
}

int pow4(int x)
{
	return sqr(sqr(x));
}

void main()
{
	int a, b;
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("a和b的四次方差是：%d\n", diff(pow4(a), pow4(b)));
	system("pause");
}