#include <stdio.h>

int main()
{
	int a,b;
	int n=0;
	double x=0;
	double vx,vy;
	int n1,n2,n3,n4;
	double d1,d2,d3,d4;
	int n5,n6;
	int n7,n8,n9;
	int sum;
	double ave;
	int n10;

	puts("����������������");
	printf("����a��");
	scanf("%d",&a);
	printf("����b��");
	scanf("%d",&b);
	printf("���ǵ�ƽ��ֵ��%d��\n",(a+b)/2);
	printf("���ǵ�ƽ��ֵ��%f��\n",(a+b)/2.0);
	printf("���ǵ�ƽ��ֵ��%f��\n",(double)(a+b)/2);

	n=9.99;
	x=9.99;
	printf("int�ͱ���n��ֵ��%d��\n",n);
	printf("n/2��%d��\n",n/2);
	printf("double�ͱ���x��ֵ��%f��\n",x);
	printf("x/2.0��%f��\n",x/2.0);

	puts("��������������");
	printf("ʵ��vx��");
	scanf("%lf",&vx);
	printf("ʵ��vy��");
	scanf("%lf",&vy);
	printf("vx+vy=%f\n",vx+vy);
	printf("vx-vy=%f\n",vx-vy);
	printf("vx*vy=%f\n",vx*vy);
	printf("vx/vy=%f\n",vx/vy);

	n1=5/2;
	n2=5.0/2.0;
	n3=5.0/2;
	n4=5/2.0;
	d1=5/2;
	d2=5.0/2.0;
	d3=5.0/2;
	d4=5/2.0;
	printf("n1=%d\n",n1);
	printf("n2=%d\n",n2);
	printf("n3=%d\n",n3);
	printf("n4=%d\n",n4);
	printf("d1=%f\n",d1);
	printf("d2=%f\n",d2);
	printf("d3=%f\n",d3);
	printf("d4=%f\n",d4);

	puts("����������������");
	printf("����n5��");
	scanf("%d",&n5);
	printf("����n6��");
	scanf("%d",&n6);
	printf("n5��n6��%f%%\n",(double)n5/n6*100);

	puts("����������������");
	printf("����n7��");
	scanf("%d",&n7);
	printf("����n8��");
	scanf("%d",&n8);
	printf("����n9��");
	scanf("%d",&n9);
	sum=n7+n8+n9;
	ave=(double)sum/3;
	printf("���ǵĺϼ�ֵ��%5d��\n",sum);
	printf("���ǵ�ƽ��ֵ��%5.1f��\n",ave);

	printf("������������ߣ�");
	scanf("%d",&n10);
	printf("���ı�׼������%.1f���\n",(n10-100)*0.9);

	system("pause");
	return 0;
}