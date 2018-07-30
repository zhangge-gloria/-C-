#include<stdio.h>

#define NUMBER 5

int score[NUMBER];

int Top();

void main()
{
	printf("请输入%d名学生的成绩。\n", NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("%d：", i + 1);
		scanf("%d", &score[i]);
	}
	printf("最高分=%d\n", Top());

	system("pause");
}

int Top()
{
	int max = score[0];
	for (int i = 1; i < NUMBER; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
	}
	return max;
}