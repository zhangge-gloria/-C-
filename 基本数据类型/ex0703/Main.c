#include<stdio.h>

//�޷�����������
unsigned int rrotate(unsigned int x, int n)
{
	return x >> n;
}

//�޷�����������
unsigned int lrotate(unsigned int x, int n)
{
	return x << n;
}

void main()
{
	unsigned int value = 0;
	int bitNum = 0;
	printf("������һ����������");
	scanf("%d", &value);
	printf("������λ������");
	scanf("%d", &bitNum);

	printf("%d����%dλ��%d\n", value, bitNum, value << bitNum);
	printf("%d����%dλ��%d\n", value, bitNum, value >> bitNum);

	system("pause");
}