#include<stdio.h>

#define NUMBER0 5//代码清单5-10
#define NUMBER1 7//练习5-5
#define NUMBER2 80//代码清单5-12

int main()
{
	//代码清单5-2
	int n0[5];
	n0[0] = 1;
	n0[1] = 2;
	n0[2] = 3;
	n0[3] = 4;
	n0[4] = 5;
	printf("n0[0]=%d\n", n0[0]);
	printf("n0[1]=%d\n", n0[1]);
	printf("n0[2]=%d\n", n0[2]);
	printf("n0[3]=%d\n", n0[3]);
	printf("n0[4]=%d\n", n0[4]);

	//代码清单5-3
	int n1[5];
	for (int i = 0; i < 5; i++)
	{
		n1[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n1[%d]=%d\n", i, n1[i]);
	}

	//代码清单5-4
	double n2[7];
	for (int i = 0; i < 7; i++)
	{
		n2[i] = 0.0;
	}
	for (int i = 0; i < 7; i++)
	{
		printf("n2[%d]=%.1f\n", i, n2[i]);
	}

	//练习5-1
	int n3[5];
	for (int i = 0; i < 5; i++)
	{
		n3[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n3[%d]=%d\n", i, n3[i]);
	}

	//练习5-2
	int n4[5];
	for (int i = 0; i < 5; i++)
	{
		n4[i] = 5 - i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n4[%d]=%d\n", i, n4[i]);
	}

	//代码清单5-5
	int n5[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		printf("n5[%d]=%d\n", i, n5[i]);
	}

	//代码清单5-6
	int n6[5] = { 17,23,36 };
	int n7[5];
	for (int i = 0; i < 5; i++)
	{
		n7[i] = n6[i];
	}
	puts("  n6  n7");
	puts("----------");
	for (int i = 0; i < 5; i++)
	{
		printf("%4d%4d\n", n6[i], n7[i]);
	}

	//练习5-3
	int n8[5] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++)
	{
		printf("n8[%d]=%d\n", i, n8[i]);
	}

	//练习5-4
	int n9[5] = { 17,23,36 };
	int n10[5];
	for (int i = 0; i < 5; i++)
	{
		n10[i] = n9[4 - i];
	}
	puts("  n9  n10");
	puts("----------");
	for (int i = 0; i < 5; i++)
	{
		printf("%4d%4d\n", n9[i], n10[i]);
	}

	//代码清单5-7
	int n11[5];
	for (int i = 0; i < 5; i++)
	{
		printf("n11[%d]：", i);
		scanf("%d", &n11[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n11[%d]=%d\n", i, n11[i]);
	}

	//代码清单5-8，练习5-5
	int n12[NUMBER1];
	for (int i = 0; i < NUMBER1; i++)
	{
		printf("n12[%d]：", i);
		scanf("%d", &n12[i]);
	}
	for (int i = 0; i < NUMBER1/2; i++)
	{
		int temp = n12[i];
		n12[i] = n12[6 - i];
		n12[6 - i] = temp;
	}
	puts("倒序排列");
	for (int i = 0; i < NUMBER1; i++)
	{
		printf("n12[%d]=%d\n", i, n12[i]);
	}

	//代码清单5-9，5-10
	int n13[NUMBER0];
	int n14 = 0;
	for (int i = 0; i < NUMBER0; i++)
	{
		printf("%2d号：", i + 1);
		scanf("%d", &n13[i]);
		n14 += n13[i];
	}
	printf("总分：%5d\n", n14);
	printf("平均分：%5.1f\n", (double)n14 / NUMBER0);

	//代码清单5-11
	int n15[NUMBER0];
	int n16, n17;
	printf("请输入%d名学生的分数。\n", NUMBER0);
	for (int i = 0; i < NUMBER0; i++)
	{
		printf("%2d号：", i + 1);
		scanf("%d", &n15[i]);
	}
	n16 = n17 = n15[0];
	for (int i = 1; i < NUMBER0; i++)
	{
		if (n15[i] < n16)
		{
			n16 = n15[i];
		}
		if (n15[i] > n17)
		{
			n17 = n15[i];
		}
	}
	printf("最高分：%d\n", n17);
	printf("最低分：%d\n", n16);

	//练习5-6
	double n18;
	int n19;
	n18 = n19 = 1.5;
	printf("n18=%.1f\n", n18);
	printf("n19=%d\n", n19);

	//代码清单5-12，练习5-8，练习5-9
	int n20;
	int n21[NUMBER2];
	int n22[11] = { 0 };
	printf("请输入学生人数：");
	do
	{
		scanf("%d", &n20);
		if (n20<1 || n20>NUMBER2)
		{
			printf("\a请输入1~%d的数：", NUMBER2);
		}
	} while (n20<1 || n20>NUMBER2);
	printf("请输入%d人的分数。\n", n20);
	for (int i = 0; i < n20; i++)
	{
		printf("%2d号：", i + 1);
		do
		{
			scanf("%d", &n21[i]);
			if (n21[i] < 0 || n21[i]>100)
			{
				printf("\a请输入1~100的数：");
			}
		} while (n21[i] < 0 || n21[i]>100);
		n22[n21[i] / 10]++;
	}
	puts("\n---分布图---");
	printf("    100：");
	for (int i = 0; i < n22[10]; i++)
	{
		putchar('*');
	}
	putchar('\n');
	for (int i = 9; i >= 0; i--)
	{
		printf("%3d-%3d：", i * 10, i * 10 + 9);
		for (int j = 0; j < n22[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	//练习5-8
	puts("\n---分布图---");
	for (int i = 0; i <10; i++)
	{
		printf("%3d-%3d：", i * 10, i * 10 + 9);
		for (int j = 0; j < n22[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	printf("    100：");
	for (int i = 0; i < n22[10]; i++)
	{
		putchar('*');
	}
	putchar('\n');
	//练习5-9
	int n25 = 0;
	for (int i = 0; i < 11; i++)
	{
		if (n22[i] > n25)
		{
			n25 = n22[i];
		}
	}
	for (int i = 0; i < n25; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (n22[j] >= n25 - i)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("----------------------------------\n");
	for (int i = 0; i < 11; i++)
	{
		printf("% d", i * 10);
	}
	printf("\n");

	//练习5-7
	int n23;
	int n24[NUMBER2];
	printf("数据个数：");
	do
	{
		scanf("%d", &n23);
		if (n23<1 || n23>NUMBER2)
		{
			printf("\a请输入1~%d的数：", NUMBER2);
		}
	} while (n23<1 || n23>NUMBER2);
	for (int i = 0; i < n23; i++)
	{
		printf("%2d号：", i + 1);
		scanf("%d", &n24[i]);
	}
	printf("{");
	for (int i = 0; i < n23; i++)
	{
		if (i == n23 - 1)
		{
			printf("%d", n24[i]);
		}
		else
		{
			printf("%d, ", n24[i]);
		}
	}
	printf("}\n");

	system("pause");
	return 0;
}