#include<stdio.h>
main()
{
	char i;
	int j;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &i);
	for (j = i - 32; j <= 'Z'; j++) {
		printf("%c ", j);
	}
}