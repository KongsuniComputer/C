// ������ �Ҵ� �� ���� �ٲ�ġ�� Program

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int x = 10; // x���� 10 �̶�� ������ �ʱ�ȭ
	int y = 20; // y���� 20 �̶�� ������ �ʱ�ȭ
	int temp; // x�� y�� ���İ� �� 3�� ���� �����ϱ�

	printf("��ȯ �� x = %d, y = %d\n", x, y); // x, y �ٲ�ġ�� �� ���� ���

	temp = x; // 10�� temp�� ����
	x = y; // 20�� x�� ����
	y = temp; // 10�� y�� ����
	
	printf("��ȯ �� x = %d, y = %d\n", x, y); // x, y �ٲ� ģ �� ���� ���

	return 0; // main function �� 0���� ��ȯ
}