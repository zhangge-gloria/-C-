#include<stdio.h>

int cube(int x)
{
	return x * x*x;
}

void main()
{
	int x;
	printf("������һ��������");
	scanf("%d", &x);
	printf("x�������ǣ�%d\n", cube(x));
	system("pause");
}