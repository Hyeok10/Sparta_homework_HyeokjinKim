#include <iostream>
#include <cctype>

using namespace std;

string solution(string s) {
    string result;
    int wordIndex = 0;  // 각 단어에서의 인덱스 추적

    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c == ' ') {  // 공백인 경우
            wordIndex = 0;  // 단어 인덱스 초기화
            result += c;  // 공백을 그대로 추가
        } else {
            if (wordIndex % 2 == 0) {
                result += toupper(c);  // 짝수 인덱스 → 대문자
            } else {
                result += tolower(c);  // 홀수 인덱스 → 소문자
            }
            wordIndex++;  // 단어 인덱스 증가
        }
    }

    return result;
}
