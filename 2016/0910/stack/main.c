#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stack[10];
    int top=-1;
    int n;
    while(1){
        scanf("%d", &n);
        if(n>0){
            top++;
            stack[top]=n;
        }
        else if(n<0){
            printf("%d\n", stack[top]);
            top--;
    }
    else
        break;
}

     return 0;
}
