#include<stdio.h>
main()
{
	int ia, ib, j, k;
	ia = 0;
	ib = 0;
	while (ia != -999 && ib != -999)
	{
		printf("整数1(-999で終了？)");
		scanf("%d", &ia);
		printf("整数2(-999で終了？)");
		scanf("%d", &ib);
		if (ia == 0 && ib == 0)break;
		printf("%d / %d = %dあまり%d\n", ia, ib, ia / ib, ia % ib);
		
	}
}