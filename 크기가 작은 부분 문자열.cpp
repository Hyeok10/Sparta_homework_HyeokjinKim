#include <iostream>
#include <string>

using namespace std;

int solution(string t, string p) {
    int count = 0;
    int p_length = p.length();
    long long p_value = stoll(p);  // p를 정수로 변환

    for (size_t i = 0; i <= t.length() - p_length; ++i) {
        string sub = t.substr(i, p_length);  // 부분 문자열 추출
        long long sub_value = stoll(sub);    // 문자열을 정수로 변환
        if (sub_value <= p_value) {
            count++;
        }
    }
    return count;
}

int main() {
    string t, p;
    cout << "t 입력: ";
    cin >> t;
    cout << "p 입력: ";
    cin >> p;

    cout << "결과: " << solution(t, p) << endl;
    return 0;
}