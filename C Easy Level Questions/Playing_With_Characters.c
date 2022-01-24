#include <stdio.h>

int main()
{
	char c;
	char *str;
	char str_1[100];
	scanf("%c",&c);
	printf("%c\n",c);
	scanf("%s",&str);
	printf("%s\n",&str);
	scanf("\n");
	scanf("%[^\n]%*c",&str_1);
	printf("%s",&str_1);
}
