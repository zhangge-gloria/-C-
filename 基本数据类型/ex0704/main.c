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
	printf("请输入一个正整数：");
	scanf("%d", &x);
	printf("请输入一个位置：");
	scanf("%d", &pos);
	printf("%d的第%d位设为1，值为：%d\n", x, pos, set(x, pos));
	printf("%d的第%d位设为0，值为：%d\n", x, pos, reset(x, pos));
	printf("%d的第%d位取反，值为：%d\n", x, pos, inverse(x, pos));

	system("pause");
}