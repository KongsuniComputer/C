// ����ڰ� �Է��� ������ ��� ����� ���غ���

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int input, divisor; // ����ڿ��� �Է¹��� ������, for ���ǹ��� ���� ������ ���� ����

	printf("������ �Է��ϼ��� : "); // ����ڿ��� ���� �Է��ض�� �޽��� ���
	scanf_s("%d", &input); // �Է¹��� ������ input�� ����

	for (divisor = 1; divisor <= input; divisor++) { //divisor�� 1���� �Է¹��� �������� �ݺ��� �����ǵ�, divisor�� 1�� ������ ��.
		if (input % divisor == 0) { // ���࿡, �Է¹��� ������ �� �Ͼ� ���� 1�� �����ϰ� �ִ� divisor�� ���������� �������� 0 �� �Ǹ�
			printf("%d ", divisor); // �׶��� �� divisor�� ����̹Ƿ� �������.
		}
	}

	return 0; // main function �� 0���� ��ȯ
}