#include<stdio.h>

#define NUMBER 5

void rev_intary(int v[], int n)
{
	int temp;
	for (int i = 0; i < n / 2; i++)
	{
		temp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = temp;
	}
}

void main()
{
	int v[NUMBER];
	for (int i = 0; i < NUMBER; i++)
	{
		printf("ÕûÊý%d£º", i + 1);
		scanf("%d", &v[i]);
	}
	rev_intary(v, NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("v[%d]=%d\n", i, v[i]);
	}

	system("pause");
}