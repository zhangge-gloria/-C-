//��ʾ��unsigned�͵�ֵ�������ƺ����ƺ��ֵ

#include<stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x)
	{
		if (x & 1U)
		{
			bits++;
		}
		x >>= 1;
	}
	return bits;
}

int int_bits()
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
	{
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}

void main()
{
	unsigned x, n;
	printf("�Ǹ�������");
	scanf("%u", &x);
	printf("λ��λ����");
	scanf("%u", &n);

	printf("\n����=      ");
	print_bits(x);
	printf("\n���ƺ��ֵ=");
	print_bits(x<<n);
	printf("\n���ƺ��ֵ=");
	print_bits(x>>n);
	putchar('\n');

	system("pause");
}