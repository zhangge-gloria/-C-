#include<stdio.h>

int min2(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

void main()
{
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("��С�����ǣ�%d\n", min2(a, b));
	system("pause");
}