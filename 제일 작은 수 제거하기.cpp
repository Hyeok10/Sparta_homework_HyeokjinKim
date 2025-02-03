#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) return {-1};
    
    int minElement = *min_element(arr.begin(), arr.end());
    
    vector<int> result;
    for (int num : arr) {
        if (num != minElement) {
            result.push_back(num);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {4, 3, 2, 1};
    vector<int> result = solution(arr);
    
    cout << "결과: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}