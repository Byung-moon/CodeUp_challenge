// 11651 ��ǥ �����ϱ� 2
// ���� ��ũ : https://www.acmicpc.net/problem/11651

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
        spaceVec.push_back(make_pair(y,x)); // y��ǥ ������ �����ϱ� ���� y�� first���ڷ� ����
    }

    sort(spaceVec.begin(), spaceVec.end());

    for (int i = 0; i < spaceVec.size(); i++)
    {
        cout << spaceVec[i].second << ' ' << spaceVec[i].first << '\n';
    }
    
    return 0;
}