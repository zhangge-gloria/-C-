#include<stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	return min;
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
	printf("��С�����ǣ�%d\n", min3(a, b, c));
	system("pause");
}