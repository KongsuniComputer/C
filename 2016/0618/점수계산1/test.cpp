#include <stdio.h>
#include <stdlib.h>

int main(void)

	FILE *fp=fopen("INPUT.TXT","r");
	FILE *fp2=fopen("OUTPUT.TXT","w");
	int i,n,sum=0, cnt=0;
	int *arr;
	fscanf(fp,"%d",&n);
	arr = (int *) malloc (n * sizeof(int));
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i] == 1)
		{
			cnt++;
			sum += cnt;
		}
		else if(arr[i] == 0)
	{
	cnt = 0;
}

}

fprintf(fp2,"%d\n",sum);
return 0;
}
