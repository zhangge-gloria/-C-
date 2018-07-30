#include<stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[],int n)
{
	for (int i = 0; i < n; i++)
	{
		v1[i] = v2[n - 1 - i];
	}
}

void main()
{
	int v1[NUMBER];
	int v2[NUMBER];
	for (int i = 0; i < NUMBER; i++)
	{
		printf("ÕûÊý%d£º", i + 1);
		scanf("%d", &v2[i]);
	}
	intary_rcpy(v1, v2, NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("v1[%d]=%d\n", i, v1[i]);
	}

	system("pause");
}