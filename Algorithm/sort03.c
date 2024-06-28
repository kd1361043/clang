#include <stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;

	//ƒvƒƒOƒ‰ƒ€‚ğ‘‚­
	while (i < 5) {
		j = i - 1;
		while (j >= 0) {
			if (d[j + 1] >= d[j]) {
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
			j--;
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d\n",d[i]);
	}
}