#include<stdio.h>

#define B_SIZE 4 //�z��b�̃T�C�Y
main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 };
	float b[] = { 11.1, 22.2, 33.3, 44.4 };
	int* p_a, a_sum, i;
	float* p_b, b_sum;
	// sizeof�̗��K
	for (a_sum = 0, p_a = a, i = 0; i < sizeof a / sizeof(int); i++, p_a++) {
		a_sum += *p_a;
	}
	printf("�z��a ���v = %7d \t ���� = %6.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int)));
	// #define�̗��K
	for (b_sum = 0, p_b = b, i = 0; i < B_SIZE; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("�z��b ���v = %7.3f \t ���� = %6.3f\n", b_sum, b_sum / B_SIZE);
}