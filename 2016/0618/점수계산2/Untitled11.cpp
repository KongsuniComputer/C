#include<stdio.h>
int main(void)
{
    FILE *fin;
    FILE *fout;
    
    fin = fopen("INPUT.TXT","r");
    fout = fopen("OUTPUT.TXT","w"); 
    
    int i, n, sum=0;
    int c[100], p[100];

    fscanf(fin,"%d",&n);
    for(i=0;i<n;i++)
    {
     fscanf(fin,"%d",&c[i]);
     if(c[i] == 1)
     {
             if(i==0)
                     p[i] = 1;
             else
                     p[i] = p[i-1]+1;
     }
     else
         p[i] = 0;
     sum += p[i];
    }
    fprintf(fout,"%d",sum);
    
    return 0;
    
    
}
