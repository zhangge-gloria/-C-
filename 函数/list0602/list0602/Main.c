#include<stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	return max;
}

void main()
{
	int a, b, c;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("����c��");
	scanf("%d", &c);
	printf("���ֵ�ǣ�%d��\n", max3(a, b, c));

	system("pause");
}