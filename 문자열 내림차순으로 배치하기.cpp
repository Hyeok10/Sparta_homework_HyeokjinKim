#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    sort(s.rbegin(), s.rend()); // 내림차순 정렬
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << solution(s) << endl;
    return 0;
}
