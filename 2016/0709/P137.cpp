#include <iostream>
/**
#include <stdio.h>

int main_c()
{
	int k, n=o;
	int sum = 0;
	printf("������ �Է��ϼ���");
	scanf("%d", &n);
	for(k=1, k<=n; k==)
	{
		sum += k;
	 } 
	 
	 printf("1���� %d������ ���� %d �Դϴ�. \n", n, sum);
	 return 0;
}

**/
using namespace std;

int main()
{
	int n=0;
	cout << "������ �Է��ϼ��� >>" ;
	cin >> n;
	if(n <= 0)
	{
		cout << "����� �Է��ϼ���!" << endl;
	}
	int k, sum=0;
	for (k=1; k<=n; k++)
	{
		sum += k;
	}
	cout << "1���� " << n << "������ ����" << sum << "�Դϴ�";
	return 0; 
}


