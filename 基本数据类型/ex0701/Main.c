//创建一个程序，显示如下所示的各表达式的值，同时对各表达式的值加以说明
//sizeof 1  sizeof +1  sizeof -1
//sizeof(unsigned)-1  sizeof(double)-1  sizeof((double)-1)
//sizeof n+2  sizeof(n+2)  sizeof(n+2.0)

#include<stdio.h>

void main()
{
	int n;
	printf("sizeof 1=%u\n", sizeof 1);
	printf("sizeof +1=%u\n", sizeof +1);
	printf("sizeof -1=%u\n", sizeof -1);

	printf("sizeof (unsigned)-1=%u\n", sizeof(unsigned)-1);//sizeof只求unsigned的大小
	printf("sizeof (double)-1=%u\n", sizeof(double)-1);
	printf("sizeof ((double)-1)=%u\n", sizeof((double)-1));

	printf("sizeof n+2=%u\n", sizeof n+2);
	printf("sizeof (n+2)=%u\n", sizeof (n+2));
	printf("sizeof (n+2.0)=%u\n", sizeof (n+2.0));

	system("pause");
}