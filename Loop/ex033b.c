#include <stdio.h>
main()
{
	int i, sum, num;
	printf("����?");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	while (num != -9990) {
		sum += num;
		printf("����?");
		scanf("%d", &num);
		i++;
	}
	printf("���v=%d ����=%.2f\n", sum, sum / (float)i);
}