#include<stdio.h>
main()
{
	char moji1[100], moji2[100], w[100];
	int i;

	//����
	printf("������1����� : ");
	scanf("%s", &moji1[0]);
	printf("������2�����  : ");
	scanf("%s", &moji2[0]);
	printf("moji1= %s \t moji2=%s\n", &moji1[0], &moji2[0]);
	printf("����ւ����\n");
	//w�z���moji1�z����R�s�[
	for (i = 0; moji1[i] != '\n'; i++)
	{
		w[i] = moji1[i];
	}
	//\0������
	w[i] = '\n';

	//moji1��moji2���R�s�[
	for (i = 0; moji2[i] != '\n'; i++)
	{
		moji2[i] = moji1[i];
	}
	//\0������
	moji1[i] = '\n';

	//moji2��w���R�s�[
	for (i = 0; w[i] != '\n'; i++)
	{
		w[i] = moji2[i];
	}
	//\0������
	moji2[i] = '\n';
	printf("����ւ����\n");
	printf("moji1= %s \t moji2= %s\n", &moji1[0],&moji2[0]);
}