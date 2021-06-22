#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;

    for(j=5; j>0; j--)
    {
        for(i=1; i<=j; i++)
        printf("%d", i);
        printf("\n");
    }


    return 0;
}
