#include<stdio.h>

int main()
{
	//�����嵥4-11
	int n0;
	printf("������һ����������");
	scanf("%d", &n0);
	for (int i = 0; i <= n0; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//�����嵥4-12
	int n1;
	printf("��������");
	scanf("%d", &n1);
	for (int i = 0; i < n1; i++)
	{
		putchar('*');
	}
	putchar('\n');

	//�����嵥4-13
	int n2;
	int n3 = 0;
	printf("������ٸ�������");
	scanf("%d", &n2);
	for (int i = 0; i < n2; i++)
	{
		int temp;
		printf("No.%d:", i + 1);
		scanf("%d", &temp);
		n3 += temp;
	}
	printf("�ϼ�ֵ��%d\n", n3);
	printf("ƽ��ֵ��%.2f\n", (double)n3 / n2);

	//��ϰ4-13
	int n4;
	int n5 = 0;
	printf("��������");
	scanf("%d", &n4);
	for (int i = 1; i <= n4; i++)
	{
		n5 += i;
	}
	printf("1��%d�ĺ�Ϊ%d��\n", n4, n5);

	//��ϰ4-14
	int n6;
	printf("������һ��������");
	scanf("%d", &n6);
	for (int i = 1; i <= n6; i++)
	{
		printf("%d", i % 10);
	}
	printf("\n");

	//��ϰ4-15
	int n7, n8, n9;
	printf("��ʼ��ֵ��cm����");
	scanf("%d", &n7);
	printf("������ֵ��cm����");
	scanf("%d", &n8);
	printf("�����ֵ��cm����");
	scanf("%d", &n9);
	for (int i = n7; i <= n8; i += n9)
	{
		printf("%dcm     %.2fkg", i, (i - 100)*0.9);
		printf("\n");
	}

	//�����嵥4-14
	int n10;
	printf("����ֵ��");
	scanf("%d", &n10);
	for (int i = 2; i <= n10; i += 2)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//�����嵥4-15
	int n11;
	printf("����ֵ��");
	scanf("%d", &n11);
	for (int i = 1; i <= n11; i++)
	{
		if (n11%i == 0)
		{
			printf("%d ", i);
		}
	}
	putchar('\n');

	//��ϰ4-16
	int n12;
	printf("����ֵ��");
	scanf("%d", &n12);
	for (int i = 1; i <= n12; i += 2)
	{
		printf("%d ", i);
	}
	putchar('\n');

	//��ϰ4-17
	int n13;
	printf("����ֵ��");
	scanf("%d", &n13);
	for (int i = 1; i <= n13; i++)
	{
		printf("%d�Ķ��η���%d\n", i, i*i);
	}

	//��ϰ4-18
	int n14;
	printf("��ʾ���ٸ�*��");
	scanf("%d", &n14);
	for (int i = 1; i <= n14; i++)
	{
		putchar('*');
		if (i % 5 == 0)
		{
			putchar('\n');
		}
	}
	if (n14 % 5 != 0)
	{
		putchar('\n');
	}

	//��ϰ4-19
	int n15;
	int n16 = 0;
	printf("����ֵ��");
	scanf("%d", &n15);
	for (int i = 1; i <= n15; i++)
	{
		if (n15%i == 0)
		{
			printf("%d\n", i);
			n16++;
		}
	}
	printf("Լ����%d����\n", n16);

	system("pause");
	return 0;
}