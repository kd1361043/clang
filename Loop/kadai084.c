#include<stdio.h>
main()
{
	int ia, ib, j, k;
	ia = 0;
	ib = 0;
	while (ia != -999 && ib != -999)
	{
		printf("����1(-999�ŏI���H)");
		scanf("%d", &ia);
		printf("����2(-999�ŏI���H)");
		scanf("%d", &ib);
		if (ia == 0 && ib == 0)break;
		printf("%d / %d = %d���܂�%d\n", ia, ib, ia / ib, ia % ib);
		
	}
}