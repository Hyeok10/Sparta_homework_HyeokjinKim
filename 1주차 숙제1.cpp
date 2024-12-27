#include <iostream>

using namespace std;

// �հ踦 ����ϴ� �Լ�
double calculateSum(double scores[], int size) {
    double sum = 0; // �հ踦 ������ ���� �ʱ�ȭ
    for (int i = 0; i < size; i++) {
        sum += scores[i]; // �迭�� �� ��Ҹ� �ջ�
    }
    return sum; // ���� �հ踦 ��ȯ
}

// ����� ����ϴ� �Լ�
double calculateAverage(double sum, int size) {
    return sum / size; // �հ踦 �迭�� ũ��� ������ ����� ���
}

int main() {
    const int SIZE = 5; // �迭�� ũ�⸦ ����� ����
    double scores[SIZE]; // �л� ������ ������ �迭 ����

    // ����ڷκ��� ���� �Է� �ޱ�
    for (int i = 0; i < SIZE; i++) {
        cout << (i + 1) << " ��° �л� ������ �Է����ּ��� : "; // �л� ��ȣ ���
        cin >> scores[i]; // ����ڷκ��� ���� �Է¹޾� �迭�� ����
    }

    // �հ�� ��� ���
    double total = calculateSum(scores, SIZE); // �հ� ��� �Լ� ȣ��
    double average = calculateAverage(total, SIZE); // ��� ��� �Լ� ȣ��

    // ��� ���
    cout << "���� : " << total << endl; // ���� ���
    cout << "��� : " << average << endl; // ��� ���

    return 0; // ���α׷� ����
}

// ���� ���� https://game-dev-til.tistory.com/9