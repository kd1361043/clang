#include<stdio.h>
main()
{
	int i,j;
	double k;
	j = 0;
	k = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &i);
	while (i != -999) {
		j += i;
		printf("整数(-999で終了)？");
		scanf("%d", &i);
		k++;
	}
	printf("合計 = %d\n", j);
	printf("平均 = %.2f", j / k);
}