#include <stdio.h>

int main()
{
	//��������
	int n0;
	int n1;
	int n2;
	int n3;
	int month;

	//�����嵥3-18
	printf("������һ��������");
	scanf("%d",&n0);
	if (n0%3==0)
	{
		puts("�����ܱ�3������");
	}
	else if (n0%3==1)
	{
		puts("��������3��������1��");
	}
	else if (n0%3==2)
	{
		puts("��������3��������2��");
	}

	//�����嵥3-19
	printf("������һ��������");
	scanf("%d",&n1);
	switch(n1%3)
	{
	case 0:
		{
			puts("�����ܱ�3������");
		}
		break;
	case 1:
		{
			puts("��������3��������1��");
		}
		break;
	case 2:
		{
			puts("��������3��������2��");
		}
		break;
	}

	//�����嵥3-20
	printf("������");
	scanf("%d",&n2);
	switch(n2)
	{
	case 1:
		{
			puts("A");
			puts("B");
		}
		break;
	case 2:
		{
			puts("C");
		}
	case 5:
		{
			puts("D");
		}
		break;
	case 6:
		{

		}
	case 7:
		{
			puts("E");
		}
		break;
	default:
		{
			puts("F");
		}
		break;
	}

	//��ϰ3-12
	printf("������һ��������");
	scanf("%d",&n3);
	switch(n3%2)
	{
	case 0:
		{
			puts("�����������ż����");
		}
		break;
	default:
		{
			puts("�����������������");
		}
		break;
	}

	//��ϰ3-13
	printf("�������·ݣ�");
	scanf("%d",&month);
	switch(month)
	{
	case 3:
	case 4:
	case 5:
		{
			printf("%d���Ǵ��졣\n",month);
		}
		break;
	case 6:
	case 7:
	case 8:
		{
			printf("%d�������졣\n",month);
		}
		break;
	case 9:
	case 10:
	case 11:
		{
			printf("%d�������졣\n",month);
		}
		break;
	case 12:
	case 1:
	case 2:
		{
			printf("%d���Ƕ��졣\n",month);
		}
		break;
	default:
		{
			printf("%d�²����ڡ�\a\n",month);
		}
		break;
	}

	system("pause");
	return 0;
}