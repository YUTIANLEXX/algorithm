#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int price = 0;
	int oldprice = 0;
	int i = 0;
	printf("请先设置商品的真实价格：");
	scanf("%d", &oldprice);
	system("cls");
	printf("请输入试猜的价格：");
	while (oldprice != price)
	{
		i++;
		printf("参与者：");
		scanf("%d", &price);
		printf("主持人：");
		if (price > oldprice)
		{
			printf("高了\n");
		}
		else if (price < oldprice)
		{
			printf("低了\n");
		}
		else
		{
			printf("恭喜你，答对了！\n\n你一共试猜了%d次。\n", i);
		}
	}
	getch();//实现程序运行结束暂不退出的效果
	return 0;
}