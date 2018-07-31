#include<stdio.h>

void put_count()
{
	static int count = 1;
	printf("put_count£ºµÚ%d´Î\n", count++);
}

void main()
{
	for (int i = 0; i < 3; i++)
	{
		put_count();
	}

	system("pause");
}