#include <stdio.h>

int main()
{
	//��������
	int n0,retry;
	int hand;
	int sum=0;
	int cnt=0;
	int retry1;
	int n1,retry2;
	int n2,n3,sum1,n4;

	//�����嵥4-1
	do 
	{
		printf("������һ��������");
		scanf("%d",&n0);
		if (n0%2==0)
		{
			puts("����Ϊż����");
		}
		else
		{
			puts("����Ϊ������");
		}
		printf("Ҫ�ظ�һ����[Yes......0/No......1]");
		scanf("%d",&retry);
	} while (retry==0);

	//�����嵥4-2
	do 
	{
		printf("��ѡ���ʲôȭ��[0...ʯͷ/1...����/2...��]��");
		scanf("%d",&hand);
	} while (hand<0||hand>2);
	printf("��ѡ����");
	switch(hand)
	{
	case 0:
		{
			printf("ʯͷ��\n");
		}
		break;
	case 1:
		{
			printf("������\n");
		}
		break;
	case 2:
		{
			printf("����\n");
		}
	}

	//�����嵥4-3��4-4
	do 
	{
		int t;
		printf("������һ��������");
		scanf("%d",&t);
		sum+=t;
		cnt+=1;
		printf("�Ƿ������[0...YES/1...NO]��");
		scanf("%d",&retry1);
	} while (retry1==0);
	printf("��Ϊ%d��ƽ��ֵΪ%.2f��\n",sum,(double)sum/cnt);

	//��ϰ4-1
	do 
	{
		printf("������һ��������");
		scanf("%d",&n1);
		if (n1==0)
		{
			puts("��������0��");
		}
		else if(n1>0)
		{
			puts("��������������");
		}
		else
		{
			puts("�������Ǹ�����");
		}
		printf("�Ƿ������[0...YES/1...NO]��");
		scanf("%d",&retry2);
	} while (retry2==0);

	//��ϰ4-2
	puts("����������������");
	printf("����a��");
	scanf("%d",&n2);
	printf("����b��");
	scanf("%d",&n3);
	if (n2>n3)
	{
		int temp=n2;
		n2=n3;
		n3=temp;
	}
	sum1=0;
	n4=n2;
	do 
	{
		sum1=sum1+n4;
		n4=n4+1;
	} while (n4>=n2&&n4<=n3);
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n",n2,n3,sum1);

	system("pause");
	return 0;
}