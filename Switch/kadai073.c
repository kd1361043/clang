#include<stdio.h>
main()
{
	int i; 
    char j;
	unsigned int k;
	printf("10�i���̐����H");
	scanf("%d\n", &i);
	printf("�A���t�@�x�b�g(o or h or d)�H");
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