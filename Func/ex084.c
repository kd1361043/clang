#include<stdio.h>
void Str_Revarse(char* str1, char* str2);
main()
{
	char str1[256], str2[256];

	printf("文字列？: ");
	gets(str1);
	Str_Revarse(str1, str2);
	printf("str1: %s\nstr2: %s\n", str1, str2);
}

//文字列を逆順にする
//戻り値　：　なし
//引数　　：　char*s1 ・コピー元
//　　　　　　char*s2 ・（逆順に設定）
void Str_Revarse(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++)
	{
		*(str2 + j) = *(str1 + i);
	}
	*(str2 + j) = '\0';
}
