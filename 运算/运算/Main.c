#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main()
{
	int x, y;
	puts("请输入两个整数。");
	printf("请输入第一个整数x：");
	scanf("%d", &x);
	printf("请输入第二个整数y：");
	scanf("%d", &y);
	printf("x+y=%d\n", x + y);
	printf("x-y=%d\n", x - y);
	printf("x*y=%d\n", x * y);
	printf("x/y=%d\n", x / y);
	printf("x%%y=%d\n", x % y);

	int n0;
	printf("请输入一个整数：");
	scanf("%d", &n0);
	printf("最后一位是：%d。\n", n0 % 10);

	int a, b;
	puts("请输入两个整数。");
	printf("请输入第一个整数a：");
	scanf("%d", &a);
	printf("请输入第二个整数b：");
	scanf("%d", &b);
	printf("a除以b得%d余%d。\n", a / b, a%b);

	//练习2-1
	int x1, y1;
	puts("请输入两个整数。");
	printf("请输入第一个整数x1：");
	scanf("%d", &x1);
	printf("请输入第二个整数y1：");
	scanf("%d", &y1);
	printf("x1的值是y1的%d%%。\n", x1 * 100 / y1);

	//练习2-2
	int a1, b1;
	puts("请输入两个整数。");
	printf("请输入第一个整数a1：");
	scanf("%d", &a1);
	printf("请输入第二个整数b1：");
	scanf("%d", &b1);
	printf("它们的和是%d，积是%d。\n", a1 + b1, a1*b1);

	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("符号取反之后的值是：%d。\n", -num);

	system("pause");
	return 0;
}