#include<stdio.h>
main()
{
	int n, o;
	printf("整数？");
	scanf("%d", &n);
	o = n % 2;
	if (o == 0) {
		printf("その数は偶数です\n");
	}
	else {
		printf("その数は奇数です\n");
	}
		

	
}