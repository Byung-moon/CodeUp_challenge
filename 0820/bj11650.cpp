// 11650 좌표정렬하기
// 문제 링크 : https://www.acmicpc.net/problem/11650

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std; 

int main()
{
    int N;
    cin >> N;
    int x, y;
    vector <pair <int, int> > spaceVec;

    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        spaceVec.push_back(make_pair(x,y));
    }

    sort(spaceVec.begin(), spaceVec.end());

    for (int i = 0; i < spaceVec.size(); i++)
    {
        cout << spaceVec[i].first << ' ' << spaceVec[i].second << '\n';
    }
    
    return 0;
}