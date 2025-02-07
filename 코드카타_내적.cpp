#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int dot_product = 0;
    for (size_t i = 0; i < a.size(); i++) {
        dot_product += a[i] * b[i];
    }
    return dot_product;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {-3, -1, 0, 2};
    
    cout << "Inner product: " << solution(a, b) << endl;
    return 0;
}