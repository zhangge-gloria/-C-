#include<stdio.h>

void put_stars(int n)
{
	while (n-- > 0)
	{
		putchar('*');
	}
}

void main()
{
	int len;
	puts("����һ��ֱ�������·��ĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");
	scanf("%d", &len);
	for (int i = 1; i <= len; i++)
	{
		put_stars(i);
		putchar('\n');
	}
	system("pause");
}