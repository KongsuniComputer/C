#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**

    int data1[5];
    int data[0] = 10;
    int i;

    for(i=1; i<5; i++)
    {
        data1[i] = data[i-1]+ 10;
    }

    **/

    int i, j, cnt=1;
    int data[5][5];

    for(i=0;i<5;i++){
        if(i%2 == 0)
            for(j=0; j<5; j++)
            data[i][j] = cnt++;
        else
            for(j=4; j>=0; j--)
            data[i][j] = cnt++;
    }



    for(i=0;i<5;i++){
        for(j=0; j<5; j++)
           printf("%2d ", data[i][j]);
           printf("\n");
    }


    return 0;
}


