#include <stdio.h>

int main()
{
	int j, i[5];
	int sign;
	int result;
	int count = 0;
	int num[6];
	float left, right;
	char oper[5] = { ' ', '+', '-', '*', '/' };
	printf("������5������");
	for (j = i; j <= 5; j++)
	{
		scanf("%d", &num[j]);
	}
	printf("����������");
	scanf("%d", &result);
	for (i[1] = 1; i[1] <= 4; i[1]++)           //ѭ��4���������1��ʾ+��2��ʾ-��3��ʾ*��4��ʾ/
	{
		if ((i[1] < 4) || (num[2] != 0))        //���������/����ڶ�������������Ϊ0
		{
			for (i[2] = 1; i[2] <= 4; i[2]++)
			{
				if ((i[2] < 4) || (num[3] != 0))
				{
					for (i[3] = 1; i[3] <= 4; i[3]++)
					{
						if ((i[3] < 4) || (num[4] != 0))
						{
							for (i[4] = 1; i[4] <= 4; i[4]++)
							{
								if ((i[4] < 4) || (num[5] != 0))
								{
									left = 0;
									right = num[1];
									sign = 1;
									for (j = 1; j <= 4; j++)
									{
										switch (oper[i[j]])
										{
										case '+':
											left = left + sign*right;
											sign = 1;
											right = num[j + 1];
											break;
										case '-':
											left = left + sign*right;
											sign = -1;
											right = num[j + 1];
											break;   //ͨ��f=-1ʵ�ּ���
										case '*':
											right = right*num[j + 1];
											break;   //ʵ�ֳ˷�
										case '/':
											right = right / num[j + 1];
											break;   //ʵ�ֳ���
										}
									}
									if (left + sign*right == result)
									{
										count++;
										printf("%3d: ", count);
										for (j = 1; j <= 4; j++)
											printf("%d%c", num[j], oper[i[j]]);
										printf("%d=%d\n", num[5], result);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (count == 0)
	{
		printf("û�з���Ҫ��ķ�����\n");
	}
	getchar();
	return 0;
}