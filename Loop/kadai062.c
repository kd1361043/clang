#include<stdio.h>
main()
{
	int i;
	i = 20;
	do {
		printf("%d ", i);
		i--;
	} while (i >= 11);
	printf("\n");
	i = 10;
	do {
		printf("%d ", i);
		i--;
	} while (i >= 1);
}