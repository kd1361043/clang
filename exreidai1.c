#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	
	int kazu;

	srand(time(0));
	rand();
	kazu = rand();
	printf("発生した乱数は%dです\n", kazu);
}