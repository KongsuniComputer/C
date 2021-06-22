#include <stdio.h> // Standard Input Output �Լ� ������� ��ó����

// 2���� ǥ�� ��� ���� ����
#define ROWS 3 // 3���� ��
#define COLS 5 // 5���� ��

int main() { // main function
    
    // ������ ���õ� ǥ�� ������ �迭�� �ʱ�ȭ
    int arr[ROWS][COLS] = {
        {12,56,32,16,98}, // 0��
        {99,56,34,41,3}, // 1��
        {65,3,87,78,21}, // 2��
    }; 

    int rows, rowSum, cols, colSum; 
    // ���� ��, �� �� ��ҵ��� ��, ���� ��, �� �� ��ҵ��� ���� ������ ���� ���� ����

    for (rows = 0; rows < ROWS; rows++) { // ���� 0���� 1�� ���Ͽ� 2�� �ɶ����� �ݺ�
        rowSum = 0; // �� �� ��ҵ��� ���� 0���� �ʱ�ȭ
        for (cols = 0; cols < COLS; cols++) // ���� 0���� 1�� ���Ͽ� 4�� �ɶ����� �ݺ�
            rowSum += arr[rows][cols]; // �� ���� ��ҵ��� �հ踦 rowSum�� ����
        printf("%d���� �հ� : %d \n", rows, rowSum); // �հ踦 ���
    }

    for (cols = 0; cols < COLS; cols++) { // ���� 0���� 1�� ���Ͽ� 4�� �ɶ����� �ݺ�
        colSum = 0; // �� �� ��ҵ��� ���� 0���� �ʱ�ȭ
        for (rows = 0; rows < ROWS; rows++) // ���� 0���� 1�� ���Ͽ� 2�� �ɶ����� �ݺ�
            colSum += arr[rows][cols]; // �� ���� ��ҵ��� �հ踦 colSum�� ����
        printf("%d���� �հ� : %d \n", cols, colSum); // �հ踦 ���
    }
    return 0; // main function �� 0���� ��ȯ
}