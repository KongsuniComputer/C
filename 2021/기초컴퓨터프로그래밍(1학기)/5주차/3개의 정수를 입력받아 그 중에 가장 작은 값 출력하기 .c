// 3���� ������ �Է¹޾� �� �߿� ���� ���� �� ����ϱ� 

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int x, y, z; // 3���� ������ ���� ���� ����
	int minimum; // ��� �� �Ŀ� ���� ���� ���� ���� ���� �� ���� ����

	printf("3���� ������ �Է��Ͻÿ� : "); // 3���� ������ �Է��ض�� �޽��� ���
	scanf_s("%d %d %d", &x, &y, &z); // 3���� ������ ���� ������ �ѹ����� �Է�

	if (x > y) { // ���� �Է� ���� x, y �߿� y�� �� �۴ٰ� �ϸ�,
		if (y > z) // �׸��� �� y�� �Է� ���� z �߿� z�� �� �۴ٰ� �ϸ�
			minimum = z; // z�� minimum�� ��������

		else if (z > y) // �׷��� y�� �Է� ���� z �߿� y�� �� �۴ٰ� �ϸ�
			minimum = y; // y�� minimum�� ��������
	}

	else if (y > x) { // ���� �Է� ���� x, y �߿� x�� �� �۴ٰ� �ϸ�,
		if (x > z) // �׸��� �� x�� �Է� ���� z �߿� z�� �� �۴ٰ� �ϸ�
			minimum = z; // // z�� minimum�� ��������

		else if (z > x) // �׷��� x�� �Է� ���� z �߿� x�� �� �۴ٰ� �ϸ�
			minimum = x; // x�� minimum�� ��������
	}

	printf("���� ���� ������ %d �Դϴ�.\n", minimum); // minimum�� ����� ���� �� ���


	return 0; // main function �� 0���� ��ȯ
}