#include<stdio.h>
main()
{
	char i;
	int j;
	printf("アルファベット小文字？");
	scanf("%c", &i);
	for (j = i - 32; j <= 'Z'; j++) {
		printf("%c ", j);
	}
}