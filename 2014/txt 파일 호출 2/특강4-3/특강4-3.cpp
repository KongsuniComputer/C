#include <stdio.h>

int main()
{
	int a;	

	FILE * fout = fopen("d://score.txt", "w");

	while(1)
	{	
	
		fscanf(stdin, "%d", &a);

	if(a<=0)
		break;
		fprintf(fout, "%d\n", a);
	}
	


	fclose(fout);

	return 0;
}