#include <stdio.h>
main()
{
	int i, sum, num;
	printf("”‚Í?");
	scanf("%d", &num);
	i = 0;
	sum = 0;
	while (num != -9990) {
		sum += num;
		printf("”‚Í?");
		scanf("%d", &num);
		i++;
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, sum / (float)i);
}