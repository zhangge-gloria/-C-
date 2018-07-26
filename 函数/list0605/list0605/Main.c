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
	puts("求a的b次幂");
	printf("实数a：");
	scanf("%lf", &a);
	printf("整数b：");
	scanf("%d", &b);
	printf("%.2f的%d次幂是：%.2f\n", a, b, power(a, b));
	system("pause");
}