#include <stdio.h>


int main()
{
  int n;

  printf("수를 입력하세요 : ");
  scanf("%d", &n);

  if(n % 3 ==0)
    printf("%d 는 3의 배수입니다.");
  else
    printf("%d 는 3의 배수가 아닙니다.");

    return 0;
}
