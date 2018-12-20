#include <stdio.h>

//x�ĵ�posλ��Ϊ1
unsigned set(unsigned x, int pos)
{
	x |= (1 << pos);
	return x;
}

//x�ĵ�posλ��Ϊ0
unsigned reset(unsigned x, int pos)
{
	x &= ~(1 << pos);
	return x;
}

//x�ĵ�posλȡ��
unsigned inverse(unsigned x, int pos)
{
	unsigned temp = x & (1 << pos);
	if (temp == 0)
	{
		x = set(x, pos);
	}
	else
	{
		x = reset(x, pos);
	}
	return x;
}

//x�ĵ�posλ����pos+n-1λ��Ϊ1
unsigned set_n(unsigned x, int pos, int n)
{
	for (int i = 0; i < 32; i++)
	{
		if (i >= pos && i <= pos + n - 1)
		{
			x = set(x, i);
		}
	}
	return x;
}

//x�ĵ�posλ����pos+n-1λ��Ϊ0
unsigned reset_n(unsigned x, int pos, int n)
{
	for (int i = 0; i < 32; i++)
	{
		if (i >= pos && i <= pos + n - 1)
		{
			x = reset(x, i);
		}
	}
	return x;
}

//x�ĵ�posλ����pos+n-1λȡ��
unsigned inverse_n(unsigned x, int pos, int n)
{
	for (int i = 0; i < 32; i++)
	{
		if (i >= pos && i <= pos + n - 1)
		{
			x = inverse(x, i);
		}
	}
	return x;
}

void main()
{
	unsigned x = 0;
	int pos = 0;
	int n = 0;
	printf("������һ����������");
	scanf("%d", &x);
	printf("������һ��λ�ã�");
	scanf("%d", &pos);
	printf("������λ����");
	scanf("%d", &n);

	printf("%d�ĵ�%dλ����%dλ��Ϊ1��ֵΪ��%d\n", x, pos, pos + n - 1, set_n(x, pos,n));
	printf("%d�ĵ�%dλ����%dλ��Ϊ0��ֵΪ��%d\n", x, pos, pos + n - 1, reset_n(x, pos,n));
	printf("%d�ĵ�%dλ����%dλȡ����ֵΪ��%d\n", x, pos, pos + n - 1, inverse_n(x, pos,n));

	system("pause");
}