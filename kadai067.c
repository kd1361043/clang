#include<stdio.h>
main()
{
	int i, j;
	char k;

	printf("����1�H ");
	scanf("%d\n", &i);
	printf("����2�H ");
	scanf("%d\n", &j);
	printf("���Z�q�H ");
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