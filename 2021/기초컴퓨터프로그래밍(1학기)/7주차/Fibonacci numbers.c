//Fibonacci numbers

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function

	int i; // for ���ǽĿ� �� i ����
	int a = 0, b = 1, c = 0; // �Ǻ���ġ �������� �� 2�� ���ҿ�, �� 2���� ���ؼ� ����� ���� ������ ���� �� �ʱ�ȭ

	printf("�� ��° �ױ��� ���ұ��? "); // ����ڿ��� �� ��° �ױ��� �Ǻ���ġ ������ ���� �� ����� �޽��� ���
	scanf_s("%d", &i); // �� �� �Է� �޾� i �� ����

	for (i; i > 0; i--) // �� �� �Է¹��� i�� ���� 0���� Ŭ������ for ���� �ݺ�
	{
		printf("%d, ", c); // �Ǻ���ġ���� �� ���� ���
		//�Ǻ���ġ ���� ����
		c = a + b; // f_i+1 = f_i + f_i-1
		a = b;
		b = c; 

	}

	return 0; // main function �� 0���� ��ȯ
}