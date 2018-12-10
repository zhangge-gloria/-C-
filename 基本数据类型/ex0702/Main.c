//无符号整数位左移后的值等于其乘以2的指数幂后的值。
//无符号整数位右移后的值等于其除以2的指数幂后的值。

#include<stdio.h>
#include"math.h"

int isOverflow(unsigned int value, unsigned int bitNum)
{
	for (unsigned int i = 31; i > 31 - bitNum; i--)
	{
		if ((value >> i) & 1U == 1)
		{
			return -1;
		}
	}
	return 1;
}

void main()
{
	unsigned int value = 0;
	unsigned int bitNum = 0;
	printf("请输入一个正整数：");
	scanf("%d", &value);
	
	printf("请输入位移数：");
	scanf("%d", &bitNum);

	//判断有没有发生高位溢出
	int res = isOverflow(value, bitNum);
	if (res == -1)
	{
		printf("高位溢出\n");
	}
	else
	{
		//判断移位和2的指数幂
		int temp = pow(2, bitNum);
		if ((value << bitNum) == value*temp)
		{
			printf("%d左移%d位后的值等于其乘以2的%d次幂后的值。\n", value, bitNum, bitNum);
		}
		if ((value >> bitNum) == (value/temp))
		{
			printf("%d右移%d位后的值等于其除以2的%d次幂后的值。\n", value, bitNum, bitNum);
		}
	}
	system("pause");
}