#include <stdio.h>
#include <string.h>
void convto(char *s, int n, int b)
{
	char bit[] = { "0123456789ABCDEF" };
	int len = 0;
	if (0 == n)
	{
		strcpy(s, "");
		return 0;
	}
	convto(s, n / b, b);
	len = strlen(s);
	s[len] = bit[n%b];
	s[len + 1] = '\0';
}
int main()
{
	char s[80];
	int i = 0;
	int base, old = 0;
	printf("请输入十进制数：");
	scanf("%d", &old);
	printf("请输入转换的进制：");
	scanf("%d", &base);
	convto(s, old, base);
	printf("%s\n", s);
	getchar();
	return 0;
}