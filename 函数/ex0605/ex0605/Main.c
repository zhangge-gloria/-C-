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
	printf("������һ��������");
	scanf("%d", &n);
	printf("1-%d֮�����������ĺ��ǣ�%d\n", n,sumup(n));
	system("pause");
}