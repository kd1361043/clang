#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力:\n");
	scanf("%c", &moji);
	if (moji >= 'A')
	{
		if (moji <= 'Z')
		{
			printf("大文字です\n");
		}
		else
		{
			printf("その他の文字です\n");
		}
	}
	else
	{
		printf("その他の文字です\n");
	}
}