#include<stdio.h>
main()
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		printf("   %d ", i);
	}
	printf("\n============================\n");
	for (j = 1; j <= 9; j++) {
		printf("%d |\n", j);
	}
}