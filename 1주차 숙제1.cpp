#include <iostream>

using namespace std;

// 합계를 계산하는 함수
double calculateSum(double scores[], int size) {
    double sum = 0; // 합계를 저장할 변수 초기화
    for (int i = 0; i < size; i++) {
        sum += scores[i]; // 배열의 각 요소를 합산
    }
    return sum; // 계산된 합계를 반환
}

// 평균을 계산하는 함수
double calculateAverage(double sum, int size) {
    return sum / size; // 합계를 배열의 크기로 나누어 평균을 계산
}

int main() {
    const int SIZE = 5; // 배열의 크기를 상수로 정의
    double scores[SIZE]; // 학생 점수를 저장할 배열 선언

    // 사용자로부터 점수 입력 받기
    for (int i = 0; i < SIZE; i++) {
        cout << (i + 1) << " 번째 학생 점수를 입력해주세요 : "; // 학생 번호 출력
        cin >> scores[i]; // 사용자로부터 점수 입력받아 배열에 저장
    }

    // 합계와 평균 계산
    double total = calculateSum(scores, SIZE); // 합계 계산 함수 호출
    double average = calculateAverage(total, SIZE); // 평균 계산 함수 호출

    // 결과 출력
    cout << "총점 : " << total << endl; // 총점 출력
    cout << "평균 : " << average << endl; // 평균 출력

    return 0; // 프로그램 종료
}

// 과제 설명 https://game-dev-til.tistory.com/9