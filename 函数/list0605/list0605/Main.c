#include<stdio.h>

double power(double x, int y)
{
	double temp = 1.0;
	for (int i = 0; i < y; i++)
	{
		temp *= x;
	}
	return temp;
}

void main()
{
	double a;
	int b;
	puts("��a��b����");
	printf("ʵ��a��");
	scanf("%lf", &a);
	printf("����b��");
	scanf("%d", &b);
	printf("%.2f��%d�����ǣ�%.2f\n", a, b, power(a, b));
	system("pause");
}