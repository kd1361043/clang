#include<stdio.h>
void Str_Cat(char* s1, char* s2);
main()
{
	char a[256], b[256];
	printf("”z—ñ a: ");
	gets(a);
	printf("”z—ñ b: ");
	gets(b);
	Str_Cat(a, b);
	printf("”z—ñ a: %s\n",a);
}

void Str_Cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

	/*for (j = 0; *(s2 + j) != '\0'; i++, j++)
	{
		*(s1 + i) = *(s2 + j);
	}*/
}