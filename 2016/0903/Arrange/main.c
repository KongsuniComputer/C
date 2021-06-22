#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data[10];
    int i;
    int temp;

    for(i=0; i<10; i++)
    {
        scanf("%d", &data[i]);
    }

    temp = data[0];
    data[0] = data[9];
    data[9] = temp;
    for(i=0; i<10; i++)
    {
        printf("%d", data[i]);
    }
    return 0;

}
