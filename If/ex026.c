#include <stdio.h>
main()
{
	int month;
	printf("月を入力:\n");
	scanf("%d", &month);
	
		if (month == 2)
		{
			printf("最終日は 28 日です\n");
		}
		else
		{
			if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				printf("最終日は 30 日です\n");
			}
			else {
				printf("最終日は 31 日です￥ｎ");
			}
		}
}