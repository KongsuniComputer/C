#include <stdio.h>

int main()
{
    int flag, n, i;

    printf("2 �̻��� �ڿ����� �Է��ϼ��� : ");
    scanf("%d", &n);

    flag = 0;
    for (i=2; i<n; i++)
      {
          if (n % i == 0 )
            flag=1;
      }

      if(flag == 1)
        printf("%d �� �Ҽ��� �ƴմϴ�\n", n);
      else
        printf("%d �� �Ҽ� �Դϴ�\n", n);



    return 0;
}



// 2 3 5 7 11 13 17 19 23 .....
