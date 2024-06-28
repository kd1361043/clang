#include<stdio.h>
main()
{
	char s[30];
	int i, k[30];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s",&s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•¡‡‰»ƒL[„",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}