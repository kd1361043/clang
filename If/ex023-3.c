#include <stdio.h>
main()
{
	int n, s1, s2;
	printf("���Z�q�����:\n");
	scanf("%d", &n);
	printf("��̐��������:\n");
	scanf("%d %d", &s1, &s2);
	if (n == 1)
	{
		printf("%d\n", s1 + s2);
	}
	else
	{
		if (n == 2)
		{
			printf("%d\n", s1 - s2);
		}
		else
		{
			if (n == 3)
			{
				printf("%d\n", s1 * s2);
			}
			else
			{
				printf("%d\n", s1 / s2);
			}
		}
	}
}