#define _CRT_SECURE_NO_DEPRECATE

#include<stdio.h>

int main()
{
	int x, y;
	puts("����������������");
	printf("�������һ������x��");
	scanf("%d", &x);
	printf("������ڶ�������y��");
	scanf("%d", &y);
	printf("x+y=%d\n", x + y);
	printf("x-y=%d\n", x - y);
	printf("x*y=%d\n", x * y);
	printf("x/y=%d\n", x / y);
	printf("x%%y=%d\n", x % y);

	int n0;
	printf("������һ��������");
	scanf("%d", &n0);
	printf("���һλ�ǣ�%d��\n", n0 % 10);

	int a, b;
	puts("����������������");
	printf("�������һ������a��");
	scanf("%d", &a);
	printf("������ڶ�������b��");
	scanf("%d", &b);
	printf("a����b��%d��%d��\n", a / b, a%b);

	//��ϰ2-1
	int x1, y1;
	puts("����������������");
	printf("�������һ������x1��");
	scanf("%d", &x1);
	printf("������ڶ�������y1��");
	scanf("%d", &y1);
	printf("x1��ֵ��y1��%d%%��\n", x1 * 100 / y1);

	//��ϰ2-2
	int a1, b1;
	puts("����������������");
	printf("�������һ������a1��");
	scanf("%d", &a1);
	printf("������ڶ�������b1��");
	scanf("%d", &b1);
	printf("���ǵĺ���%d������%d��\n", a1 + b1, a1*b1);

	int num;
	printf("������һ��������");
	scanf("%d", &num);
	printf("����ȡ��֮���ֵ�ǣ�%d��\n", -num);

	system("pause");
	return 0;
}