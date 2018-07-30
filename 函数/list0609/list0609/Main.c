#include<stdio.h>

int scan_pint()
{
	int temp;
	do
	{
		printf("请输入一个正整数：");
		scanf("%d", &temp);
		if (temp <= 0)
		{
			puts("\a请不要输入非正整数。");
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
	printf("该整数倒转后的值是%d。\n", rev_int(nx));

	system("pause");
}