#include<stdio.h>
main()
{
	int i, j;
	printf("整数? ");
	scanf("%d", &i);
	printf("整数? ");
	scanf("%d", &j);

	if (i > j) {
		printf("%dの方が%dより%d大きい", i, j, i - j);
	}
	else {
		if (i < j) {
			printf("%dの方が%dより%d小さい", i, j, j - i);
		}
		else {
			printf("%dと%dは等しい", i, j);
		}
	}
}