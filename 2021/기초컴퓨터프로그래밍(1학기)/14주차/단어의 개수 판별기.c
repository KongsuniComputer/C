// �ܾ��� �� �Ǻ���
#include <stdio.h> // STanDard Input Output �Լ� ������� ��ó����

int main(void) // main function
{
    char *token; // ���ڿ� ��ū �и� ������ token ����
    int output = 0; // �Է¹��� ���ڿ��� �ܾ��� ���� ����� ������ ������ 0���� �ʱ�ȭ

    char input[100]; // �Է¹��� ���ڿ��� ������, size�� 100�� ���ڿ� ����
    printf("���ڿ��� �Է��Ͻÿ� : "); // ���ڿ��� �Է��ض�� msg ���
    gets(input); // ���ڿ� �Է� ���� (gcc �����Ϸ��� gets_s�� ����)

    token = strtok(input, " "); // ���ڿ� ��ū�� �и����ִ� strtok �Լ� ����Ͽ� ���ڿ��� �����ϰ� ��ū�� ����
    while(token != NULL) // token �ȿ��� NULL ���ڰ� ������ ������ �Ʒ��� ������ �ݺ�
    {
        output++; // �ܾ� ���� ����� ������ 1�� ����
        token = strtok(NULL, " "); // ��ū�� ����
    }

    printf("�ܾ��� ���� %d �Դϴ�.", output); // �ݺ��� �� ���� ���� output ���

    return 0; // main function�� 0���� ��ȯ
}
