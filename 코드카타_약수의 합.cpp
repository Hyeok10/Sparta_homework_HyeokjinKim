#include <iostream>
using namespace std;

int solution(int n) {
    if (n == 0) return 0; // n�� 0�� ��� ����� ���� 0
    int sum = 0;

    // n�� ����� ã�� ���� ����
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;
    cout << "������ �Է��ϼ��� (0 ~ 3000): ";
    cin >> n;

    if (n < 0 || n > 3000) {
        cout << "�Է� ���� ��ȿ���� �ʽ��ϴ�." << endl;
        return 1;
    }

    int result = solution(n);
    cout << "����� ��: " << result << endl;

    return 0;
}
