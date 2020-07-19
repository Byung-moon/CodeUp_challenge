// 1097 : [기초-2차원배열] 바둑알 십자 뒤집기(설명)

#include <iostream>

using namespace std;

int main()
{
    short locationOfStone[19][19] = {};
    int reverseNum; 
    int setStoneCross, setStoneRow;

    // 모든 원소에 대해 돌 여부 입력받기
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> locationOfStone[i][j];
        }
    }
    
    // 십자뒤집기 할 횟수 입력
    cin >> reverseNum;

    // 중심좌표 입력받고 그 좌표를 기준으로 십자뒤집기
    for (int i = 0; i < reverseNum; i++)
    {
        cin >> setStoneCross >> setStoneRow;
        //locationOfStone[setStoneCross-1][setStoneRow-1] = !(locationOfStone[setStoneCross-1][setStoneRow-1]); 

        for (int j = 0; j < 19; j++)
        {
            locationOfStone[j][setStoneRow-1] = !(locationOfStone[j][setStoneRow-1]);
        }

        for (int k = 0; k < 19; k++)
        {
            locationOfStone[setStoneCross-1][k] = !(locationOfStone[setStoneCross-1][k]);
        }           
    }
    
    // 배열의 모든 원소 출력
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cout << locationOfStone[i][j] << ' ';
        }
        cout << endl;
    }
        
    return 0;
}