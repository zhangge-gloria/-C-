#include<stdio.h>

//无符号整数右移
unsigned int rrotate(unsigned int x, int n)
{
	return x >> n;
}

//无符号整数左移
unsigned int lrotate(unsigned int x, int n)
{
	return x << n;
}

void main()
{
	unsigned int value = 0;
	int bitNum = 0;
	printf("请输入一个正整数：");
	scanf("%d", &value);
	printf("请输入位移数：");
	scanf("%d", &bitNum);

	printf("%d左移%d位是%d\n", value, bitNum, value << bitNum);
	printf("%d右移%d位是%d\n", value, bitNum, value >> bitNum);

	system("pause");
}