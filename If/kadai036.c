#include<stdio.h>
main()
{
	int i, j;
	printf("����? ");
	scanf("%d", &i);
	printf("����? ");
	scanf("%d", &j);

	if (i > j) {
		printf("%d�̕���%d���%d�傫��", i, j, i - j);
	}
	else {
		if (i < j) {
			printf("%d�̕���%d���%d������", i, j, j - i);
		}
		else {
			printf("%d��%d�͓�����", i, j);
		}
	}
}