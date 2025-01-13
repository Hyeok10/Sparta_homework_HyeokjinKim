#include <iostream>
#include <vector>

// solution �Լ� ����
std::vector<long long> solution(int x, int n) {
    // ����� ������ ���� ����
    std::vector<long long> result;

    // x���� �����ؼ� x�� �����ϴ� ���� n�� ����
    for (int i = 1; i <= n; ++i) {
        result.push_back(static_cast<long long>(x) * i);
    }

    // ��� ��ȯ
    return result;
}

// ���� �Լ� (�׽�Ʈ��)
int main() {
    int x, n;

    // ����ڷκ��� �Է� �ޱ�
    std::cout << "Enter x (-10,000,000 <= x <= 10,000,000): ";
    std::cin >> x;

    std::cout << "Enter n (1 <= n <= 1000): ";
    std::cin >> n;

    // solution �Լ� ȣ��
    std::vector<long long> result = solution(x, n);

    // ��� ���
    std::cout << "Result: ";
    for (long long num : result) {
        std::cout << num << " ";
    }

    return 0;
}
