#include<stdio.h>
main()
{
	char i;
	int j;
	printf("アルファベット小文字？");
	scanf("%c", &i);
	for (j = i; j <= 'z'; j++) {
		printf("%c ", j);
	}
}