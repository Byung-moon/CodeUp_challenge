// 10814 나이순 정렬
// 문제 출처 : https://www.acmicpc.net/problem/10814

#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main()
{
    vector <vector <pair <int, string> > > client_table2D;
    int N;
    cin >> N;

    for (int i = 0; i < 201; i++)
    {
        vector < pair <int, string> > tmp;
        client_table2D.push_back(tmp);
    }
    
    for (int i = 0; i < N; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        
        // 정보 삽입
        client_table2D[age].push_back(make_pair(age, name));
    }

    for (int i = 0; i < client_table2D.size(); i++)
    {
        for (int j = 0; j < client_table2D[i].size(); j++)
        {
            cout << client_table2D[i][j].first << ' ' << client_table2D[i][j].second << '\n';
        }
    }
    
    return 0;
    
}