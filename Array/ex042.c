#include<stdio.h>
main()
{
	char date[] = "Apple";
	int i;

	printf("1�������\��\n");
	for (i = 0; date[i] != '\0'; i++)
	{
		printf("%c\n", date[i]);
	}

	printf("\n�������\��\n");
	//printf("%s\n", &date[0]);//%s�̎��̓A�h���X���w��
	printf("%s\n", date);//�z�񖼂��������Ɛ擪�A�h���X��\��
}