#include <stdio.h>

int main()
{
    int flag, n, i;

    printf("2 이상의 자연수를 입력하세요 : ");
    scanf("%d", &n);

    flag = 0;
    for (i=2; i<n; i++)
      {
          if (n % i == 0 )
            flag=1;
      }

      if(flag == 1)
        printf("%d 는 소수가 아닙니다\n", n);
      else
        printf("%d 는 소수 입니다\n", n);



    return 0;
}



// 2 3 5 7 11 13 17 19 23 .....
