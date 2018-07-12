#include <stdio.h>

int main()
{
	//变量声明
	int n0,retry;

	//代码清单4-1
	do 
	{
		printf("请输入一个整数：");
		scanf("%d",&n0);
		if (n0%2==0)
		{
			puts("该数为偶数。");
		}
		else
		{
			puts("该数为奇数。");
		}
		printf("要重复一次吗？[Yes......0/No......1]");
		scanf("%d",&retry);
	} while (retry==0);

	system("pause");
	return 0;
}