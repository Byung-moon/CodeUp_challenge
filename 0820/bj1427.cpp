// 1427
// 문제 출처 : https://www.acmicpc.net/problem/1427
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
        digitNum = newNum%10;   // 일의 자리 숫자 뽑아내기
        //cout <<  "digitNum : " << digitNum << '\n';

        sortedNum.push_back(digitNum);  // 뽑아낸 숫자 벡터에 삽입
        newNum = newNum / 10;   // 자릿수 줄이기
        //cout << "newNum : " << newNum << '\n';

        if (newNum < 10 && newNum != 0)
        {
            sortedNum.push_back(newNum);    // 최상단 자리 수 삽입
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