#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? (a - b) : (b - a);
}

void main()
{
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("a��b��ƽ�����ǣ�%d\n", diff(sqr(a), sqr(b)));
	system("pause");
}