#include<stdio.h>

void alert(int n)
{
	while (n-- > 0)
	{
		putchar('\a');
	}
}

void main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	alert(n);
	system("pause");
}