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
	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (int i = 0; i < NUMBER; i++)
	{
		printf("[%d]Ӣ�", i + 1);
		scanf("%d", &eng[i]);
		printf("   ��ѧ��");
		scanf("%d", &mat[i]);
	}
	printf("Ӣ�����߷�=%d\n", max_of(eng, NUMBER));
	printf("��ѧ����߷�=%d\n", max_of(mat, NUMBER));

	system("pause");
}