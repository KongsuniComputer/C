#include <stdio.h>
#include <math.h> 

/*					분수꼴 못받. 잠시 보류
 
int main()
{
	
	int s, ss; // if 구역 
	int a, b, c, d, e, f, g; // 전 계수 
	double aa, bb, cc, dd, ee, ff, gg; // 후 계수 
	
	int uk, dk; //위끝 아래끝  
	int bujuk; //부정적분 한 식  
	int jukk; // 정적분 한 값  
	
	printf("기본적 잡다한 정수형 계산기 made by Kongsuni\n--------------------------------------------\n");
	
		printf("[ 정 적 분 구 하 기 ]\n\n");
		printf("상수식이면 0, 1차식이면 1, 2차식이면 2, 3차식이면 3, 4차식이면 4, 5차식이면 5, 취소는 00 을 눌러주세요. \n입력 : ");
		scanf("%d", &ss);
		printf("%d를 선택하셨습니다.\n\n--------------------------------------------\n", ss); 
		 if (ss == 0)
		 {
			printf("상수식 각 항의 계수, 윗끝 값과 아랫끝 값을 순서대로 입력 \n(ex, ∫f(x) dx 이고 f(x)=4 이면 4 enter, 윗끝 값 enter, 아랫끝 값 enter) \n입력 : ");
			scanf("%d %d %d", &a, &uk, &dk);
			jukk = (a*uk) - (a*dk); 
			printf("정적분 값은 % 입니다.", jukk);
		 }
		 else if (ss == 1)
		 {
			printf("1차식 각 항의 계수, 윗끝 값과 아랫끝 값을 순서대로 입력 \n(ex, ∫f(x) dx 이고 f(x)=2x + 3 이면 2 enter, 3 enter, 윗끝 값 enter, 아랫끝 값 enter) \n입력 : ");
			scanf("%d %d %d %d", &a, &b, &uk, &dk);
			aa = (1/2) * a; //2차 계수 
			bb = b; //1차 계수 
			jukk = (aa*uk*uk + bb*uk) - (aa*dk*dk + bb*dk);
			printf("정적분 값은 %d 입니다.", jukk);
		 }
		
		
}
