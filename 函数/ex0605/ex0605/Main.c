#include<stdio.h>

int sumup(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n;
		n--;
	}
	return sum;
}

void main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("1-%d之间所有整数的和是：%d\n", n,sumup(n));
	system("pause");
}