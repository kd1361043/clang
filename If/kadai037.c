#include<stdio.h>
main()
{
	int i;
	printf("0 ���� 100 �܂ł̐���? ");
	scanf("%d", &i);
	if (i >= 90) { printf("���̒l�̔��茋�ʂ́u5�v�ł�"); }
	else {
		if (i >= 80 && i < 90) { printf("���̒l�̔��茋�ʂ́u4�v�ł�"); }
		else {
			if (i >= 50 && i < 80) { printf("���̒l�̔��茋�ʂ́u3�v�ł�"); }
			else {
				if (i >= 30 && i < 50) { printf("���̒l�̔��茋�ʂ́u2�v�ł�"); }
				else { printf("���̒l�̔��茋�ʂ́u1�v�ł�"); }
			}
		}
	}
}