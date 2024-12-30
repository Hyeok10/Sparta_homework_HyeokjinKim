#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    // num1�� num2�� ���� �� 1000�� ���ϰ� ���� �κ��� ��ȯ
    return static_cast<int>((static_cast<double>(num1) / num2) * 1000);
}

int main() {
    // ���� �׽�Ʈ
    cout << solution(3, 2) << endl; // ���: 1500
    cout << solution(7, 3) << endl; // ���: 2333
    cout << solution(1, 16) << endl; // ���: 62

    return 0;
}