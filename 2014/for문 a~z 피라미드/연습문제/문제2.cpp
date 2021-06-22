#include <stdio.h>

int main()
{ 

	for( int j = 'A';  j <= 'Z';  j++)
	{
		for(int k=1;  k<='Z'-j ;  k++)
			{
				printf(" ");
			}	
		
		for(int i='A';  i<=j ;  i++)
			{
				printf("%c",i);
			}
			printf("\n");
	}


/*	int a, sum = 0; 
	int i = 0 ;

	scanf("%d", &a);
	
	while(a > 0)
	{
		sum = sum * 10 + 1 ;
		a = a - 10;
	}

	printf("자리수의 합계는 %d\n", sum);  */

		return 0;
}