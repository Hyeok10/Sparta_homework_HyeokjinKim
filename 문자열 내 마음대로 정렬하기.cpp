#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 문자열 리스트를 주어진 인덱스 n번째 문자 기준으로 정렬하는 함수
vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](const string &a, const string &b) {
        // n번째 문자가 다르면 해당 문자 기준으로 정렬
        // n번째 문자가 같으면 사전순으로 정렬
        return a[n] == b[n] ? a < b : a[n] < b[n];
    });
    return strings;
}

int main() {
    vector<string> words = {"sun", "bed", "car"};
    int index = 1;  // 두 번째 글자 기준으로 정렬

    vector<string> sortedWords = solution(words, index);

    // 정렬된 결과 출력
    for (const string &word : sortedWords) {
        cout << word << " ";
    }
    return 0;
}
