// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� ���α׷�
#include <stdio.h> // STanDard Input Output �Լ� ������� ��ó����

void get_sum_diff(int a, int b, int* hopPoint, int* chaPoint)
// �Է¹��� �� ������ �����͸� �̿��� �հ� �� ���ϴ� ����� ���� �Լ� get_sum_diff
// main �Լ��� �� �� x, y�� ������ �Ű����� a, b�� ���� �ް�, 
// main �Լ����� ����� ������ ���� hop, cha�� �ּҰ��� ����Ʈ �Ű����� hopPoint, chaPoint�� ���� ����
{
	*hopPoint = a + b; // 100 + 200 = 300�� hopPoint�� ����� �ּ���, main �Լ��� hop ������ ����
	*chaPoint = a - b; // 100 - 200 = -100�� chaPoint�� ����� �ּ���, main �Լ��� cha ������ ����
}

int main(void) // main function
{
	int x = 100, y = 200; // �Է¹��� �� ������ ������ ������ ���� x, y ����
	int hop, cha; // ����� ���� �Լ��� ����Ʈ �Ű������� �־��ֱ� ���� ������ ���� hop, cha ����

	get_sum_diff(x, y, &hop, &cha); // ����� ���� �Լ� get_sum_diff ȣ��

	printf("�� ���� ��: %d\n", hop); // ����� ���� �Լ� get_sum_diff���� ����� hop ���
	printf("�� ���� ��: %d\n", cha); // ����� ���� �Լ� get_sum_diff���� ����� cha ���

	return 0; // main function �� 0���� ��ȯ
}