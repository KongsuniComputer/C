#include <stdio.h>

int main()
{	
	int a = 1;
	int sum = 0;

	while(a <=55)
	{
			if(a % 3 == 0) 
			{
				a=a+1;
				continue;
			}
			sum = sum + a;
			a=a+1;
			
	}
	printf("sum = %d\n",sum);   

	for(int b=1; b<=100  ; b++ )
	{
		printf("%d\t",b);
	}


	return 0;
}