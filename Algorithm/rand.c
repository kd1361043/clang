#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int i, j, k = 0;
	srand(time(0));
	rand();
	i = rand() % 1000 + 1;
	printf("1〜1000の中で当たりの数を予想してください\n");
	do {
		printf("当たりの数は?->");
		scanf("%d", &j);
		if (i > j) {
			printf("当たりの数より小さいです\n");
		}
		if (i < j) {
			printf("当たりの数より大きいです\n");
		}
		k++;
	} while (i != j);
	printf("正解!%d回で当たりました\n", k);
}