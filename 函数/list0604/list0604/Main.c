#include<stdio.h>

int max2(int a, int b)
{
	return (a > b) ? a : b;
}

int max4(int n1, int n2, int n3, int n4)
{
	return max2(max2(n1, n2), max2(n3, n4));
}

void main()
{
	int n1, n2, n3, n4;
	puts("�������ĸ�������");
	printf("����n1��");
	scanf("%d", &n1);
	printf("����n2��");
	scanf("%d", &n2);
	printf("����n3��");
	scanf("%d", &n3);
	printf("����n4��");
	scanf("%d", &n4);
	printf("�������ǣ�%d\n", max4(n1, n2, n3, n4));
	system("pause");
}