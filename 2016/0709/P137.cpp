#include <iostream>
/**
#include <stdio.h>

int main_c()
{
	int k, n=o;
	int sum = 0;
	printf("끝수를 입력하세요");
	scanf("%d", &n);
	for(k=1, k<=n; k==)
	{
		sum += k;
	 } 
	 
	 printf("1에서 %d까지의 합은 %d 입니다. \n", n, sum);
	 return 0;
}

**/
using namespace std;

int main()
{
	int n=0;
	cout << "끝수를 입력하세요 >>" ;
	cin >> n;
	if(n <= 0)
	{
		cout << "양수를 입력하세요!" << endl;
	}
	int k, sum=0;
	for (k=1; k<=n; k++)
	{
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은" << sum << "입니다";
	return 0; 
}


