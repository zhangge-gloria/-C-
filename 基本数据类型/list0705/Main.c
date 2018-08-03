//求数组的元素个数
//我们应该避免使用这样的表达式来求元素个数

#include<stdio.h>

void main()
{
	int vi[10];
	double vd[25];

	printf("数组vi的元素个数=%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("数组vd的元素个数=%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	system("pause");
}