#include<stdio.h>
main()
{
	int i, j;
	double k;
	j = 0;
	k = 0;
	while (i != -999)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
		if (i < 0) continue;
		j += i;
		k++;
	}
	printf("���v = %d", j);
	printf("���� = %f", j / k);
}