#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i;

	for (i = 0; i != '\n'; i++) {
		c[i] = a[i];
	}
	c[i] = '\n';
	
	printf("”z—ña = ");
	for (i = 0; i <= 9; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("”z—ñc = ");
	for (i = 0; i <= 9; i++) {
		printf("%d ", c[i]);
	}
}