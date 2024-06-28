#include<stdio.h>
main()
{
	int i, j;
	char k;

	printf("整数1？ ");
	scanf("%d\n", &i);
	printf("整数2？ ");
	scanf("%d\n", &j);
	printf("演算子？ ");
	scanf("%c", &k);

	switch (k) {
	case'+':
		printf("%d %c %d = %d", i, k, j, i + j);
		break;

	case'-':
		printf("%d %c %d = %d", i, k, j, i - j);
		break;
	case'*':
		printf("%d %c %d = %d", i, k, j, i * j);
		break;
	case'/':
		printf("%d %c %d = %d", i, k, j, i / j);
		break;
	case'%':
		printf("%d %c %d = %d", i, k, j, i % j);
		break;
	}
}