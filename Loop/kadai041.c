#include<stdio.h>
main()
{
	int i,j;
	double k;
	j = 0;
	k = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &i);
	while (i != -999) {
		j += i;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
		k++;
	}
	printf("���v = %d\n", j);
	printf("���� = %.2f", j / k);
}