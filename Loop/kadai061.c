#include<stdio.h>
main()
{
	int i;
	i = 1;
	do {
		printf("%d ", i);
		i++;
	} while (i <= 10);
	printf("\n");
	i = 11;
	do {
		printf("%d ",i);
		i++;
	} while (i <= 20);
}