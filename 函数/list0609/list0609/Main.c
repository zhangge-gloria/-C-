#include<stdio.h>

int scan_pint()
{
	int temp;
	do
	{
		printf("������һ����������");
		scanf("%d", &temp);
		if (temp <= 0)
		{
			puts("\a�벻Ҫ�������������");
		}
	} while (temp <= 0);
	return temp;
}

int rev_int(int num)
{
	int temp = 0;
	if (num > 0)
	{
		do
		{
			temp = temp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}
	return temp;
}

void main()
{
	int nx = scan_pint();
	printf("��������ת���ֵ��%d��\n", rev_int(nx));

	system("pause");
}