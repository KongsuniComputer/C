// int -> char Converter Program

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int ascii; // User���� ���� ASCII Code ���� ���� ���� �� ���� ����

	printf("�ƽ�Ű �ڵ� ���� �Է��Ͻÿ� : "); // User���� ASCII Code �� �Է� �ȳ� �޽��� ���
	scanf_s("%d", &ascii); // User���� ASCII Code �������� �Է� �޾Ƽ� ascii�� ����

	printf("���� : %c �Դϴ�.", ascii); // ascii ���� ����� ������ char ������ �� ��ȯ�Ͽ� ���

	return 0; // main function�� 0���� ��ȯ
}