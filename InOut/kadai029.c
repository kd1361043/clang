#include<stdio.h>
main()
{
	double i, j;
	i = 3.1415;

	printf("���a? ");
	scanf("%lf", &j);
	printf("���a�� %f\n", j * 2);
	printf("�~���� %f\n", i * (j * 2));
	printf("�ʐρ� %f\n", j * j * i);
}