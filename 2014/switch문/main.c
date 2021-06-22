#include <stdio.h>

int main()
{
    int A;

    switch( A / 10)
    {
        case 10:
        case 9 : printf("A학점"); break;
        case 8 : printf("B학점"); break;
        case 7 : printf("C학점"); break;
        case 6 : printf("D학점"); break;
        default : printf("F학점");

    }

    return 0;
}
