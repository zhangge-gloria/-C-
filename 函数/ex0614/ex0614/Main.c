#include<stdio.h>

void main()
{
	static double sa[5];
	for (int i = 0; i < 5; i++)
	{
		printf("sa[%d]=%.2f\n", i, sa[i]);
	}

	system("pause");
}