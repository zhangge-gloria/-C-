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
	printf("������һ��������");
	scanf("%d", &n);
	alert(n);
	system("pause");
}