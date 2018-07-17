#include<stdio.h>

int main()
{
	//代码清单4-5，练习4-3
	int n0;
	printf("请输入一个正整数：");
	scanf("%d", &n0);
	while (n0>=0)
	{
		printf("%d ", n0);
		if (n0 == 0)
		{
			printf("\n");
		}
		n0--;
	}

	//代码清单4-6
	int n1;
	printf("请输入一个正整数：");
	scanf("%d", &n1);
	while (n1 >= 0)
	{
		printf("%d ", n1--);
		if (n1 == -1)
		{
			printf("\n");
		}
	}

	//练习4-4
	int n2;
	printf("请输入一个正整数：");
	scanf("%d", &n2);
	while (n2 > 0)
	{
		printf("%d ", n2--);
		if (n2 == 0)
		{
			printf("\n");
		}
	}

	//代码清单4-7
	int n3;
	printf("请输入一个正整数：");
	scanf("%d", &n3);
	int i0 = 0;
	while (i0 <= n3)
	{
		printf("%d ", i0++);
	}
	printf("\n");

	//练习4-5
	int n4;
	printf("请输入一个正整数：");
	scanf("%d", &n4);
	int i1 = 1;
	while (i1 <= n4)
	{
		printf("%d ", i1++);
		if (i1 == n4 + 1)
		{
			printf("\n");
		}
	}

	//练习4-6
	int n5;
	printf("请输入一个正整数：");
	scanf("%d", &n5);
	int i2 = 1;
	while (i2 < n5)
	{
		if (i2 % 2 == 0)
		{
			printf("%d ", i2);
		}
		i2++;
	}
	if (n5 > 0)
	{
		printf("\n");
	}

	//练习4-7
	int n6;
	printf("请输入一个正整数：");
	scanf("%d", &n6);
	int i3 = 2;
	while (i3 < n6)
	{
		printf("%d ", i3);
		i3 *= 2;
	}
	if (n6 > 1)
	{
		printf("\n");
	}

	//代码清单4-8，练习4-8
	int n7, n8;
	printf("正整数：");
	scanf("%d", &n7);
	n8 = n7;
	while (n7-- > 0)
	{
		putchar('*');
	}
	if (n8 > 0)
	{
		putchar('\n');
	}

	//代码清单4-9
	int i4 = 0;
	int n9 = 0;
	int n10, n11;
	printf("要输入多少个整数：");
	scanf("%d", &n10);
	while (i4 < n10)
	{
		printf("No.%d:", ++i4);
		scanf("%d", &n11);
		n9 += n11;
	}
	printf("合计值：%d\n", n9);
	printf("平均值：%.2f\n", (double)n9 / n10);

	//练习4-9
	int n12;
	int i5 = 0;
	printf("正整数：");
	scanf("%d", &n12);
	while (i5 <n12)
	{
		if (i5 % 2 == 0)
		{
			putchar('+');
		}
		else
		{
			putchar('-');
		}
		i5++;
	}
	if (n12 > 0)
	{
		putchar('\n');
	}

	//练习4-10
	int n13;
	printf("正整数：");
	scanf("%d", &n13);
	while (n13-->0)
	{
		putchar('*');
		putchar('\n');
	}

	//代码清单4-10，练习4-11，练习4-12
	int n14;
	int n15 = 0;
	int n16;
	do
	{
		printf("请输入一个正整数：");
		scanf("%d", &n14);
		if (n14 <= 0)
		{
			puts("\a请不要输入非正整数。");
		}
	} while (n14 <= 0);
	printf("%d逆向显示的结果是", n14);
	n16 = n14;
	while (n14 > 0)
	{
		n15++;
		printf("%d", n14 % 10);
		n14 /= 10;
	}
	puts("。");
	printf("%d的位数是%d。\n", n16, n15);

	system("pause");
	return 0;
}