#include <iostream> // 입출력을 위한 라이브러리 포함
using namespace std; // std 네임스페이스 사용

// 약수 개수를 계산하는 함수
int countDivisors(int n) {
    int count = 0; // 약수 개수를 저장하는 변수

    // 1부터 n까지 반복하면서 약수를 찾음
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) { // i가 n의 약수인지 확인
            count++; // i는 약수이므로 개수 증가
            if (i != n / i) { // i와 (n / i)가 다르면 한 개 더 추가
                count++;
            }
        }
    }

    return count; // 약수 개수를 반환
}

// left부터 right까지 반복하며 약수 개수에 따라 더하거나 빼는 함수
int solution(int left, int right) {
    int result = 0; // 최종 결과를 저장할 변수

    for (int num = left; num <= right; num++) { // left부터 right까지 반복
        if (countDivisors(num) % 2 == 0) { // 약수 개수가 짝수이면
            result += num; // 더하기
        } else { // 약수 개수가 홀수이면
            result -= num; // 빼기
        }
    }

    return result; // 최종 결과 반환
}

// 실행 테스트
int main() {
    cout << solution(13, 17) << endl; // 예상 출력: 43
    cout << solution(24, 27) << endl; // 예상 출력: 52
    return 0;
}