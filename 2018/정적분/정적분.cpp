#include <stdio.h>
#include <math.h> 

/*					�м��� ����. ��� ����
 
int main()
{
	
	int s, ss; // if ���� 
	int a, b, c, d, e, f, g; // �� ��� 
	double aa, bb, cc, dd, ee, ff, gg; // �� ��� 
	
	int uk, dk; //���� �Ʒ���  
	int bujuk; //�������� �� ��  
	int jukk; // ������ �� ��  
	
	printf("�⺻�� ����� ������ ���� made by Kongsuni\n--------------------------------------------\n");
	
		printf("[ �� �� �� �� �� �� ]\n\n");
		printf("������̸� 0, 1�����̸� 1, 2�����̸� 2, 3�����̸� 3, 4�����̸� 4, 5�����̸� 5, ��Ҵ� 00 �� �����ּ���. \n�Է� : ");
		scanf("%d", &ss);
		printf("%d�� �����ϼ̽��ϴ�.\n\n--------------------------------------------\n", ss); 
		 if (ss == 0)
		 {
			printf("����� �� ���� ���, ���� ���� �Ʒ��� ���� ������� �Է� \n(ex, ��f(x) dx �̰� f(x)=4 �̸� 4 enter, ���� �� enter, �Ʒ��� �� enter) \n�Է� : ");
			scanf("%d %d %d", &a, &uk, &dk);
			jukk = (a*uk) - (a*dk); 
			printf("������ ���� % �Դϴ�.", jukk);
		 }
		 else if (ss == 1)
		 {
			printf("1���� �� ���� ���, ���� ���� �Ʒ��� ���� ������� �Է� \n(ex, ��f(x) dx �̰� f(x)=2x + 3 �̸� 2 enter, 3 enter, ���� �� enter, �Ʒ��� �� enter) \n�Է� : ");
			scanf("%d %d %d %d", &a, &b, &uk, &dk);
			aa = (1/2) * a; //2�� ��� 
			bb = b; //1�� ��� 
			jukk = (aa*uk*uk + bb*uk) - (aa*dk*dk + bb*dk);
			printf("������ ���� %d �Դϴ�.", jukk);
		 }
		
		
}
