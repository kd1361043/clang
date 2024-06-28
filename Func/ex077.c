#include<stdio.h>
void size(int d1, int d2, int d3, int* d4, int* d5);

main()
{
	int d1, d2, d3, d4, d5;
	
	printf("®”‚ð3‚Â“ü—Í: ");
	scanf("%d%d%d,", &d1, &d2, &d3);
	size(d1, d2, d3, &d4, &d5);
	printf("Å‘å’l = %d  Å¬’l = %d", d4, d5);
}

void size(int d1, int d2, int d3, int* d4, int* d5)
{
	if (d1 > d2 && d2 > d3)
	{
		*d4 = d1;
		*d5 = d3;
	}
	else
	{
		if (d1 > d3 && d3 > d2)
		{
			*d4 = d1;
			*d5 = d2;
		}
	}
	if (d2 > d1 && d1 > d3)
	{
		*d4 = d2;
		*d5 = d3;
	}
	else
	{
		if (d2 > d3 && d3 > d1)
		{
			*d4 = d2;
			*d5 = d3;
		}
	}
	if (d3 > d1 && d1 > d2)
	{
		*d4 = d3;
		*d5 = d2;
	}
	else
	{
		if (d3 > d2 && d2 > d1)
		{
			*d4 = d3;
			*d5 = d1;
		}
	}
}