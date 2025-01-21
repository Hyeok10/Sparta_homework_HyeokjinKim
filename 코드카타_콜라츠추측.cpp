#include <iostream>

typedef long long ll;
int solution(int num) {
    if (num == 1) return 0;

    int count = 0;
    ll n = num;

    while (count < 500) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }

        count++;

        if (n == 1) return count;
    }

    return -1;
}

int main() {
    int num;
    std::cout << "숫자를 입력하세요 (1 이상 8,000,000 미만): ";
    std::cin >> num;

    if (num < 1 || num >= 8000000) {
        std::cout << "잘못된 입력입니다. 프로그램을 종료합니다." << std::endl;
        return 1;
    }

    int result = solution(num);

    if (result == -1) {
        std::cout << "500번 반복해도 1이 되지 않았습니다." << std::endl;
    } else {
        std::cout << "1이 될 때까지 총 " << result << "번 반복했습니다." << std::endl;
    }

    return 0;
}
