#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int price = 0;
	int oldprice = 0;
	int i = 0;
	printf("����������Ʒ����ʵ�۸�");
	scanf("%d", &oldprice);
	system("cls");
	printf("�������Բµļ۸�");
	while (oldprice != price)
	{
		i++;
		printf("�����ߣ�");
		scanf("%d", &price);
		printf("�����ˣ�");
		if (price > oldprice)
		{
			printf("����\n");
		}
		else if (price < oldprice)
		{
			printf("����\n");
		}
		else
		{
			printf("��ϲ�㣬����ˣ�\n\n��һ���Բ���%d�Ρ�\n", i);
		}
	}
	getch();//ʵ�ֳ������н����ݲ��˳���Ч��
	return 0;
}