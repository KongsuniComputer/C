#include <stdio.h> // STanDard Input Output �Լ� ������� ��ó����
#define SIZE 3 // �迭�� ����� 3���� ����

int main(void) // main function
{
    char yeonsan[SIZE]; // �Է¹��� �����ڸ� ������ ���ڿ� yeonsan ����
	int a, b, output; // ������ �� ���� ��� ���� ������ ������ ���� a, b, output ����

	printf("������ �Է��Ͻÿ�: "); // ����ڿ��� ������ �Է��ض�� msg ���
	scanf("%s %d %d", &yeonsan, &a, &b); // ������, a, b ������ �Է¹޾� ���ڿ��� �� ������ ����

    // ���ڿ����� ���� ��ġ�ϴ����� ���� ���� strcmp()�� ����Ѵ�.
	if(strcmp(yeonsan, "add") == 0) // yeonsan�� ����� ���ڿ��� add�� ���̸�
        output = a + b; // �� ���� ���Ѵ�

	else if(strcmp(yeonsan, "sub") == 0) // yeonsan�� ����� ���ڿ��� sub�� ���̸�
        output = a - b; // �� ���� ����

	else if(strcmp(yeonsan, "mul") == 0) // yeonsan�� ����� ���ڿ��� mul�� ���̸�
        output = a * b; // �� ���� ���Ѵ�

	else if(strcmp(yeonsan, "div") == 0) // yeonsan�� ����� ���ڿ��� div�� ���̸�
        output = a / b; // �� ���� ������

	printf("������ ���: %d", output); // ���� �� ���� ���


	return 0; // main function�� 0���� ����
}

