#include<stdio.h>
void display1(int n1);/*プロトタイプ宣言渡し*/
void display2(int* n2);/*プロトタイプ宣言アドレス渡し*/

main()
{
	int a, b;
	printf("数値a ?: ");
	scanf("%d", &a);
	display1(a);                /*関数displayの呼び出し*/
	printf("a = %d\n\n", a);

	printf("数値b ?: ");
	scanf("%d", &b);
	display2(&b);               /*関数displayの呼び出し*/
	printf("b = %d\n\n", b);
}

/*関数sisplay1の記述*/
void display1(int n)
{
	printf("数値aは、%dです。\n",n);
	n += 10;
	return;
}

/*関数display2の*/
void display2(int *n)
{
	printf("数値bは、%dです。\n", *n);
	*n += 10;
	return;
}