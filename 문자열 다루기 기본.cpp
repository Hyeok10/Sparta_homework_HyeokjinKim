#include <string>
#include <cctype> // isdigit 함수를 사용하기 위해 포함
using namespace std;

bool solution(string s) {
    // 문자열 길이가 4 또는 6인지 확인
    if (s.length() != 4 && s.length() != 6) {
        return false;
    }

    // 모든 문자가 숫자인지 확인
    for (char c : s) {
        if (!isdigit(c)) { // 숫자가 아니라면 false 반환
            return false;
        }
    }

    return true; // 모든 조건을 만족하면 true 반환
}
