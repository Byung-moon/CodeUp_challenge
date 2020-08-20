// 1181 �ܾ� ����
// ���� ��ũ : https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // 2���� ���� ����
    vector <vector <string> > strArr2D;
    
    string tmp;
    int wordNum = 0;
    cin >> wordNum;

    // 2���� ���� ����
    for (int i = 0; i < 51; i++)
    {
        vector <string> arr;
        strArr2D.push_back(arr);
    }
    
    // �� �ֱ�
    for (int i = 0; i < wordNum; i++)
    {
        cin >> tmp;
        strArr2D[tmp.size()].push_back(tmp);
    }

    // 50�� ����
    for (int i = 0; i < 51; i++)
    {
        sort(strArr2D[i].begin(), strArr2D[i].end());
    }

    // ���
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