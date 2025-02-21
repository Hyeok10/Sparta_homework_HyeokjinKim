#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<int> ternary;  // 3진법 변환을 저장할 벡터

    // 1. 3진법으로 변환
    while (n > 0) {
        ternary.push_back(n % 3);  // 나머지를 저장 (3진법의 자릿수)
        n /= 3;  // 3으로 나눠서 다음 자리 계산
    }

    // 2. 3진법 숫자를 뒤집었으므로 그대로 사용
    int answer = 0;
    int size = ternary.size();
    
    // 3. 뒤집힌 3진법 수를 10진법으로 변환
    for (int i = 0; i < size; i++) {
        answer += ternary[i] * pow(3, size - 1 - i);
    }

    return answer;
}