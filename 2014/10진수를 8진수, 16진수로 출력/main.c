#include <stdio.h>

    int main()
    {
      /*  printf("10진수 상수 12 : %d\n", 12);
        printf("8진수 상수 014 : %d\n", 014);
        printf("16진수 상수 0xc : %d\n", 0xc);
        printf("10진수 12를 8진수로 출력 : %#o\n", 12);
        printf("10진수 12를 16진수로 출력 : %#x\n", 12);  */

        int val;

        printf("정수값을 입력하세요　");
        scanf("%o",&val);
        printf("입력된값을 10진수로 출력하면 %d입니다.\n",val);



    return 0;
}
