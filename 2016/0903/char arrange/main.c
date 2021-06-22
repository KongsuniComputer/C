#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = {"hello"};
    char str2[] = {'h','e','l','l','o','\0'};
    int i;

    printf("%s\n", str1);

    for(i=0; i<=1; i++)
         printf("%c", str2[i]);

    return 0;
}


