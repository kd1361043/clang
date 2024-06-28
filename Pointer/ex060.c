#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, ch;
	int i = 0;
	p_data = data;
	printf("data[]=%s\n", p_data);
	printf("ŒŸ‰{•¶š‚ÍH");
	scanf("%c", &ch);

	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (ch == *(p_data + i)) {
			printf("%d ", i + 1);
		}
	}
	printf("‚Å‚·\n");
}