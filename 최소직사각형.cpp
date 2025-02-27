#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0, max_height = 0;
    
    for (auto &size : sizes) {
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);

        max_width = max(max_width, w);
        max_height = max(max_height, h);
    }

    return max_width * max_height;
}

int main() {
    vector<vector<int>> sizes = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    cout << "최소 지갑 크기: " << solution(sizes) << endl;
    return 0;
}
