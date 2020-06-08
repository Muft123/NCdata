#include <stdio.h>

int main ()
{
	float D;
	float F;
	printf("请输入螺纹的大径：\n");
	scanf ("%f",&D);
	printf("请输入螺纹的螺距：\n");
	scanf("%f",&F);
	printf("螺纹的小径是：%.2lf\n",D-1.3*F);
}
