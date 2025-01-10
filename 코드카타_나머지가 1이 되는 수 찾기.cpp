#include <iostream>

using namespace std;

int solution(int n) {
    // 2���� �����Ͽ� n���� ���� �� �߿��� �������� 1�� �Ǵ� ���� ���� ���� ã���ϴ�.
    for (int x = 2; x < n; ++x) {
        if (n % x == 1) {
            return x; // �������� 1�� �Ǵ� ù ��° ���� ã���� �ٷ� ��ȯ�մϴ�.
        }
    }
    return 0; //�� �κ��� ������� �ʽ��ϴ� (���� ���ǻ� ���� �׻� ����)
}

int main() {
    // ���� �׽�Ʈ ���̽�
    cout << solution(10) << endl; // ���: 3
    cout << solution(12) << endl; // ���: 11
    return 0;
}