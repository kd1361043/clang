#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int p, c;
	srand(time(0));
	rand();

	printf("何を出しますか？\n(1:グー　2:チョキ　3:パー1 >");
	scanf("%d", &c);
	c = rand() % 3;
	switch (p)
	{
	case 1:
		printf("プレイヤーは、グーです。\n");
		break;
	case 2:
		printf("プレイヤーは、チョキです。\n");
		break;
	case 3:
		printf("プレイヤーは、パーです。\n");
		break;
	}
	switch(c)
	{
	case 0:
		printf("コンピュータは、グーです。\n");
		break;
	case 1:
		printf("コンピュータは、チョキです。\n");
		break;
	case 2:
		printf("コンピュータは、パーです。\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3)
	{
	case 0:
		printf("\nあいこです。\n");
		break;
	case 1:
		printf("\nコンピュータの勝ちです。\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです。\n");
		break;
	}
}