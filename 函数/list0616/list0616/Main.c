//求4名学生在两次考试中3课程的总分并显示（函数版）
#include<stdio.h>

void mat_add(const int a[4][3],const b[4][3],int c[4][3])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void mat_print(const int m[4][3])
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
	int score1[4][3] = { {91,63,78},{67,72,46},{89,34,53},{32,54,34} };
	int score2[4][3] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
	int sum[4][3];
	mat_add(score1, score2, sum);
	puts("第一次考试的分数");
	mat_print(score1);
	puts("第二次考试的分数");
	mat_print(score2);
	puts("总分");
	mat_print(sum);

	system("pause");
}