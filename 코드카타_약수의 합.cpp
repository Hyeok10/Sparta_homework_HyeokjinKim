#include <iostream>
using namespace std;

int solution(int n) {
    if (n == 0) return 0; // n이 0일 경우 약수의 합은 0
    int sum = 0;

    // n의 약수를 찾고 합을 구함
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;
    cout << "정수를 입력하세요 (0 ~ 3000): ";
    cin >> n;

    if (n < 0 || n > 3000) {
        cout << "입력 값이 유효하지 않습니다." << endl;
        return 1;
    }

    int result = solution(n);
    cout << "약수의 합: " << result << endl;

    return 0;
}
