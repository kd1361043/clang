#include <stdio.h>
main()
{
	char date[] = "Orange";
	int i;
	for (i = 0; date[i] != '\0'; i++){ }

	printf("文字列 : %s\n", date);
	printf("文字数は %d 文字\n", i);
}