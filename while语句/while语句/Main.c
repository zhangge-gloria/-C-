#include<stdio.h>

int main()
{
	//�����嵥4-5����ϰ4-3
	int n0;
	printf("������һ����������");
	scanf("%d", &n0);
	while (n0>=0)
	{
		printf("%d ", n0);
		if (n0 == 0)
		{
			printf("\n");
		}
		n0--;
	}

	//�����嵥4-6
	int n1;
	printf("������һ����������");
	scanf("%d", &n1);
	while (n1 >= 0)
	{
		printf("%d ", n1--);
		if (n1 == -1)
		{
			printf("\n");
		}
	}

	//��ϰ4-4
	int n2;
	printf("������һ����������");
	scanf("%d", &n2);
	while (n2 > 0)
	{
		printf("%d ", n2--);
		if (n2 == 0)
		{
			printf("\n");
		}
	}

	//�����嵥4-7
	int n3;
	printf("������һ����������");
	scanf("%d", &n3);
	int i0 = 0;
	while (i0 <= n3)
	{
		printf("%d ", i0++);
	}
	printf("\n");

	//��ϰ4-5
	int n4;
	printf("������һ����������");
	scanf("%d", &n4);
	int i1 = 1;
	while (i1 <= n4)
	{
		printf("%d ", i1++);
		if (i1 == n4 + 1)
		{
			printf("\n");
		}
	}

	//��ϰ4-6
	int n5;
	printf("������һ����������");
	scanf("%d", &n5);
	int i2 = 1;
	while (i2 < n5)
	{
		if (i2 % 2 == 0)
		{
			printf("%d ", i2);
		}
		i2++;
	}
	if (n5 > 0)
	{
		printf("\n");
	}

	//��ϰ4-7
	int n6;
	printf("������һ����������");
	scanf("%d", &n6);
	int i3 = 2;
	while (i3 < n6)
	{
		printf("%d ", i3);
		i3 *= 2;
	}
	if (n6 > 1)
	{
		printf("\n");
	}

	//�����嵥4-8����ϰ4-8
	int n7, n8;
	printf("��������");
	scanf("%d", &n7);
	n8 = n7;
	while (n7-- > 0)
	{
		putchar('*');
	}
	if (n8 > 0)
	{
		putchar('\n');
	}

	//�����嵥4-9
	int i4 = 0;
	int n9 = 0;
	int n10, n11;
	printf("Ҫ������ٸ�������");
	scanf("%d", &n10);
	while (i4 < n10)
	{
		printf("No.%d:", ++i4);
		scanf("%d", &n11);
		n9 += n11;
	}
	printf("�ϼ�ֵ��%d\n", n9);
	printf("ƽ��ֵ��%.2f\n", (double)n9 / n10);

	//��ϰ4-9
	int n12;
	int i5 = 0;
	printf("��������");
	scanf("%d", &n12);
	while (i5 <n12)
	{
		if (i5 % 2 == 0)
		{
			putchar('+');
		}
		else
		{
			putchar('-');
		}
		i5++;
	}
	if (n12 > 0)
	{
		putchar('\n');
	}

	//��ϰ4-10
	int n13;
	printf("��������");
	scanf("%d", &n13);
	while (n13-->0)
	{
		putchar('*');
		putchar('\n');
	}

	//�����嵥4-10����ϰ4-11����ϰ4-12
	int n14;
	int n15 = 0;
	int n16;
	do
	{
		printf("������һ����������");
		scanf("%d", &n14);
		if (n14 <= 0)
		{
			puts("\a�벻Ҫ�������������");
		}
	} while (n14 <= 0);
	printf("%d������ʾ�Ľ����", n14);
	n16 = n14;
	while (n14 > 0)
	{
		n15++;
		printf("%d", n14 % 10);
		n14 /= 10;
	}
	puts("��");
	printf("%d��λ����%d��\n", n16, n15);

	system("pause");
	return 0;
}