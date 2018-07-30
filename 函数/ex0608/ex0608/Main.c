#include<stdio.h>

#define NUMBER 5

int min_of(const int v[], int n)
{
	int min = v[0];
	for (int i = 1; i < n; i++)
	{
		if (min > v[i])
		{
			min = v[i];
		}
	}
	return min;
}

void main()
{
	int v[NUMBER];
	for (int i = 0; i < NUMBER; i++)
	{
		printf("整数%d：", i + 1);
		scanf("%d", &v[i]);
	}
	printf("最小值=%d\n", min_of(v, NUMBER));

	system("pause");
}