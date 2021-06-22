#include <stdio.h>


int main()
{
   int n = 10;
   int a, b = 1;
   int c;
   int i;
   int sum;

   sum = a + b;

   for(i=3;i<=n;i++)
   {
       c = a + b;
       sum+=c;

       a = b;
       b = c;

   }

   printf("10번의 피보나치 수열의 합은 %d 입니다.", sum);


    return 0;
}
