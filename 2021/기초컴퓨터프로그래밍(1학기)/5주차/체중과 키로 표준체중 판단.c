#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	double weight, height; // ������� ü�߿� Ű�� ���� �Ǽ������� ������ ���� ����
	double stdWeight; // ����� ǥ�� ü���� �Ǽ��� ������ ���� ����

	printf("ü�߰� Ű�� �Է��ϼ��� : "); // ����ڿ��� ü�߰� Ű�� �Է��ض�� �޽��� ���
	scanf_s("%lf %lf", &weight, &height); // ü�߰� Ű�� �Ǽ��� ���� ������ �ѹ����� �Է�

	stdWeight = (height - 100) * 0.9; // �Է¹��� ���� �������� ����� ǥ��ü�� �Ǽ����� stdWeight�� ���� 

	if (stdWeight == weight) // ���࿡ �Է¹��� ü�߰� ����� ǥ��ü�߰� ���ٸ�
		printf("ǥ���� ü���Դϴ�"); // ǥ�� ü���̶�� ���
	else if (stdWeight > weight) // ���࿡ �Է¹��� ü���� ����� ǥ��ü�ߺ��� �۴ٸ�
		printf("��ü�� �Դϴ�."); // ��ü���̶�� ���
	else if (stdWeight < weight) // ���࿡ �Է¹��� ü���� ����� ǥ��ü�ߺ��� ũ�ٸ�
		printf("��ü�� �Դϴ�."); // ��ü���̶�� ���

	return 0; // main function �� 0���� ��ȯ
}