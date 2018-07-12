#include <stdio.h>

int main()
{
	//变量声明
	int n0;
	int n1;
	int n2;
	int n3;
	int month;

	//代码清单3-18
	printf("请输入一个整数：");
	scanf("%d",&n0);
	if (n0%3==0)
	{
		puts("该数能被3整除。");
	}
	else if (n0%3==1)
	{
		puts("该数除以3的余数是1。");
	}
	else if (n0%3==2)
	{
		puts("该数除以3的余数是2。");
	}

	//代码清单3-19
	printf("请输入一个整数：");
	scanf("%d",&n1);
	switch(n1%3)
	{
	case 0:
		{
			puts("该数能被3整除。");
		}
		break;
	case 1:
		{
			puts("该数除以3的余数是1。");
		}
		break;
	case 2:
		{
			puts("该数除以3的余数是2。");
		}
		break;
	}

	//代码清单3-20
	printf("整数：");
	scanf("%d",&n2);
	switch(n2)
	{
	case 1:
		{
			puts("A");
			puts("B");
		}
		break;
	case 2:
		{
			puts("C");
		}
	case 5:
		{
			puts("D");
		}
		break;
	case 6:
		{

		}
	case 7:
		{
			puts("E");
		}
		break;
	default:
		{
			puts("F");
		}
		break;
	}

	//练习3-12
	printf("请输入一个整数：");
	scanf("%d",&n3);
	switch(n3%2)
	{
	case 0:
		{
			puts("输入的整数是偶数。");
		}
		break;
	default:
		{
			puts("输入的整数是奇数。");
		}
		break;
	}

	//练习3-13
	printf("请输入月份：");
	scanf("%d",&month);
	switch(month)
	{
	case 3:
	case 4:
	case 5:
		{
			printf("%d月是春天。\n",month);
		}
		break;
	case 6:
	case 7:
	case 8:
		{
			printf("%d月是夏天。\n",month);
		}
		break;
	case 9:
	case 10:
	case 11:
		{
			printf("%d月是秋天。\n",month);
		}
		break;
	case 12:
	case 1:
	case 2:
		{
			printf("%d月是冬天。\n",month);
		}
		break;
	default:
		{
			printf("%d月不存在。\a\n",month);
		}
		break;
	}

	system("pause");
	return 0;
}