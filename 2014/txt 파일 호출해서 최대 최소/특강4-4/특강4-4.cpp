#include <stdio.h>

int main()
{
	int a[20];	

	FILE * fout = fopen("d:\\score.txt", "r");

	int i=0, ch;
	while(1)
	{
		ch=fscanf(fout, "%d", &a[i]);
		if(ch==EOF)
			break;
		i++;
	}
	 
	int max=-9999, min=9999, sum=0;
	for(int j=0; j<i; j++)
	{	
		if(max <a[j]) max = a[j];
		if(min >a[j]) min = a[j];
		sum += a[j];
	}

	fprintf(stdout, "�ִ밪�� %d\n", max);
	fprintf(stdout, "�ּҰ��� %d\n", min);
	fprintf(stdout, "�� �հ�� %d\n", sum);
	fprintf(stdout, "�ִ밪�� %lf\n", (double)sum/i);

	
	return 0;
}