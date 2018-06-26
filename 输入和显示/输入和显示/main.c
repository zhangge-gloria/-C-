#include<stdio.h>

int main()
{
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);
	printf("您输入的是：%d。\n", no);
	printf("它的5倍数是：%d。\n", no * 5);
	printf("该整数加上12的结果是：%d。\n", no + 12);
	printf("该整数减去6的结果是：%d。\n", no - 6);

	int n1, n2;
	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2);
	printf("它们的和是%d。\n", n1 + n2);

	//练习1-7
	puts("天");
	puts("地");
	puts("人"); 

	//练习1-8
	int n3, n4;
	puts("输入两个整数。");
	printf("整数1：");
	scanf("%d", &n3);
	printf("整数2：");
	scanf("%d", &n4);
	printf("它们的乘积是%d。\n", n3*n4);

	//练习1-9
	int n5, n6, n7;
	puts("输入三个整数。");
	printf("整数1：");
	scanf("%d", &n5);
	printf("整数2：");
	scanf("%d", &n6);
	printf("整数3：");
	scanf("%d", &n7);
	printf("它们的和是%d。\n", n5 + n6 + n7);

	system("pause");
	return 0;
}