#include <cmath>
#include <iostream>
#include <stdexcept>

long long solution(long long n) {
    long long sqrt_n = static_cast<long long>(sqrt(n));
    if (sqrt_n * sqrt_n == n) {
        return (sqrt_n + 1) * (sqrt_n + 1);
    }
    return -1;
}

int main() {
    std::cout << solution(121) << std::endl;
    std::cout << solution(3) << std::endl;
    std::cout << solution(240) << std::endl;
    return 0;
}
