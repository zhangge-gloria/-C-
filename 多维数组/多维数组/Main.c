#include<stdio.h>

int main()
{
	//�����嵥5-13
	int exam1[4][3] = { {91,63,78},{67,72,46},{89,34,53},{32,54,34} };
	int exam2[4][3] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
	int sum[4][3];
	//���ο��Եķ���֮��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = exam1[i][j] + exam2[i][j];
		}
	}
	//��ʾ
	puts("��һ�ο��Եķ���");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", exam1[i][j]);
		}
		putchar('\n');
	}
	puts("�ڶ��ο��Եķ���");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", exam2[i][j]);
		}
		putchar('\n');
	}
	puts("�ܷ�");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", sum[i][j]);
		}
		putchar('\n');
	}

	//��ϰ5-10
	int n1[4][3];
	int n2[3][4];
	int n3[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("n1[%d][%d]��", i, j);
			scanf("%d", &n1[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("n2[%d][%d]��", i, j);
			scanf("%d", &n2[i][j]);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			n3[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				n3[i][j] += n1[i][k] * n2[k][j];
			}
		}
	}
	puts("4��3�о���");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", n1[i][j]);
		}
		putchar('\n');
	}
	puts("3��4�о���");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", n2[i][j]);
		}
		putchar('\n');
	}
	puts("�˻�");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", n3[i][j]);
		}
		putchar('\n');
	}

	//��ϰ5-11
	int n4[6][2];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("��%dλѧ���ĵ�%d�ſγ̵ķ�����", i + 1, j + 1);
			scanf("%d", &n4[i][j]);
		}
	}
	//��ʾ����
	for (int i = 0; i < 6; i++)
	{
		int temp = 0;
		for (int j = 0; j < 2; j++)
		{
			printf("%4d", n4[i][j]);
			temp += n4[i][j];
		}
		printf("    �ܷ֣�%d��ƽ���֣�%.2f", temp, (double)temp / 2);
		putchar('\n');
	}
	//�����ֺܷ�ƽ����
	for (int i = 0; i < 2; i++)
	{
		int temp = 0;
		for (int j = 0; j < 6; j++)
		{
			temp += n4[j][i];
		}
		printf("��%d�ſγ̵��ܷ֣�%d��ƽ���֣�%.2f", i + 1, temp, (double)temp / 6);
		putchar('\n');
	}

	//��ϰ5-12
	int exam[2][4][3] = { { { 91,63,78 },{ 67,72,46 },{ 89,34,53 },{ 32,54,34 } },{ { 97,67,82 },{ 73,43,46 },{ 97,56,21 },{ 85,46,35 } } };
	int sum1[4][3];
	//���ο��Եķ���֮��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum1[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				sum1[i][j] += exam[k][i][j];
			}
		}
	}
	//��ʾ
	for (int i = 0; i < 2; i++)
	{
		printf("��%d�ο��Եķ���\n", i + 1);
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("%4d", exam[i][j][k]);
			}
			putchar('\n');
		}
	}
	puts("�ܷ�");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", sum1[i][j]);
		}
		putchar('\n');
	}



	system("pause");
	return 0;
}