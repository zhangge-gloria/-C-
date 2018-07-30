//求4名学生在两次考试中3课程的总分并显示（三维数组函数版）
#include<stdio.h>

void mat_add(const int a[2][4][3], int c[4][3])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				c[i][j] += a[k][i][j];
			}
		}
	}
}

void mat_print(const int a[2][4][3])
{
	for (int i = 0; i < 2; i++)
	{
		printf("第%d次考试的分数\n", i + 1);
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("%4d", a[i][j][k]);
			}
			putchar('\n');
		}
	}
}

void sum_print(const int m[4][3])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", m[i][j]);
		}
		putchar('\n');
	}
}

void main()
{
	int score[2][4][3] = { { { 91,63,78 },{ 67,72,46 },{ 89,34,53 },{ 32,54,34 } } ,{ { 97,67,82 },{ 73,43,46 },{ 97,56,21 },{ 85,46,35 } } };
	int sum[4][3];
	mat_add(score, sum);
	mat_print(score);
	puts("总分");
	sum_print(sum);

	system("pause");
}