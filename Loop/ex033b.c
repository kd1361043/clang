#include <stdio.h>
main()
{
	int i, sum, num;
	printf("数は?");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	while (num != -9990) {
		sum += num;
		printf("数は?");
		scanf("%d", &num);
		i++;
	}
	printf("合計=%d 平均=%.2f\n", sum, sum / (float)i);
}