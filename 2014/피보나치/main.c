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

   printf("10���� �Ǻ���ġ ������ ���� %d �Դϴ�.", sum);


    return 0;
}
