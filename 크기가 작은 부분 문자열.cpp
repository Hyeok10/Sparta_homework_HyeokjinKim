#include <iostream> // 입출력 스트림 관련 기능을 제공하는 헤더 파일
#include <string>   // 문자열 클래스 관련 기능을 제공하는 헤더 파일
#include <vector>   // 동적 배열(vector) 관련 기능을 제공하는 헤더 파일
#include <algorithm> // 여러 유용한 알고리즘(정렬, 검색 등)을 제공하는 헤더 파일

int solution(std::string t, std::string p) {
    int answer = 0;                     // 조건을 만족하는 부분 문자열의 개수를 저장할 변수 초기화
    int p_len = p.length();             // 비교 대상 문자열 p의 길이 저장
    long long p_num = std::stoll(p);   // 비교 대상 문자열 p를 long long 타입의 정수로 변환

    // 문자열 t에서 길이가 p_len인 모든 부분 문자열을 순회
    for (int i = 0; i <= (int)t.length() - p_len; ++i) {
        std::string sub = t.substr(i, p_len); // t의 i번째 인덱스부터 p_len 길이만큼의 부분 문자열 추출
        long long sub_num = std::stoll(sub); // 추출된 부분 문자열을 long long 타입의 정수로 변환

        // 부분 문자열의 숫자가 p의 숫자보다 작거나 같은지 확인
        if (sub_num <= p_num) {
            answer++; // 조건을 만족하면 answer를 1 증가
        }
    }
    return answer; // 최종 결과 반환
}

int main() {
    std::string t1 = "3141592";
    std::string p1 = "271";
    std::cout << solution(t1, p1) << std::endl; // 예상 출력: 2

    std::string t2 = "10203";
    std::string p2 = "15";
    std::cout << solution(t2, p2) << std::endl; // 예상 출력: 3
    return 0;
}