#include<stdio.h>
main()
{
	int num, i;
	printf("”‚ð“ü‚ê‚Ä");
	scanf("%d", &num);
	i = 0;
	while(i>=0 && i<=10)
	{
		printf("%d + %d = %d\n", num, i, num + i );
		i++;
	}
}