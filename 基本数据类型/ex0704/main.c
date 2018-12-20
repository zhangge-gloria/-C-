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
		x=set(x, pos);
	}
	else
	{
		x = reset(x, pos);
	}
	return x;
}

void main()
{
	unsigned x = 0;
	int pos = 0;
	printf("������һ����������");
	scanf("%d", &x);
	printf("������һ��λ�ã�");
	scanf("%d", &pos);
	printf("%d�ĵ�%dλ��Ϊ1��ֵΪ��%d\n", x, pos, set(x, pos));
	printf("%d�ĵ�%dλ��Ϊ0��ֵΪ��%d\n", x, pos, reset(x, pos));
	printf("%d�ĵ�%dλȡ����ֵΪ��%d\n", x, pos, inverse(x, pos));

	system("pause");
}