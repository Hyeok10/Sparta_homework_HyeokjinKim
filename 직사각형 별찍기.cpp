#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::string stars(n, '*');  // 길이가 n인 문자열 생성

    for (int i = 0; i < m; i++) {
        std::cout << stars << std::endl;
    }

    return 0;
}
