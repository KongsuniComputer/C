#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[10];
    int i, j ,temp;

    printf("10의 데이타를 입력하세요\n");
    for(i=0; i<10; i++){
        scanf("%d", &M[i]);
    }

    for(i=0; i<9; i++) {
        for(j=i+1; j<10; j++) {
            if (M[i]>=M[j]) {
                temp=M[i];
                M[i]=M[j];
                M[j]=temp;

            }
        }
    }
        for(i=0; i<10; i++) {
            printf("%d ", M[i]);
        }
        printf("\n");


    return 0;
}
