#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	 int a[100];
	srand((unsigned)time(NULL));

	for(int i=0; i<100; i++)
		a[i] = rand()%99 + 1;

	for(int j=0; j<100; j++)
		printf("%d\t", a[j]);

	int max=-99999, min=999999;
	for(int i=0; i<100; i++)
	{
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
	printf("�ִ��� %d, �ּڰ��� %d\n\n", max,min);

	int cnt[100]={0,};
	for(int i=0; i<100; i++)
		cnt[a[i]]++;

	printf("�� ���ڰ� ���� ���� \n");

	for(int j=0; j<100; j++)
		printf("%d=%d\t", j, cnt[j]);

	return 0;
}
