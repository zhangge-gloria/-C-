#include<stdio.h>

int main()
{
	int no;
	printf("������һ��������");
	scanf("%d", &no);
	printf("��������ǣ�%d��\n", no);
	printf("����5�����ǣ�%d��\n", no * 5);
	printf("����������12�Ľ���ǣ�%d��\n", no + 12);
	printf("��������ȥ6�Ľ���ǣ�%d��\n", no - 6);

	int n1, n2;
	puts("����������������");
	printf("����1��");
	scanf("%d", &n1);
	printf("����2��");
	scanf("%d", &n2);
	printf("���ǵĺ���%d��\n", n1 + n2);

	//��ϰ1-7
	puts("��");
	puts("��");
	puts("��"); 

	//��ϰ1-8
	int n3, n4;
	puts("��������������");
	printf("����1��");
	scanf("%d", &n3);
	printf("����2��");
	scanf("%d", &n4);
	printf("���ǵĳ˻���%d��\n", n3*n4);

	//��ϰ1-9
	int n5, n6, n7;
	puts("��������������");
	printf("����1��");
	scanf("%d", &n5);
	printf("����2��");
	scanf("%d", &n6);
	printf("����3��");
	scanf("%d", &n7);
	printf("���ǵĺ���%d��\n", n5 + n6 + n7);

	system("pause");
	return 0;
}