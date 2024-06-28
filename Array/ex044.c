#include<stdio.h>
main()
{
	char moji1[100], moji2[100], w[100];
	int i;

	//入力
	printf("文字列1を入力 : ");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力  : ");
	scanf("%s", &moji2[0]);
	printf("moji1= %s \t moji2=%s\n", &moji1[0], &moji2[0]);
	printf("入れ替えると\n");
	//w配列へmoji1配列をコピー
	for (i = 0; moji1[i] != '\n'; i++)
	{
		w[i] = moji1[i];
	}
	//\0を入れる
	w[i] = '\n';

	//moji1へmoji2をコピー
	for (i = 0; moji2[i] != '\n'; i++)
	{
		moji2[i] = moji1[i];
	}
	//\0を入れる
	moji1[i] = '\n';

	//moji2へwをコピー
	for (i = 0; w[i] != '\n'; i++)
	{
		w[i] = moji2[i];
	}
	//\0を入れる
	moji2[i] = '\n';
	printf("入れ替えると\n");
	printf("moji1= %s \t moji2= %s\n", &moji1[0],&moji2[0]);
}