#include<stdio.h>

int main()
{
	//代码清单4-11
	int n0;
	printf("请输入一个正整数：");
	scanf("%d", &n0);
	for (int i = 0; i <= n0; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//代码清单4-12
	int n1;
	printf("正整数：");
	scanf("%d", &n1);
	for (int i = 0; i < n1; i++)
	{
		putchar('*');
	}
	putchar('\n');

	//代码清单4-13
	int n2;
	int n3 = 0;
	printf("输入多少个整数：");
	scanf("%d", &n2);
	for (int i = 0; i < n2; i++)
	{
		int temp;
		printf("No.%d:", i + 1);
		scanf("%d", &temp);
		n3 += temp;
	}
	printf("合计值：%d\n", n3);
	printf("平均值：%.2f\n", (double)n3 / n2);

	//练习4-13
	int n4;
	int n5 = 0;
	printf("正整数：");
	scanf("%d", &n4);
	for (int i = 1; i <= n4; i++)
	{
		n5 += i;
	}
	printf("1到%d的和为%d。\n", n4, n5);

	//练习4-14
	int n6;
	printf("请输入一个整数：");
	scanf("%d", &n6);
	for (int i = 1; i <= n6; i++)
	{
		printf("%d", i % 10);
	}
	printf("\n");

	//练习4-15
	int n7, n8, n9;
	printf("开始数值（cm）：");
	scanf("%d", &n7);
	printf("结束数值（cm）：");
	scanf("%d", &n8);
	printf("间隔数值（cm）：");
	scanf("%d", &n9);
	for (int i = n7; i <= n8; i += n9)
	{
		printf("%dcm     %.2fkg", i, (i - 100)*0.9);
		printf("\n");
	}

	//代码清单4-14
	int n10;
	printf("整数值：");
	scanf("%d", &n10);
	for (int i = 2; i <= n10; i += 2)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//代码清单4-15
	int n11;
	printf("整数值：");
	scanf("%d", &n11);
	for (int i = 1; i <= n11; i++)
	{
		if (n11%i == 0)
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	//练习4-16
	int n12;
	printf("整数值：");
	scanf("%d", &n12);
	for (int i = 1; i <= n12; i += 2)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//练习4-17
	int n13;
	printf("整数值：");
	scanf("%d", &n13);
	for (int i = 1; i <= n13; i++)
	{
		printf("%d的二次方是%d\n", i, i*i);
	}

	//练习4-18
	int n14;
	printf("显示多少个*：");
	scanf("%d", &n14);
	for (int i = 1; i <= n14; i++)
	{
		putchar('*');
		if (i % 5 == 0)
		{
			putchar('\n');
		}
	}
	if (n14 % 5 != 0)
	{
		putchar('\n');
	}

	//练习4-19
	int n15;
	int n16 = 0;
	printf("整数值：");
	scanf("%d", &n15);
	for (int i = 1; i <= n15; i++)
	{
		if (n15%i == 0)
		{
			printf("%d\n", i);
			n16++;
		}
	}
	printf("约数有%d个。\n", n16);

	system("pause");
	return 0;
}