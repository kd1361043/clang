#include<stdio.h>
main()
{
	double i, j;
	printf("2�̎����l?");
	scanf("%.2lf%.2lf", &i, &j);
	printf("* * * %.2lf �� %.2lf �̎l�����Z * * *",i,j);
	printf("�a = %lf �� = %lf �� = %lf �� = %lf", i + j, i - j, i * j, i / j);
}