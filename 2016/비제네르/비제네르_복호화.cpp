#include<stdio.h>
int main(void)
{
	char str[] = "WIYCAQPAKRCMGJPIF";
	char key[] = "LEMON";
	int i,j=0,a;
	for(i=0;i<sizeof(str)-1;i++)
	{
		a=str[i] - key[(j++) % 5];
		if(a<0) a+=26;
		printf("%c",a+'A');
	}
}
