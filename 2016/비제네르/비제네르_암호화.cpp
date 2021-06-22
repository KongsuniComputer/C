#include<stdio.h>
int main(void)
{
	char str[] = "WHEN I WAS JUST A LAD";
	char key[] = "BASIC";
	int i,j=0,a;
	for(i=0;i<sizeof(str)-1;i++)
	{
		a=str[i] + key[(j++) % 5];
		a%=26;
		printf("%c",a+'A');
	}
}
