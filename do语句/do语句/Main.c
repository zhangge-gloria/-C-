#include <stdio.h>

int main()
{
	//变量声明
	int n0,retry;
	int hand;
	int sum=0;
	int cnt=0;
	int retry1;
	int n1,retry2;
	int n2,n3,sum1,n4;

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

	//代码清单4-2
	do 
	{
		printf("请选择出什么拳？[0...石头/1...剪刀/2...布]：");
		scanf("%d",&hand);
	} while (hand<0||hand>2);
	printf("你选择了");
	switch(hand)
	{
	case 0:
		{
			printf("石头。\n");
		}
		break;
	case 1:
		{
			printf("剪刀。\n");
		}
		break;
	case 2:
		{
			printf("布。\n");
		}
	}

	//代码清单4-3，4-4
	do 
	{
		int t;
		printf("请输入一个整数：");
		scanf("%d",&t);
		sum+=t;
		cnt+=1;
		printf("是否继续？[0...YES/1...NO]：");
		scanf("%d",&retry1);
	} while (retry1==0);
	printf("和为%d，平均值为%.2f。\n",sum,(double)sum/cnt);

	//练习4-1
	do 
	{
		printf("请输入一个整数：");
		scanf("%d",&n1);
		if (n1==0)
		{
			puts("该整数是0。");
		}
		else if(n1>0)
		{
			puts("该整数是正数。");
		}
		else
		{
			puts("该整数是负数。");
		}
		printf("是否继续？[0...YES/1...NO]：");
		scanf("%d",&retry2);
	} while (retry2==0);

	//练习4-2
	puts("请输入两个整数。");
	printf("整数a：");
	scanf("%d",&n2);
	printf("整数b：");
	scanf("%d",&n3);
	if (n2>n3)
	{
		int temp=n2;
		n2=n3;
		n3=temp;
	}
	sum1=0;
	n4=n2;
	do 
	{
		sum1=sum1+n4;
		n4=n4+1;
	} while (n4>=n2&&n4<=n3);
	printf("大于等于%d小于等于%d的所有整数的和是%d。\n",n2,n3,sum1);

	system("pause");
	return 0;
}