#include<stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void main()
{
	int n1[4][3];
	int n2[3][4];
	int n3[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("n1[%d][%d]：", i, j);
			scanf("%d", &n1[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("n2[%d][%d]：", i, j);
			scanf("%d", &n2[i][j]);
		}
	}

	puts("4行3列矩阵");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", n1[i][j]);
		}
		putchar('\n');
	}
	puts("3行4列矩阵");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", n2[i][j]);
		}
		putchar('\n');
	}
	puts("乘积");
	mat_mul(n1, n2, n3);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", n3[i][j]);
		}
		putchar('\n');
	}

	system("pause");
}