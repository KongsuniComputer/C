#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[50];
    int n, i;

    scanf("%d", &n);

    data[0] = 1;
    data[1] = 1;

    if(n>1)
    {
        for(i=2;i<=n;i++)
        {
            data[i] = data[i-1] + data[i-2];
        }
    }

    printf("%d", data[n]);

    return 0;
}
