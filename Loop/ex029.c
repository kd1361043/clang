#include<stdio.h>
main()
{
	int n, m;
	printf("数を入れて");
	scanf("%d", &n);

	m = 0;
	while (m < n)
	{
		printf("*");
		m++;
	}
}