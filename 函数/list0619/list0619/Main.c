//ȷ��ӵ�о�̬�洢�ڵĶ����Ĭ�ϵĳ�ʼ��
#include<stdio.h>

int fx;

void main()
{
	static int si;
	static double sd;
	static int sa[5];

	printf("fx=%d\n", fx);
	printf("si=%d\n", si);
	printf("sd=%d\n", sd);

	for (int i = 0; i < 5; i++)
	{
		printf("sa[%d]=%d\n", i, sa[i]);
	}

	system("pause");
}