#include<stdio.h>

void set_zero(int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		v[i] = 0;
	}
}

void printf_arr(const int v[], int n)
{
	printf("{ ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	printf("}");
}

void main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3 };
	printf("arr1=");
	printf_arr(arr1, 5);
	putchar('\n');
	printf("arr2=");
	printf_arr(arr2, 3);
	putchar('\n');
	set_zero(arr1, 5);
	set_zero(arr2, 3);
	puts("把零赋给两个数组的所有元素。");
	printf("arr1=");
	printf_arr(arr1, 5);
	putchar('\n');
	printf("arr2=");
	printf_arr(arr2, 3);
	putchar('\n');

	system("pause");
}