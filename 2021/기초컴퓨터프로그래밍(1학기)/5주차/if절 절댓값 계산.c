#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	double x, answer; // �Ǽ��� x���� ����� �Լ����� ������ ���� ����

	printf("x�� ���� �Է��Ͻÿ� : "); // ����ڿ��� x�� �Է��ض�� �޽��� ���
	scanf_s("%lf", &x); // �Ǽ����� �Է¹ް� x���� ���� 

	if (x > 0) { // ���࿡ x�� 0���� ũ�ٸ�
		answer = 7 * x + 2; // 7x + 2�� x�� �־� ����� ���� answer�� ����
		printf("f(x)�� ���� %lf", answer); // answer�� ���
	}
	else if (x <= 0) { // ���࿡ x�� 0���� �۰ų� ���ٸ�
		answer = x*x - 9*x + 2; // x^2 - 9x + 2�� x�� �־� ����� ���� answer�� ����
		printf("f(x)�� ���� %lf", answer); // answer�� ���
	}
		

	return 0; // main function �� 0���� ��ȯ
}