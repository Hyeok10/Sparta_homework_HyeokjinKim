#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sumSet; // 중복을 방지하기 위한 set 사용

    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sumSet.insert(numbers[i] + numbers[j]); // 두 수의 합을 set에 저장
        }
    }

    // set을 vector로 변환하여 정렬된 상태로 반환
    return vector<int>(sumSet.begin(), sumSet.end());
}

// 테스트 코드
int main() {
    vector<int> numbers = {2, 1, 3, 4, 1};
    vector<int> result = solution(numbers);

    cout << "결과: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
