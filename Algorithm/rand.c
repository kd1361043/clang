#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int i, j, k = 0;
	srand(time(0));
	rand();
	i = rand() % 1000 + 1;
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n");
	do {
		printf("������̐���?->");
		scanf("%d", &j);
		if (i > j) {
			printf("������̐���菬�����ł�\n");
		}
		if (i < j) {
			printf("������̐����傫���ł�\n");
		}
		k++;
	} while (i != j);
	printf("����!%d��œ�����܂���\n", k);
}