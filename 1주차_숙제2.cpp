#include <iostream>
using namespace std;

// Animal 기본 클래스
class Animal {
public:
    // 순수 가상 함수
    virtual void makeSound() = 0; // 순수 가상 함수
};

// Dog 클래스
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "멍멍!" << endl;
    }
};

// Cat 클래스
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "야옹!" << endl;
    }
};

// Cow 클래스
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "음매!" << endl;
    }
};

int main() {
    // Animal 타입의 포인터 배열 선언
    Animal* animals[3];

    // 각 동물 클래스의 객체 생성
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    // 각 동물의 울음소리 내기
    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    // 메모리 해제
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}

// 문제풀이 https://game-dev-til.tistory.com/8