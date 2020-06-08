#include <stdio.h>

int main ()
{
	int a,b;
	float l,d,D;
	printf("请输入比值中较小的数：\n");
	scanf ("%d",&a);
	printf("请输入比值中较大大数：\n");
	scanf("%d",&b);
	printf("请输入锥的长度：\n");
	scanf("%f",&l);
	printf("请输入较小的直径，如果需要求值，请输入0!：\n");
	scanf("%f",&d);
	printf("请输入较大的直径，如果需要求值，请输入0!：\n");
	scanf("%f",&D);
	if (d==0)
	{
		printf("计算的小端半径是：%.2lf\n",D - a * l / b);
	}
	if(D==0)
	{
		printf("计算的大端半径是%.2lf\n",a * l / b + d);
	}
	return 0;
}
