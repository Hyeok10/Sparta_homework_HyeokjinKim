#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int painted_until = 0;

    for (int point : section) {
        if (point > painted_until) {
            answer++;
            painted_until = point + m - 1;
        }
    }
    
    return answer;
}