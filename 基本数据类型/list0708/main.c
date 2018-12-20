//将0-65535之间的整数分别用十进制、二进制、八进制和十六进制表示
#include <stdio.h>

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

void print_nbits(unsigned x, unsigned n)
{
	int i = int_bits();
	i = (n < i) ? n - 1 : i - 1;
	for (; i >= 0; i--)
	{
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}

void main()
{
	for (unsigned i = 0; i <= 65535U; i++)
	{
		printf("%5u ", i);
		print_nbits(i, 16);
		printf(" %06o %04X\n", i, i);
	}

	system("pause");
}