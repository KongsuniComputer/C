#include <stdio.h>

int main()
{
	//FILE *fout = fopen("d:\\test.txt","w");
	//fputc('A', fout);
	//fputc('B', fout);

	char ch;
	int a[5];
	int i=0;
	FILE *fin = fopen("d:\\test.txt","r");

	while(true)
	{
		ch = fscanf(fin, "%d", &a[i]);
		if(ch == EOF)
			break;
		i++;
	}

	int sum = 0;
	for(i=0; i<5; i++)
		sum += a[i];
	
	printf("%lf", sum / 5.0);
	fclose(fin);

	return 0;
}