//�ж�char�����޷���

#include<stdio.h>
#include<limits.h>

void main()
{
	printf("����������е�char����");
	if (CHAR_MIN!=0)
	{
		puts("�з��ŵġ�");
	}
	else
	{
		puts("�޷��ŵġ�");
	}
	printf("%d\n", CHAR_BIT);

	system("pause");
}