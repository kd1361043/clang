#include<stdio.h>
main()
{
	char i;
	printf("アルファベット? ");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z') {
		printf("その文字は「小文字」です");
	}
	else {
		if (i >= 'A' && i <= 'Z') {
			printf("その文字は「大文字」です");
		}
	}
}