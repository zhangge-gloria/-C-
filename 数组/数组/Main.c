#include<stdio.h>

#define NUMBER0 5//�����嵥5-10
#define NUMBER1 7//��ϰ5-5
#define NUMBER2 80//�����嵥5-12

int main()
{
	//�����嵥5-2
	int n0[5];
	n0[0] = 1;
	n0[1] = 2;
	n0[2] = 3;
	n0[3] = 4;
	n0[4] = 5;
	printf("n0[0]=%d\n", n0[0]);
	printf("n0[1]=%d\n", n0[1]);
	printf("n0[2]=%d\n", n0[2]);
	printf("n0[3]=%d\n", n0[3]);
	printf("n0[4]=%d\n", n0[4]);

	//�����嵥5-3
	int n1[5];
	for (int i = 0; i < 5; i++)
	{
		n1[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n1[%d]=%d\n", i, n1[i]);
	}

	//�����嵥5-4
	double n2[7];
	for (int i = 0; i < 7; i++)
	{
		n2[i] = 0.0;
	}
	for (int i = 0; i < 7; i++)
	{
		printf("n2[%d]=%.1f\n", i, n2[i]);
	}

	//��ϰ5-1
	int n3[5];
	for (int i = 0; i < 5; i++)
	{
		n3[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n3[%d]=%d\n", i, n3[i]);
	}

	//��ϰ5-2
	int n4[5];
	for (int i = 0; i < 5; i++)
	{
		n4[i] = 5 - i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n4[%d]=%d\n", i, n4[i]);
	}

	//�����嵥5-5
	int n5[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		printf("n5[%d]=%d\n", i, n5[i]);
	}

	//�����嵥5-6
	int n6[5] = { 17,23,36 };
	int n7[5];
	for (int i = 0; i < 5; i++)
	{
		n7[i] = n6[i];
	}
	puts("  n6  n7");
	puts("----------");
	for (int i = 0; i < 5; i++)
	{
		printf("%4d%4d\n", n6[i], n7[i]);
	}

	//��ϰ5-3
	int n8[5] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++)
	{
		printf("n8[%d]=%d\n", i, n8[i]);
	}

	//��ϰ5-4
	int n9[5] = { 17,23,36 };
	int n10[5];
	for (int i = 0; i < 5; i++)
	{
		n10[i] = n9[4 - i];
	}
	puts("  n9  n10");
	puts("----------");
	for (int i = 0; i < 5; i++)
	{
		printf("%4d%4d\n", n9[i], n10[i]);
	}

	//�����嵥5-7
	int n11[5];
	for (int i = 0; i < 5; i++)
	{
		printf("n11[%d]��", i);
		scanf("%d", &n11[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("n11[%d]=%d\n", i, n11[i]);
	}

	//�����嵥5-8����ϰ5-5
	int n12[NUMBER1];
	for (int i = 0; i < NUMBER1; i++)
	{
		printf("n12[%d]��", i);
		scanf("%d", &n12[i]);
	}
	for (int i = 0; i < NUMBER1/2; i++)
	{
		int temp = n12[i];
		n12[i] = n12[6 - i];
		n12[6 - i] = temp;
	}
	puts("��������");
	for (int i = 0; i < NUMBER1; i++)
	{
		printf("n12[%d]=%d\n", i, n12[i]);
	}

	//�����嵥5-9��5-10
	int n13[NUMBER0];
	int n14 = 0;
	for (int i = 0; i < NUMBER0; i++)
	{
		printf("%2d�ţ�", i + 1);
		scanf("%d", &n13[i]);
		n14 += n13[i];
	}
	printf("�ܷ֣�%5d\n", n14);
	printf("ƽ���֣�%5.1f\n", (double)n14 / NUMBER0);

	//�����嵥5-11
	int n15[NUMBER0];
	int n16, n17;
	printf("������%d��ѧ���ķ�����\n", NUMBER0);
	for (int i = 0; i < NUMBER0; i++)
	{
		printf("%2d�ţ�", i + 1);
		scanf("%d", &n15[i]);
	}
	n16 = n17 = n15[0];
	for (int i = 1; i < NUMBER0; i++)
	{
		if (n15[i] < n16)
		{
			n16 = n15[i];
		}
		if (n15[i] > n17)
		{
			n17 = n15[i];
		}
	}
	printf("��߷֣�%d\n", n17);
	printf("��ͷ֣�%d\n", n16);

	//��ϰ5-6
	double n18;
	int n19;
	n18 = n19 = 1.5;
	printf("n18=%.1f\n", n18);
	printf("n19=%d\n", n19);

	//�����嵥5-12����ϰ5-8����ϰ5-9
	int n20;
	int n21[NUMBER2];
	int n22[11] = { 0 };
	printf("������ѧ��������");
	do
	{
		scanf("%d", &n20);
		if (n20<1 || n20>NUMBER2)
		{
			printf("\a������1~%d������", NUMBER2);
		}
	} while (n20<1 || n20>NUMBER2);
	printf("������%d�˵ķ�����\n", n20);
	for (int i = 0; i < n20; i++)
	{
		printf("%2d�ţ�", i + 1);
		do
		{
			scanf("%d", &n21[i]);
			if (n21[i] < 0 || n21[i]>100)
			{
				printf("\a������1~100������");
			}
		} while (n21[i] < 0 || n21[i]>100);
		n22[n21[i] / 10]++;
	}
	puts("\n---�ֲ�ͼ---");
	printf("    100��");
	for (int i = 0; i < n22[10]; i++)
	{
		putchar('*');
	}
	putchar('\n');
	for (int i = 9; i >= 0; i--)
	{
		printf("%3d-%3d��", i * 10, i * 10 + 9);
		for (int j = 0; j < n22[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	//��ϰ5-8
	puts("\n---�ֲ�ͼ---");
	for (int i = 0; i <10; i++)
	{
		printf("%3d-%3d��", i * 10, i * 10 + 9);
		for (int j = 0; j < n22[i]; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	printf("    100��");
	for (int i = 0; i < n22[10]; i++)
	{
		putchar('*');
	}
	putchar('\n');
	//��ϰ5-9
	int n25 = 0;
	for (int i = 0; i < 11; i++)
	{
		if (n22[i] > n25)
		{
			n25 = n22[i];
		}
	}
	for (int i = 0; i < n25; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (n22[j] >= n25 - i)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("----------------------------------\n");
	for (int i = 0; i < 11; i++)
	{
		printf("% d", i * 10);
	}
	printf("\n");

	//��ϰ5-7
	int n23;
	int n24[NUMBER2];
	printf("���ݸ�����");
	do
	{
		scanf("%d", &n23);
		if (n23<1 || n23>NUMBER2)
		{
			printf("\a������1~%d������", NUMBER2);
		}
	} while (n23<1 || n23>NUMBER2);
	for (int i = 0; i < n23; i++)
	{
		printf("%2d�ţ�", i + 1);
		scanf("%d", &n24[i]);
	}
	printf("{");
	for (int i = 0; i < n23; i++)
	{
		if (i == n23 - 1)
		{
			printf("%d", n24[i]);
		}
		else
		{
			printf("%d, ", n24[i]);
		}
	}
	printf("}\n");

	system("pause");
	return 0;
}