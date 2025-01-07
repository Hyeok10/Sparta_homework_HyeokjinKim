#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    int count = numbers.size();

    // 배열의 모든 원소를 더합니다.
    for (int num : numbers) {
        sum += num;
    }

    // 평균값을 계산하여 반환합니다.
    return sum / count;
}

int main() {
    // 예제 사용
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    double avg = solution(numbers);

    // 결과 출력
    cout << "Average: " << avg << endl;
    return 0;
}
