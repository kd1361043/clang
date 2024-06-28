#include<stdio.h>
main()
{
	double i, j;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%.2lf%.2lf", &i, &j);
	printf("* * * %.2lf ‚Æ %.2lf ‚Ìl‘¥‰‰Z * * *",i,j);
	printf("˜a = %lf · = %lf Ï = %lf ¤ = %lf", i + j, i - j, i * j, i / j);
}