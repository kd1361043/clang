#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[30];
	int i, n, k[30];

	srand(time(0));

	printf("文字列を入力してください＞");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) 
	{
		//乱数を求める
		k[i] = rand() % 6;
		//求めた乱数で暗号化
		s[i] = s[i] + k[i];
	}
	printf("暗号化文字列は、%s\n", &s);

	printf("暗号キーは、");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	printf("\n");
}