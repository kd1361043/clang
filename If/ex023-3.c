#include <stdio.h>
main()
{
	int n, s1, s2;
	printf("演算子を入力:\n");
	scanf("%d", &n);
	printf("二つの整数を入力:\n");
	scanf("%d %d", &s1, &s2);
	if (n == 1)
	{
		printf("%d\n", s1 + s2);
	}
	else
	{
		if (n == 2)
		{
			printf("%d\n", s1 - s2);
		}
		else
		{
			if (n == 3)
			{
				printf("%d\n", s1 * s2);
			}
			else
			{
				printf("%d\n", s1 / s2);
			}
		}
	}
}