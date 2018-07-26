#include<stdio.h>

int cube(int x)
{
	return x * x*x;
}

void main()
{
	int x;
	printf("请输入一个整数：");
	scanf("%d", &x);
	printf("x的立方是：%d\n", cube(x));
	system("pause");
}