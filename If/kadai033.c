#include<stdio.h>
main()
{
	char i;
	printf("�A���t�@�x�b�g? ");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z') {
		printf("���̕����́u�������v�ł�");
	}
	else {
		if (i >= 'A' && i <= 'Z') {
			printf("���̕����́u�啶���v�ł�");
		}
	}
}