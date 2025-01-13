#include <iostream>
#include <vector>

// solution 함수 정의
std::vector<long long> solution(int x, int n) {
    // 결과를 저장할 벡터 선언
    std::vector<long long> result;

    // x부터 시작해서 x씩 증가하는 숫자 n개 생성
    for (int i = 1; i <= n; ++i) {
        result.push_back(static_cast<long long>(x) * i);
    }

    // 결과 반환
    return result;
}

// 메인 함수 (테스트용)
int main() {
    int x, n;

    // 사용자로부터 입력 받기
    std::cout << "Enter x (-10,000,000 <= x <= 10,000,000): ";
    std::cin >> x;

    std::cout << "Enter n (1 <= n <= 1000): ";
    std::cin >> n;

    // solution 함수 호출
    std::vector<long long> result = solution(x, n);

    // 결과 출력
    std::cout << "Result: ";
    for (long long num : result) {
        std::cout << num << " ";
    }

    return 0;
}
