#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    // num1을 num2로 나눈 후 1000을 곱하고 정수 부분을 반환
    return static_cast<int>((static_cast<double>(num1) / num2) * 1000);
}

int main() {
    // 예제 테스트
    cout << solution(3, 2) << endl; // 출력: 1500
    cout << solution(7, 3) << endl; // 출력: 2333
    cout << solution(1, 16) << endl; // 출력: 62

    return 0;
}