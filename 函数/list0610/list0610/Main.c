#include<stdio.h>

#define NUMBER 5

int score[NUMBER];

int Top();

void main()
{
	printf("������%d��ѧ���ĳɼ���\n", NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("%d��", i + 1);
		scanf("%d", &score[i]);
	}
	printf("��߷�=%d\n", Top());

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