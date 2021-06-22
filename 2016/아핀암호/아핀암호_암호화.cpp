#include<stdio.h>
/* ½Ä */
int m=3;
int n=4;

int f(int x)
{
	return m*x+n;
}
int main()
{
	char str[]="OEKISOEK";

	int i,a;
	for(i=0;i<sizeof(str)-1;i++)
	{
		a = f(str[i]-65) % 26;
		if(a < 0) a+=26;
		printf("%c",a+'A');
	}
}
