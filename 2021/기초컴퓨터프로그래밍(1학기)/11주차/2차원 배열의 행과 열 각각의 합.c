#include <stdio.h> // Standard Input Output 함수 헤더파일 전처리기

// 2차원 표의 행과 열을 정의
#define ROWS 3 // 3개의 행
#define COLS 5 // 5개의 열

int main() { // main function
    
    // 문제에 제시된 표의 값들을 배열에 초기화
    int arr[ROWS][COLS] = {
        {12,56,32,16,98}, // 0행
        {99,56,34,41,3}, // 1행
        {65,3,87,78,21}, // 2행
    }; 

    int rows, rowSum, cols, colSum; 
    // 행의 수, 그 행 요소들의 합, 열의 수, 그 열 요소들의 합을 저장할 변수 각각 선언

    for (rows = 0; rows < ROWS; rows++) { // 행이 0부터 1씩 더하여 2가 될때까지 반복
        rowSum = 0; // 각 행 요소들의 합을 0으로 초기화
        for (cols = 0; cols < COLS; cols++) // 열이 0부터 1씩 더하여 4가 될때까지 반복
            rowSum += arr[rows][cols]; // 각 행의 요소들의 합계를 rowSum에 저장
        printf("%d행의 합계 : %d \n", rows, rowSum); // 합계를 출력
    }

    for (cols = 0; cols < COLS; cols++) { // 열이 0부터 1씩 더하여 4가 될때까지 반복
        colSum = 0; // 각 열 요소들의 합을 0으로 초기화
        for (rows = 0; rows < ROWS; rows++) // 행이 0부터 1씩 더하여 2가 될때까지 반복
            colSum += arr[rows][cols]; // 각 열의 요소들의 합계를 colSum에 저장
        printf("%d열의 합계 : %d \n", cols, colSum); // 합계를 출력
    }
    return 0; // main function 이 0으로 반환
}