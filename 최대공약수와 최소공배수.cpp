#include <iostream>
#include <vector>

using namespace std;

// 유클리드 알고리즘을 이용한 GCD(최대공약수) 계산
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM(최소공배수) 계산
int lcm(int a, int b, int gcd_value) {
    return (a / gcd_value) * b; // 곱셈 순서를 바꿔 오버플로우 방지
}

// 최대공약수와 최소공배수를 반환하는 함수
vector<int> solution(int n, int m) {
    int gcd_value = gcd(n, m);
    int lcm_value = lcm(n, m, gcd_value);
    return {gcd_value, lcm_value};
}