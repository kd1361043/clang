#include<stdio.h>
main()
{
	float f;

	printf("実数を入れて：");
	scanf("%f", &f);

	printf("２倍にすると %.2f\n", f * 2);
	printf("３倍にすると %.2f\n", f * 3);
}