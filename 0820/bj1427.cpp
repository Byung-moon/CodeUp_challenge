// 1427
// ���� ��ó : https://www.acmicpc.net/problem/1427
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int newNum = N, digitNum = 0;
    vector <int> sortedNum;

    while (1)
    {
        digitNum = newNum%10;   // ���� �ڸ� ���� �̾Ƴ���
        //cout <<  "digitNum : " << digitNum << '\n';

        sortedNum.push_back(digitNum);  // �̾Ƴ� ���� ���Ϳ� ����
        newNum = newNum / 10;   // �ڸ��� ���̱�
        //cout << "newNum : " << newNum << '\n';

        if (newNum < 10 && newNum != 0)
        {
            sortedNum.push_back(newNum);    // �ֻ�� �ڸ� �� ����
            break;
        }
        else if(newNum == 0)
            break;
    }
    
    sort(sortedNum.begin(), sortedNum.end(), greater<int>());

    for (int i = 0; i < sortedNum.size(); i++)
    {
        cout << sortedNum[i];
    }
    
    return 0;
}