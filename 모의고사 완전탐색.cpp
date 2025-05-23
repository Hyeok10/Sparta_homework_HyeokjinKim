#include vector
#include algorithm
using namespace std;

vectorint solution(vectorint answers) {
    vectorvectorint p = {
        {1,2,3,4,5},
        {2,1,2,3,2,4,2,5},
        {3,3,1,1,2,2,4,4,5,5}
    };
    vectorint score(3, 0);

    for (int i = 0; i  answers.size(); ++i)
        for (int j = 0; j  3; ++j)
            if (answers[i] == p[j][i % p[j].size()])
                ++score[j];

    int mx = max_element(score.begin(), score.end());
    vectorint ret;
    for (int i = 0; i  3; ++i)
        if (score[i] == mx)
            ret.push_back(i + 1);

    return ret;
}
