#include<stdio.h>
void display1(int n1);/*�v���g�^�C�v�錾�n��*/
void display2(int* n2);/*�v���g�^�C�v�錾�A�h���X�n��*/

main()
{
	int a, b;
	printf("���la ?: ");
	scanf("%d", &a);
	display1(a);                /*�֐�display�̌Ăяo��*/
	printf("a = %d\n\n", a);

	printf("���lb ?: ");
	scanf("%d", &b);
	display2(&b);               /*�֐�display�̌Ăяo��*/
	printf("b = %d\n\n", b);
}

/*�֐�sisplay1�̋L�q*/
void display1(int n)
{
	printf("���la�́A%d�ł��B\n",n);
	n += 10;
	return;
}

/*�֐�display2��*/
void display2(int *n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}