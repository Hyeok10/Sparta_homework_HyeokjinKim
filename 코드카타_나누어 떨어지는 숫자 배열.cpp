#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> result;
    for (int num : arr) {
        if (num % divisor == 0) {
            result.push_back(num);
        }
    }
    if (result.empty()) {
        result.push_back(-1);
    }
    sort(result.begin(), result.end());
    return result;
}