#include <stdio.h>
main()
{
	int month;
	printf("Œ‚ğ“ü—Í:\n");
	scanf("%d", &month);
	
		if (month == 2)
		{
			printf("ÅI“ú‚Í 28 “ú‚Å‚·\n");
		}
		else
		{
			if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				printf("ÅI“ú‚Í 30 “ú‚Å‚·\n");
			}
			else {
				printf("ÅI“ú‚Í 31 “ú‚Å‚·‚");
			}
		}
}