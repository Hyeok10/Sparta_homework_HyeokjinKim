#include <iostream>
using namespace std;

bool solution(int x) {
    int sumOfDigits = 0;
    int originalNumber = x;

    while (x > 0) {
        sumOfDigits += x % 10;
        x /= 10;
    }

    return (originalNumber % sumOfDigits == 0);
}

int main() {
    int x;

    cout << "자연수를 입력하세요 (1 이상 10000 이하): ";
    cin >> x;

    if (x < 1 || x > 10000) {
        cout << "잘못된 입력입니다. 1 이상 10000 이하의 값을 입력해주세요." << endl;
        return 1;
    }

    if (isHarshad(x)) {
        cout << x << "은(는) 하샤드 수입니다." << endl;
    } else {
        cout << x << "은(는) 하샤드 수가 아닙니다." << endl;
    }

    return 0;
}
