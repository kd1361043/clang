#include<stdio.h>
main()
{
	int i, j;
	i = 1;
	j = 0;
	do {
		printf("%d+", i);
		i++;
		j += i;
	} while (j <= 300);
	printf("=%d", j);
}