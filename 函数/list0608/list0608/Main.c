#include<stdio.h>

void put_chars(int ch,int n)
{
	while (n-- > 0)
	{
		putchar(ch);
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
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
	system("pause");
}