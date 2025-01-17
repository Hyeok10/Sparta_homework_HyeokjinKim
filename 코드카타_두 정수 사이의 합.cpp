#include <iostream>
#include <algorithm>

long long solution(int a, int b) {
    int start = std::min(a, b);
    int end = std::max(a, b);
    return static_cast<long long>(end - start + 1) * (start + end) / 2;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Sum of integers between " << a << " and " << b << ": " << solution(a, b) << std::endl;
    return 0;
}
