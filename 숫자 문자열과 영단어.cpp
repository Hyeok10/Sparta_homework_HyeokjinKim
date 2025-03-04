#include <iostream>  // 표준 입출력
#include <regex>     // 정규 표현식 사용 (regex, regex_replace)
#include <string>    // 문자열 처리 (string)

using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");    
    return stoi(s);
}

int main() {
    cout << solution("one4seveneight") << endl; // 1478
    cout << solution("23four5six7") << endl;    // 234567
    cout << solution("1zerotwozero3") << endl;  // 10203
    return 0;
}
