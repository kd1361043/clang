#include<stdio.h>
main()
{
	int a;
	float i;
	printf("é¿êî? ");
	scanf("%.2f", &a);
	i = a / 2;
	printf("1 / 2 = %f\n", i);
	i = a / 3;
	printf("1 / 3 = %f\n", i);
	i = a / 4;
	printf("1 / 4 = %f", i);
}