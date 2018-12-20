#include <stdio.h>

//x的第pos位设为1
unsigned set(unsigned x, int pos)
{
	x |= (1 << pos);
	return x;
}

//x的第pos位设为0
unsigned reset(unsigned x, int pos)
{
	x &= ~(1 << pos);
	return x;
}

//x的第pos位取反
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

//x的第pos位到第pos+n-1位设为1
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

//x的第pos位到第pos+n-1位设为0
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

//x的第pos位到第pos+n-1位取反
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
	printf("请输入一个正整数：");
	scanf("%d", &x);
	printf("请输入一个位置：");
	scanf("%d", &pos);
	printf("请输入位数：");
	scanf("%d", &n);

	printf("%d的第%d位到第%d位设为1，值为：%d\n", x, pos, pos + n - 1, set_n(x, pos,n));
	printf("%d的第%d位到第%d位设为0，值为：%d\n", x, pos, pos + n - 1, reset_n(x, pos,n));
	printf("%d的第%d位到第%d位取反，值为：%d\n", x, pos, pos + n - 1, inverse_n(x, pos,n));

	system("pause");
}