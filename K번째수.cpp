#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (const auto& cmd : commands) {
        vector<int> subArray(array.begin() + cmd[0] - 1, array.begin() + cmd[1]); // 부분 배열 추출
        sort(subArray.begin(), subArray.end()); // 정렬
        answer.push_back(subArray[cmd[2] - 1]); // K번째 수 추가
    }
    
    return answer;
}

int main() {
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    
    vector<int> result = solution(array, commands);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
