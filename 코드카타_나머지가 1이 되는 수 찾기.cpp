#include <iostream>

using namespace std;

int solution(int n) {
    // 2부터 시작하여 n보다 작은 수 중에서 나머지가 1이 되는 가장 작은 수를 찾습니다.
    for (int x = 2; x < n; ++x) {
        if (n % x == 1) {
            return x; // 나머지가 1이 되는 첫 번째 수를 찾으면 바로 반환합니다.
        }
    }
    return 0; //이 부분은 실행되지 않습니다 (문제 조건상 답이 항상 존재)
}

int main() {
    // 예시 테스트 케이스
    cout << solution(10) << endl; // 출력: 3
    cout << solution(12) << endl; // 출력: 11
    return 0;
}