#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int luck,i;

	srand(time(0));
	rand();
	luck = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; i < luck; i++)
	{
		printf("�� ");
	}
	printf("�ł��B\n");
}