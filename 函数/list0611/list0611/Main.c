#include<stdio.h>

#define NUMBER 5

int max_of(int v[], int n)
{
	int max = v[0];
	for (int i = 1; i < n; i++)
	{
		if (max < v[i])
		{
			max = v[i];
		}
	}
	return max;
}

void main()
{
	int eng[NUMBER], mat[NUMBER];
	printf("请输入%d名学生的分数。\n", NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("[%d]英语：", i + 1);
		scanf("%d", &eng[i]);
		printf("   数学：");
		scanf("%d", &mat[i]);
	}
	printf("英语的最高分=%d\n", max_of(eng, NUMBER));
	printf("数学的最高分=%d\n", max_of(mat, NUMBER));

	system("pause");
}