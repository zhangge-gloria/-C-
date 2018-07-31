#include<stdio.h>

int fx = 0;

void func()
{
	static int sx = 0;
	int ax = 0;
	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

void main()
{
	puts(" ax sx fx");
	puts("----------");
	for (int i = 0; i < 10; i++)
	{
		func();
	}
	puts("----------");

	system("pause");
}