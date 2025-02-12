#include <iostream>

using namespace std;

long long solution(int price, int money, int count) {
    long long total_cost = (long long)count * (2 * price + (count - 1) * price) / 2;
    long long deficit = total_cost - money;
    return deficit > 0 ? deficit : 0;
}

int main() {
    cout << solution(3, 20, 4) << endl;
    return 0;
}
