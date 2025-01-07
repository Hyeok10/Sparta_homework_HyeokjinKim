#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    int count = numbers.size();

    // �迭�� ��� ���Ҹ� ���մϴ�.
    for (int num : numbers) {
        sum += num;
    }

    // ��հ��� ����Ͽ� ��ȯ�մϴ�.
    return sum / count;
}

int main() {
    // ���� ���
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    double avg = solution(numbers);

    // ��� ���
    cout << "Average: " << avg << endl;
    return 0;
}
