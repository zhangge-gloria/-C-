#include <stdio.h>

int main()
{
	int n0;
	int n1;
	int n2,n3;
	int n4;
	int n5,n6;
	int n7;
	int n8;
	int n9;
	int n10;
	int n11,n12;
	int n13;
	int n14,n15;
	int n16,n17;
	int n18;
	int n19,n20,n21,n22;
	int n23,n24,n25;
	int n26,n27;
	int n28,n29,n30,n31;
	int n32,n33,n34,n35,n36;
	int n37,n38;
	int n39,n40,n41,n42;
	int n43,n44,n45,n46;
	int month;
	int n47,n48,n49;
	int n50,n51;

	//代码清单3-1，3-3
	printf("请输入一个整数：");
	scanf("%d",&n0);
	if (n0%5!=0)
	{
		puts("输入的整数不能被5整除。");
	}
	else
	{
		puts("输入的整数能被5整除。");
	}

	//代码清单3-2，3-4
	printf("请输入一个整数：");
	scanf("%d",&n1);
	if (n1%2!=0)
	{
		puts("输入的整数是奇数。");
	}
	else
	{
		puts("输入的整数是偶数。");
	}

	//练习3-1
	puts("请输入两个整数。");
	printf("整数n2：");
	scanf("%d",&n2);
	printf("整数n3：");
	scanf("%d",&n3);
	if(n2%n3==0)
	{
		puts("n3是n2的约数。");
	}
	else
	{
		puts("n3不是n2的约数。");
	}

	//代码清单3-5
	printf("请输入一个整数：");
	scanf("%d",&n4);
	if (n4!=0)
	{
		puts("该整数不是0。");
	}
	else
	{
		puts("该整数是0。");
	}

	//代码清单3-6，3-7
	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d",&n5);
	printf("整数2：");
	scanf("%d",&n6);
	if (n5==n6)
	{
		puts("它们相等。");
	}
	else
	{
		puts("它们不相等。");
	}
	if (n5!=n6)
	{
		puts("它们不相等。");
	}
	else
	{
		puts("它们相等。");
	}

	//代码清单3-8
	printf("请输入一个整数：");
	scanf("%d",&n7);
	if (n7%10==5)
	{
		puts("该整数的个位数是5。");
	}
	else
	{
		puts("该整数的个位数不是5。");
	}

	//代码清单3-9
	printf("请输入一个整数：");
	scanf("%d",&n8);
	if (n8==0)
	{
		puts("该整数为0。");
	}
	else if (n8>0)
	{
		puts("该整数为正数。");
	}
	else
	{
		puts("该整数为负数。");
	}

	//练习3-2
	printf("请输入一个整数：");
	scanf("%d",&n9);
	if (n9==0)
	{
		puts("该整数为0。");
	}
	else if (n9>0)
	{
		puts("该整数为正数。");
	}
	else if(n9<0)
	{
		puts("该整数为负数。");
	}

	//练习3-3
	printf("请输入一个整数：");
	scanf("%d",&n10);
	if(n10<0)
	{
		n10=-n10;
	}
	printf("绝对值是%d\n",n10);

	//练习3-4
	puts("请输入两个整数。");
	printf("整数A：");
	scanf("%d",&n11);
	printf("整数B：");
	scanf("%d",&n12);
	if (n11==n12)
	{
		puts("A等于B。");
	}
	else if (n11>n12)
	{
		puts("A大于B。");
	}
	else
	{
		puts("A小于B。");
	}

	//代码清单3-10
	printf("请输入一个整数：");
	scanf("%d",&n13);
	if (n13>0)
	{
		if (n13%2==0)
		{
			puts("该整数为偶数。");
		}
		else
		{
			puts("该整数为奇数。");
		}
	}
	else
	{
		puts("您输入的不是正数。\a\n");
	}

	//练习3-5
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n14);
	printf("请输入第二个数：");
	scanf("%d",&n15);
	if (n14==n15)
	{
		puts("运算结果为1。");
	}
	else
	{
		puts("运算结果为0。");
	}

	//代码清单3-11，3-12
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n16);
	printf("请输入第二个数：");
	scanf("%d",&n17);
	if (n16>n17)
	{
		n18=n16;
		printf("较大的数是%d。\n",n16);
	}
	else
	{
		n18=n17;
		printf("较大的数是%d。\n",n17);
	}
	printf("较大的数是%d。\n",n18);

	//代码清单3-13
	puts("请输入三个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n19);
	printf("请输入第二个数：");
	scanf("%d",&n20);
	printf("请输入第三个数：");
	scanf("%d",&n21);
	n22=n19;
	if(n20>n22)
	{
		n22=n20;
	}
	if(n21>n22)
	{
		n22=n21;
	}
	printf("最大值是%d。\n",n22);
	
	//代码清单3-14
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n23);
	printf("请输入第二个数：");
	scanf("%d",&n24);
	n25=(n23>n24)?n23:n24;
	printf("较大的数是：%d\n",n25);

	//代码清单3-15
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n26);
	printf("请输入第二个数：");
	scanf("%d",&n27);
	printf("它们的差是：%d\n",(n26>n27)?(n26-n27):(n27-n26));

	//练习3-6
	puts("请输入三个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n28);
	printf("请输入第二个数：");
	scanf("%d",&n29);
	printf("请输入第三个数：");
	scanf("%d",&n30);
	n31=n28;
	if(n29<n31)
	{
		n31=n29;
	}
	if(n30<n31)
	{
		n31=n30;
	}
	printf("最小值是%d。\n",n31);

	//练习3-7
	puts("请输入四个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n32);
	printf("请输入第二个数：");
	scanf("%d",&n33);
	printf("请输入第三个数：");
	scanf("%d",&n34);
	printf("请输入第四个数：");
	scanf("%d",&n35);
	n36=n32;
	if(n33>n36)
	{
		n36=n33;
	}
	if (n34>n36)
	{
		n36=n34;
	}
	if (n35>n36)
	{
		n36=n35;
	}
	printf("最大值是%d。\n",n36);

	//练习3-8
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n37);
	printf("请输入第二个数：");
	scanf("%d",&n38);
	if(n37>n38)
	{
		printf("它们的差是：%d\n",n37-n38);
	}
	else
	{
		printf("它们的差是：%d\n",n38-n37);
	}

	//练习3-9
	puts("请输入三个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n39);
	printf("请输入第二个数：");
	scanf("%d",&n40);
	printf("请输入第三个数：");
	scanf("%d",&n41);
	n42=n39;
	n42=(n42>n40)?n40:n42;
	n42=(n42>n41)?n41:n42;
	printf("最小值是%d。\n",n42);

	//代码清单3-16
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n43);
	printf("请输入第二个数：");
	scanf("%d",&n44);
	if(n43>n44)
	{
		n45=n43;
		n46=n44;
	}
	else
	{
		n45=n44;
		n46=n43;
	}
	printf("较大的数是：%d\n",n45);
	printf("较小的数是：%d\n",n46);

	//代码清单3-17
	printf("请输入月份：");
	scanf("%d",&month);
	if (month>=3&&month<=5)
	{
		printf("%d月是春天。\n",month);
	}
	else if (month>=6&&month<=8)
	{
		printf("%d月是夏天。\n",month);
	}
	else if (month>=9&&month<=11)
	{
		printf("%d月是秋天。\n",month);
	}
	else if (month==1||month==2||month==12)
	{
		printf("%d月是冬天。\n",month);
	}
	else
	{
		printf("%d月不存在。\a\n",month);
	}

	//练习3-10
	puts("请输入三个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n47);
	printf("请输入第二个数：");
	scanf("%d",&n48);
	printf("请输入第三个数：");
	scanf("%d",&n49);
	if (n47==n48&&n47==n49)
	{
		puts("三个值相等。");
	}
	else if (n47==n48||n47==n49||n48==n49)
	{
		puts("有两个值相等。");
	}
	else
	{
		puts("三个值各不相同");
	}

	//练习3-11
	puts("请输入两个整数。");
	printf("请输入第一个数：");
	scanf("%d",&n50);
	printf("请输入第二个数：");
	scanf("%d",&n51);
	if ((n50>=n51&&(n50-n51)<=10)||(n50<n51&&(n51-n50)<=10))
	{
		puts("它们的差小于等于10。");
	}
	else
	{
		puts("它们的差大于等于11。");
	}

	system("pause");
	return 0;
}