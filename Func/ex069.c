// ex069.c
#include <stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;

	//入力
	printf("整数 : ");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		//計算
		sum += data;
		cnt++;

		//入力
		printf("整数 : ");
		ret = scanf("%d", &data);
	}
	//合計と平均表示
	printf("合計 = %d  平均 = %.2f\n", sum, (float)sum / cnt);
}