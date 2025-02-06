#include <iostream>
#include <string>

std::string solution(int n) {
    std::string result;
    for (int i = 0; i < n; i++) {
        result += (i % 2 == 0) ? "수" : "박";
    }
    return result;
}

int main() {
    int n;
    std::cout << "길이를 입력하세요: ";
    std::cin >> n;
    std::cout << solution(n) << std::endl;
    return 0;
}
