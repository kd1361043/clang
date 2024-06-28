#include<stdio.h>
main()
{
	int i;
	printf("0 から 100 までの整数? ");
	scanf("%d", &i);
	if (i >= 90) { printf("その値の判定結果は「5」です"); }
	else {
		if (i >= 80 && i < 90) { printf("その値の判定結果は「4」です"); }
		else {
			if (i >= 50 && i < 80) { printf("その値の判定結果は「3」です"); }
			else {
				if (i >= 30 && i < 50) { printf("その値の判定結果は「2」です"); }
				else { printf("その値の判定結果は「1」です"); }
			}
		}
	}
}