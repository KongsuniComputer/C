#include <stdio.h>
#include <math.h> 

int main()
{
	
	int s, ss; // if 구역 
	int a, b, c, d, e, f, g; // 전 계수 
	int  aa, bb, cc, dd, ee, ff, gg; // 후 계수 
	
	int uk, dk; //위끝 아래끝  
	int bujuk; //부정적분 한 식  
	int jukk; // 정적분 한 값  
	
	printf("기본적 잡다한 정수형 계산기 made by Kongsuni\n--------------------------------------------\n");
	
		printf("[ 도 함 수 구 하 기 ]\n\n");
		printf("1차식이면 1, 2차식이면 2, 3차식이면 3, 4차식이면 4, 5차식이면 5, 취소는 0 을 눌러주세요. \n입력 : ");
		scanf("%d", &ss);
		printf("%d를 선택하셨습니다.\n\n--------------------------------------------\n", ss); 
		 if (ss == 1)
		 {
			printf("1차식 각 항의 계수 입력 \n(ex, f(x)=3x + 2 이면 3 enter, 2 enter) \n입력 : ");
			scanf("%d %d", &a, &b);
			printf("도함수는 f'(x)=%d 입니다.", a);
		 }
		  else if (ss == 2)
		 {
			printf("2차식 각 항의 계수 입력 \n(ex, f(x)=4x^2 + 5x + 2 이면 4 enter, 5 enter, 2 enter) \n입력 : ");
			scanf("%d %d %d", &a, &b, &c);
			aa = a * 2;
			bb = b;
			printf("도함수는 f'(x)=%dx + %d 입니다.", aa, bb);
		 }
		  else if (ss == 3)
		 {
			printf("3차식 각 항의 계수 입력 \n(ex, f(x)=x^3 - 7x^2 + 2x + 3 이면 1 enter, -7 enter, 2 enter, 3 enter) \n입력 : ");
			scanf("%d %d %d %d", &a, &b, &c, &d);
			aa = a * 3;
			bb = b * 2;
			cc = c;
			printf("도함수는 f'(x)=%dx^2 + %dx + %d 입니다.", aa, bb, cc);
		 }
		  else if (ss == 4)
		 {
			printf("4차식 각 항의 계수 입력 \n(ex, f(x)= 36x^4 + 6x^2 + 2x + 7 이면 36 enter, 0 enter, 6 enter, 2 enter, 7 enter) \n입력 : ");
			scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
			aa = a * 4;
			bb = b * 3;
			cc = c * 2;
			dd = d;
			printf("도함수는 f'(x)=%dx^3 + %dx^2 + %dx + %d 입니다.", aa, bb, cc, dd);
		 }
		  else if (ss == 5)
		 {
			printf("5차식 각 항의 계수 입력 \n(ex, f(x)= 4x^5 + 9x^4 + 2x^3 + x^2 + 4x + 10 이면 4 enter, 9 enter, 2 enter, 1 enter, 4 enter, 10 enter) \n입력 : ");
			scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
			aa = a * 5;
			bb = b * 4;
			cc = c * 3;
			dd = d * 2;
			ff = f;
			printf("도함수는 f'(x)=%dx^4 + %dx^3 + %dx^2 + %dx + %d 입니다.", aa, bb, cc, dd, ff);
		 }
		  else if (ss == 0)
		 {
			printf("\n종료 합니다.\n");
		 } 
		 
 		 
		
	
	
	
	return 0; 
}
