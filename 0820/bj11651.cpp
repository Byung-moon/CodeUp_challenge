// 11651 좌표 정렬하기 2
// 문제 링크 : https://www.acmicpc.net/problem/11651
// 백준

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
        spaceVec.push_back(make_pair(y,x)); // y좌표 순으로 정렬하기 위해 y를 first인자로 받음
    }

    sort(spaceVec.begin(), spaceVec.end());

    for (int i = 0; i < spaceVec.size(); i++)
    {
        cout << spaceVec[i].second << ' ' << spaceVec[i].first << '\n';
    }
    
    return 0;
}
