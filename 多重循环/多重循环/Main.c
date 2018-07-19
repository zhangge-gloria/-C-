#include<stdio.h>

int main()
{
	//代码清单4-16
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%3d", i*j);
		}
		putchar('\n');
	}

	//代码清单4-17
	int n0, n1;
	puts("让我们来画一个长方形");
	printf("高：");
	scanf("%d", &n0);
	printf("宽：");
	scanf("%d", &n1);
	for (int i = 0; i < n0; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//代码清单4-18
	int n2;
	puts("生成直角在左下方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &n2);
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//代码清单4-19
	int n3;
	puts("生成直角在右下方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &n3);
	for (int i = 1; i <= n3; i++)
	{
		for (int j = 1; j <= n3 - i; j++)
		{
			putchar(' ');
		}
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//代码清单4-20
	int n4;
	do
	{
		int num;
		do
		{
			printf("请输入一个正整数：");
			scanf("%d", &num);
			if (num <= 0)
			{
				puts("\a请不要输入非正整数。");
			}
		} while (num <= 0);
		for (int i = 0; i < num; i++)
		{
			putchar('*');
		}
		putchar('\n');
		printf("是否继续执行？[Yes...0/No...9]：");
		scanf("%d", &n4);
	} while (n4 == 0);

	//练习4-20
	for (int i = 0; i < 11; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 11; j++)
			{
				if (j == 0)
				{
					putchar(' ');
				}
				else if (j == 1)
				{
					putchar('|');
				}
				else
				{
					printf("%3d", j - 1);
				}
			}
		}
		else if (i == 1)
		{
			for (int j = 0; j < 29; j++)
			{
				putchar('-');
			}
		}
		else
		{
			for (int j = 0; j < 11; j++)
			{
				if (j == 0)
				{
					printf("%d", i - 1);
				}
				else if (j == 1)
				{
					putchar('|');
				}
				else
				{
					printf("%3d", (i - 1)*(j - 1));
				}
			}
		}
		putchar('\n');
	}

	//练习4-21
	int n5;
	puts("生成一个正方形");
	printf("正方形有几层：");
	scanf("%d", &n5);
	for (int i = 0; i < n5; i++)
	{
		for (int j = 0; j < n5; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//练习4-22
	int n6, n7;
	puts("让我们来画一个长方形。");
	printf("一边：");
	scanf("%d", &n6);
	printf("另一边：");
	scanf("%d", &n7);
	if (n6 > n7)
	{
		int temp = n6;
		n6 = n7;
		n7 = temp;
	}
	for (int i = 0; i < n6; i++)
	{
		for (int j = 0; j < n7; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//练习4-23
	int n8;
	puts("生成直角在左上方和右上方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &n8);
	for (int i = 0; i < n8; i++)
	{
		for (int j = 0; j < n8 - i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	for (int i = 0; i < n8; i++)
	{
		for (int j = 0; j < i; j++)
		{
			putchar(' ');
		}
		for (int j = i; j < n8; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//练习4-24
	int n9, n10;
	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &n9);
	n10 = (n9 - 1) * 2 + 1;
	for (int i = 0; i < n9; i++)
	{
		int num = i * 2 + 1;
		for (int j = 0; j < (n10-num)/2; j++)
		{
			putchar(' ');
		}
		for (int j = (n10 - num) / 2; j < (n10 + num) / 2; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	//练习4-24
	int n11, n12;
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &n11);
	n12 = (n11 - 1) * 2 + 1;
	for (int i = 0; i < n11; i++)
	{
		int num = (n11 - i - 1) * 2 + 1;
		for (int j = 0; j < (n12 - num) / 2; j++)
		{
			putchar(' ');
		}
		for (int j = (n12 - num) / 2; j < (n12 + num) / 2; j++)
		{
			printf("%d", (i + 1) % 10);
		}
		putchar('\n');
	}


	system("pause");
	return 0;
}