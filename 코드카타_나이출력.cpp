#include <iostream>
using namespace std;

int solution(int age) {
    return 2022 - age + 1; // 나이에 따라 출생 연도 계산
}

int main() {
    int age;
    std::cout << "선생님의 나이를 입력하세요: ";
    std::cin >> age;

    if (age > 0 && age <= 120) {
        int birthYear = solution(age);
        std::cout << "선생님의 출생 연도: " << birthYear << std::endl;
    } else {
        std::cout << "나이는 0보다 크고 120 이하이어야 합니다." << std::endl;
    }

    return 0;
}