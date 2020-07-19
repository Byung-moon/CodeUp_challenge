// 1072 : [기초-반복실행구조] 정수 입력받아 계속 출력하기(설명)
// 1073 : [기초-반복실행구조] 0 입력될 때까지 무한 출력하기2(설명)
// 1074 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기1(설명)
#include <iostream>

using namespace std;

int main()
{
    // No.1072
    /*
    int n;
    cin >> n;
    int number;

    for(int i=0; i<n; i++)
    {
        cin >> number;
        cout << number << endl;
    }
    */

    
    // No.1073
    /*
    int number;
    
    while(1)
    {
        cin >> number;
        if (number == 0)
        {
            break;
        }
        else
        {
            cout << number << endl;
        }
    }
    */
    
    // 1093 [기초-1차원배열] 이상한 출석 번호 부르기1(설명)
    /*
    int callNum;
    cin >> callNum;

    int student[23] = {};
    int attendNum;

    for (int i = 0; i < callNum; i++)
    {
        cin >> attendNum;
        student[attendNum-1] += 1;
    }

    for (int i = 0; i < 23; i++)
    {
        cout << student[i] << ' ';
    }
    */
    
    // 1095 : [기초-1차원배열] 이상한 출석 번호 부르기3(설명)
    int callNum;
    cin >> callNum;

    int student[23] = {};
    int attendNum;

    for (int i = 0; i < callNum; i++)
    {
        cin >> attendNum;
        student[attendNum-1] += 1;
    }

    for (int i = 0; i < 23; i++)
    {
        if (student[i])
        {
            cout << i+1;
            break;
        }
        
    }
    
    return 0;
}