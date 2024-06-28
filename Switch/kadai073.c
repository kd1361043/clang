#include<stdio.h>
main()
{
	int i; 
    char j;
	unsigned int k;
	printf("10進数の整数？");
	scanf("%d\n", &i);
	printf("アルファベット(o or h or d)？");
	scanf("%c", &j);

	k = i;

	switch (j)
	{
	case'o':
		printf("%o", k);
		break;
	case'O':
		printf("%o", k);
		break;
	case'h':
		printf("%h", k);
		break;
	case'H':
		printf("%h", k);
		break;
	case'd':
		printf("%d", i);
		break;
	case'D':
		printf("%d", i);
	}
}