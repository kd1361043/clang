#include<stdio.h>
main()
{
	int i, j;
	double k;
	
	j = 0;
	k = 0;

	do {
		printf("����(-999�ŏI��)�H");
		scanf("%d\n", &i);
		k++;
		j += i;
	} while (i != -999);

	printf("���v = %d\n", j);
	printf("���� = %f", j / k);
}