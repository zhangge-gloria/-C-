//为n行3列的二维数组的所有构成元素赋上同样的值
#include<stdio.h>

void fill(int m[][3], int n, int v)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m[i][j] = v;
		}
	}
}

void mat_print(const int m[][3], int n)
{
	for (int i = 0; i < n; i++)
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
	int n0;
	int x[2][3] = { 0 };
	int y[4][3] = { 0 };
	printf("赋给所有构成元素的值：");
	scanf("%d", &n0);
	fill(x, 2, n0);
	fill(y, 2, n0);
	printf("-------x-------\n");
	mat_print(x, 2);
	printf("-------y-------\n");
	mat_print(y, 2);

	system("pause");
}