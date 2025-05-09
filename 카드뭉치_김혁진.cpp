#include <string>
#include <vector>

std::string solution(std::vector<std::string> cards1, std::vector<std::string> cards2, std::vector<std::string> goal) {
    int ptr1 = 0;
    int ptr2 = 0;

    for (const std::string& target_word : goal) {
        if (ptr1 < cards1.size() && cards1[ptr1] == target_word) {
            ptr1++;
        }
        else if (ptr2 < cards2.size() && cards2[ptr2] == target_word) {
            ptr2++;
        }
        else {
            return "No";
        }
    }

    return "Yes";
}