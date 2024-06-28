#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%s", &i);
	switch (i)
	{
	case 'a':
		printf("America\nAustralia");
		break;
	case'e':
		printf("England");
		break;
	case'f':
		printf("Feance");
		break;
	case'j':
		printf("Japan");
		break;
	}
}