// 100���� ���� ���� �޾Ƽ� ���� �ڸ�, ���� �ڸ� �и��ϴ� Program

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int input, sip, ill; 
	/* ���� 100���� ���� ����, �и��� ���� �ڸ��� ����, 
	�и��� ���� �ڸ��� ���� ���� �� ���� ���� */

	printf("100���� ���� ������ �Է��Ͻÿ� : "); // User���� 100���� ���� ���� �Է� �ȳ� msg ���
	scanf_s("%d", &input); // User���� 100���� ���� ������ �Է� �޾Ƽ� input�� ����

	sip = input / 10; // �Է� ���� input�� 10���� ���� ���� sip�� ����
	ill = input % 10; // �Է� ���� input�� 10���� ������ �� ������ ���� ill�� ����

	printf("���� �ڸ� : %d\n", sip); // ���� �ڸ� sip�� ���
	printf("���� �ڸ� : %d\n", ill); // ���� �ڸ� ill�� ���

	return 0; // main function �� 0���� ��ȯ
}