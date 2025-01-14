#include <iostream> 
#include <vector>  

// 숫자를 뒤집어 각 자릿수를 벡터에 저장하는 함수
std::vector<int> solution(long long n) {
    std::vector<int> result; // 결과를 저장할 벡터
    while (n > 0) {
        result.push_back(n % 10); // 마지막 자리 숫자 추출 후 벡터에 추가
        n /= 10;                 // 마지막 자리 제거
    }
    return result; // 뒤집힌 숫자의 자릿수를 반환
}

int main() {
    long long n; // 최대 10,000,000,000까지 처리할 수 있는 변수
    std::cin >> n; // 사용자로부터 자연수를 입력받음

    // solution 함수 호출 후 결과를 출력
    for (int digit : solution(n)) {
        std::cout << digit << " "; // 벡터의 각 숫자를 공백으로 구분해 출력
    }
    return 0; // 프로그램 정상 종료
}