// ȭ���µ� -> �����µ� ��ȯ Program

#include <stdio.h>	//  Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function 

	double C, F; // ���� �µ� ��, ȭ�� �µ��� �Ǽ� ���� ������ ���� ����

	printf("ȭ������ �Է��Ͻÿ� : "); // �Է� �ȳ� �޽��� ���
	scanf_s("%lf", &F);				// ȭ�� �µ� �Ǽ��� �޾Ƽ� C������

	C = 5.0 / 9.0 * (F - 32.0); // ȭ���µ� -> �����µ� ��ȯ ���

	printf("�������� %lf���Դϴ�.", C); // ����� ȭ���µ� C ���

	return 0; // main function �� 0���� ��ȯ
}