// �Է��� ���ĺ��� �����ϱ��? �����ϱ��? �˷��ִ� ���α׷� 

#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

int main(void) { // main function
	
	char c; // ���ĺ��� ���� ���� c ����

	printf("���ڸ� �Է��Ͻÿ� : "); // ���� �Է� �ȳ� �޽��� ���
	c = getchar(); // ���ĺ��� �Է¹޾� �� ���ĺ��� �ش�Ǵ� int������ ��ȯ�ϰ�, �� ���� c�� ����

	switch(c) // c ���� ���� ����, ���� ���� start
	{
		case 65: // ASCII Code���� A
		case 97: // ASCII Code���� a
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� �Ʒ� �ڵ带 �������� �ʰ� switch ���� Ż��
		case 69: // ASCII Code���� E
		case 101: // ASCII Code���� e
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� �Ʒ� �ڵ带 �������� �ʰ� switch ���� Ż��
		case 73: // ASCII Code���� I
		case 105: // ASCII Code���� i
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� �Ʒ� �ڵ带 �������� �ʰ� switch ���� Ż��
		case 79: // ASCII Code���� O
		case 111: // ASCII Code���� o
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� �Ʒ� �ڵ带 �������� �ʰ� switch ���� Ż��
		case 85: // ASCII Code���� U
		case 117: // ASCII Code���� u
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� �Ʒ� �ڵ带 �������� �ʰ� switch ���� Ż��

		default: // ������ ������ ������ ����
			printf("���� �Դϴ�.\n"); // ������ ���� �����̶�� ���
			break; // ���� �Ǿ����Ƿ� switch ���� Ż��
	}

	return 0; // main function �� 0���� ��ȯ
}