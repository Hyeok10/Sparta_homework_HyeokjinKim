
#include <iostream> 
using namespace std; 

string solution(int a, int b) {
    static const int monthDays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    // 1. 월별 일수를 정의한 배열
    static const string weekDays[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    //  2. 요일을 저장한 배열
    int totalDays = b - 1;
    //  3. 이번 달의 이전 날짜 수 계산
    for (int i = 0; i < a - 1; ++i)
        totalDays += monthDays[i];
    // 4. 이전 달들까지의 누적 일수 더하기
    return weekDays[totalDays % 7];
    // 5. 요일을 계산하여 반환하는 코드
}

int main() {
    int a, b;
    cin >> a >> b;              
    cout << solution(a, b);   
    return 0;
}
