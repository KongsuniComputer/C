#include <stdio.h>
#include <math.h> 

int main()
{
	
	int s, ss; // if ���� 
	int a, b, c, d, e, f, g; // �� ��� 
	int  aa, bb, cc, dd, ee, ff, gg; // �� ��� 
	
	int uk, dk; //���� �Ʒ���  
	int bujuk; //�������� �� ��  
	int jukk; // ������ �� ��  
	
	printf("�⺻�� ����� ������ ���� made by Kongsuni\n--------------------------------------------\n");
	
		printf("[ �� �� �� �� �� �� ]\n\n");
		printf("1�����̸� 1, 2�����̸� 2, 3�����̸� 3, 4�����̸� 4, 5�����̸� 5, ��Ҵ� 0 �� �����ּ���. \n�Է� : ");
		scanf("%d", &ss);
		printf("%d�� �����ϼ̽��ϴ�.\n\n--------------------------------------------\n", ss); 
		 if (ss == 1)
		 {
			printf("1���� �� ���� ��� �Է� \n(ex, f(x)=3x + 2 �̸� 3 enter, 2 enter) \n�Է� : ");
			scanf("%d %d", &a, &b);
			printf("���Լ��� f'(x)=%d �Դϴ�.", a);
		 }
		  else if (ss == 2)
		 {
			printf("2���� �� ���� ��� �Է� \n(ex, f(x)=4x^2 + 5x + 2 �̸� 4 enter, 5 enter, 2 enter) \n�Է� : ");
			scanf("%d %d %d", &a, &b, &c);
			aa = a * 2;
			bb = b;
			printf("���Լ��� f'(x)=%dx + %d �Դϴ�.", aa, bb);
		 }
		  else if (ss == 3)
		 {
			printf("3���� �� ���� ��� �Է� \n(ex, f(x)=x^3 - 7x^2 + 2x + 3 �̸� 1 enter, -7 enter, 2 enter, 3 enter) \n�Է� : ");
			scanf("%d %d %d %d", &a, &b, &c, &d);
			aa = a * 3;
			bb = b * 2;
			cc = c;
			printf("���Լ��� f'(x)=%dx^2 + %dx + %d �Դϴ�.", aa, bb, cc);
		 }
		  else if (ss == 4)
		 {
			printf("4���� �� ���� ��� �Է� \n(ex, f(x)= 36x^4 + 6x^2 + 2x + 7 �̸� 36 enter, 0 enter, 6 enter, 2 enter, 7 enter) \n�Է� : ");
			scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
			aa = a * 4;
			bb = b * 3;
			cc = c * 2;
			dd = d;
			printf("���Լ��� f'(x)=%dx^3 + %dx^2 + %dx + %d �Դϴ�.", aa, bb, cc, dd);
		 }
		  else if (ss == 5)
		 {
			printf("5���� �� ���� ��� �Է� \n(ex, f(x)= 4x^5 + 9x^4 + 2x^3 + x^2 + 4x + 10 �̸� 4 enter, 9 enter, 2 enter, 1 enter, 4 enter, 10 enter) \n�Է� : ");
			scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
			aa = a * 5;
			bb = b * 4;
			cc = c * 3;
			dd = d * 2;
			ff = f;
			printf("���Լ��� f'(x)=%dx^4 + %dx^3 + %dx^2 + %dx + %d �Դϴ�.", aa, bb, cc, dd, ff);
		 }
		  else if (ss == 0)
		 {
			printf("\n���� �մϴ�.\n");
		 } 
		 
 		 
		
	
	
	
	return 0; 
}
