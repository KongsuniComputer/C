#include <stdio.h>

//int sum(int x, int y);
double everage( int x, int y);

int main()
{

	int a, b;
	
	scanf("%d %d", &a, &b);
	//printf("합계는 : %d \n", sum(a,b));
	printf("평균은 : %lf \n", everage(a,b));

	return 0;
}

double everage( int x, int y )
{ 
	double z=0;

	for(int i=x ; i<=y ; i++)
		z = z + i ;
	z = z / (y-x+1);
	return z;
}