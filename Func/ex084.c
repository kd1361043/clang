#include<stdio.h>
void Str_Revarse(char* str1, char* str2);
main()
{
	char str1[256], str2[256];

	printf("������H: ");
	gets(str1);
	Str_Revarse(str1, str2);
	printf("str1: %s\nstr2: %s\n", str1, str2);
}

//��������t���ɂ���
//�߂�l�@�F�@�Ȃ�
//�����@�@�F�@char*s1 �E�R�s�[��
//�@�@�@�@�@�@char*s2 �E�i�t���ɐݒ�j
void Str_Revarse(char* str1, char* str2)
{
	int i, j;
	for (i = 0; *(str1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++)
	{
		*(str2 + j) = *(str1 + i);
	}
	*(str2 + j) = '\0';
}
