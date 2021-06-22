#include<stdio.h>
/* ½Ä */
int m=5;
int n=3;

int Get_x(int key)
{
	int x;
	for(x=1;x<26;x++)
	{
		if(( (26*x+1) % key) == 0)
		{
  			return (26*x+1) / key;
		}
	}
	return -1; 
}
int f(int x)
{
	return m*(x-n);
}
int main()
{
	char str[]="RJVQSXKJMT";
	m = Get_x(m);
	int i,a;
	for(i=0;i<sizeof(str)-1;i++)
	{
		a = f(str[i]-65) % 26;
		if(a < 0) a+=26;
		
		printf("%c",a+'A');
	}
}
