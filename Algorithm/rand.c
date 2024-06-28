#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int i, j, k = 0;
	srand(time(0));
	rand();
	i = rand() % 1000 + 1;
	printf("1`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do {
		printf("“–‚½‚è‚Ì”‚Í?->");
		scanf("%d", &j);
		if (i > j) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (i < j) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		k++;
	} while (i != j);
	printf("³‰ğ!%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½\n", k);
}