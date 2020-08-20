// 1181 단어 정렬
// 문제 링크 : https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // 2차원 벡터 선언
    vector <vector <string> > strArr2D;
    
    string tmp;
    int wordNum = 0;
    cin >> wordNum;

    // 2차원 벡터 생성
    for (int i = 0; i < 51; i++)
    {
        vector <string> arr;
        strArr2D.push_back(arr);
    }
    
    // 값 넣기
    for (int i = 0; i < wordNum; i++)
    {
        cin >> tmp;
        strArr2D[tmp.size()].push_back(tmp);
    }

    // 50개 정렬
    for (int i = 0; i < 51; i++)
    {
        sort(strArr2D[i].begin(), strArr2D[i].end());
    }

    // 출력
    for (int i = 0; i < strArr2D.size(); i++)
    {
        for (int j = 0; j < strArr2D[i].size(); j++)
        {
            if(j > 0 && strArr2D[i][j-1] == strArr2D[i][j] )
                continue;
            else if (j == 0)
            {
                cout << strArr2D[i][j] << '\n';
            }
            else
                cout << strArr2D[i][j] << '\n';
        }
    }
    
    
    return 0;
}