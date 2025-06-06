#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int sum = 0; 

    for (size_t i = 0; i < absolutes.size(); ++i) {
        if (signs[i]) {
            sum += absolutes[i];
        } else {
            sum -= absolutes[i];
        }
    }

    return sum;
}

int main() {
    vector<int> absolutes = {4, 7, 12};
    vector<bool> signs = {true, false, true};
    
    int result = solution(absolutes, signs);
    cout << "Result: " << result << endl; 

    return 0;
}
