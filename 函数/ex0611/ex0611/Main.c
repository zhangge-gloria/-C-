#include<stdio.h>

#define NUMBER 7

int search(const int v[],int idx[], int key, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == key)
		{
			idx[count] = i;
			count++;
		}
	}
	return count;
}

void main()
{
	int ky;
	int vx[NUMBER];
	int idx[NUMBER];

	for (int i = 0; i < NUMBER; i++)
	{
		printf("vx[%d]��", i);
		scanf("%d", &vx[i]);
	}
	printf("Ҫ���ҵ�ֵ��");
	scanf("%d", &ky);

	int count = search(vx, idx, ky, NUMBER);
	printf("����%d����ͬ������\n", count);
	printf("idx[]={ ");
	for (int i = 0; i < count; i++)
	{
		printf("%d ", idx[i]);
	}
	printf(" }\n");

	system("pause");
}