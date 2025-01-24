#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();

    // 뒷 4자리를 제외한 나머지 부분을 '*'로 채웁니다.
    for (int i = 0; i < len - 4; i++) {
        answer += '*';
    }

    // 뒷 4자리를 answer에 추가합니다.
    answer += phone_number.substr(len - 4);

    return answer;
}