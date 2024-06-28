#include<stdio.h>
main()
{
	char s[30];
	int i;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", s);

	i = 0;

	for (i = 0; s[i] != '\0';i++) { s[i] = s[i] + 1; }

	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);
}