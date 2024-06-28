#include<stdio.h>
main()
{
	char date[] = "Apple";
	int i;

	printf("1文字ずつ表示\n");
	for (i = 0; date[i] != '\0'; i++)
	{
		printf("%c\n", date[i]);
	}

	printf("\n文字列を表示\n");
	//printf("%s\n", &date[0]);//%sの時はアドレスを指定
	printf("%s\n", date);//配列名だけ書くと先頭アドレスを表す
}