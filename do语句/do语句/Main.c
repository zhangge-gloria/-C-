#include <stdio.h>

int main()
{
	//��������
	int n0,retry;

	//�����嵥4-1
	do 
	{
		printf("������һ��������");
		scanf("%d",&n0);
		if (n0%2==0)
		{
			puts("����Ϊż����");
		}
		else
		{
			puts("����Ϊ������");
		}
		printf("Ҫ�ظ�һ����[Yes......0/No......1]");
		scanf("%d",&retry);
	} while (retry==0);

	system("pause");
	return 0;
}