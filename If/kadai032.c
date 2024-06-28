#include<stdio.h>
main()
{
	int i;
	printf("整数? ");
	scanf("%d", &i);
	if (i % 2 == 0) {
		printf("「偶数」です");
	}
	else {
		printf("「奇数」です");
	}
}