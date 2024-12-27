#include <iostream>
using namespace std;

// Animal �⺻ Ŭ����
class Animal {
public:
    // ���� ���� �Լ�
    virtual void makeSound() = 0; // ���� ���� �Լ�
};

// Dog Ŭ����
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "�۸�!" << endl;
    }
};

// Cat Ŭ����
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "�߿�!" << endl;
    }
};

// Cow Ŭ����
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "����!" << endl;
    }
};

int main() {
    // Animal Ÿ���� ������ �迭 ����
    Animal* animals[3];

    // �� ���� Ŭ������ ��ü ����
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // �� ������ �����Ҹ� ����
    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    // �޸� ����
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}

// ����Ǯ�� https://game-dev-til.tistory.com/8