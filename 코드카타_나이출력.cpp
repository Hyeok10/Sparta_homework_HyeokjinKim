#include <iostream>
using namespace std;

int solution(int age) {
    return 2022 - age + 1; // ���̿� ���� ��� ���� ���
}

int main() {
    int age;
    std::cout << "�������� ���̸� �Է��ϼ���: ";
    std::cin >> age;

    if (age > 0 && age <= 120) {
        int birthYear = solution(age);
        std::cout << "�������� ��� ����: " << birthYear << std::endl;
    } else {
        std::cout << "���̴� 0���� ũ�� 120 �����̾�� �մϴ�." << std::endl;
    }

    return 0;
}