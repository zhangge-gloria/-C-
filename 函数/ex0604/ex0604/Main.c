#include<stdio.h>

int sqr(int x)
{
	return x * x;
}

int diff(int a, int b)
{
	return (a > b) ? (a - b) : (b - a);
}

int pow4(int x)
{
	return sqr(sqr(x));
}

void main()
{
	int a, b;
	puts("����������������");
	printf("����a��");
	scanf("%d", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("a��b���Ĵη����ǣ�%d\n", diff(pow4(a), pow4(b)));
	system("pause");
}