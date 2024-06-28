#include <stdio.h>
main()
{
	//整数型変数　iの宣言と1への初期化
	int i;
	//do～whileの繰り返し処理
	do {
		//i=?の表示(?の部分は変数iの値)
		printf("i=%d\n", i);
		//変数のインクリメント
		i++;
		//後判定処理(iが10以下のとき繰り返し)
	} while (i <= 10);
}