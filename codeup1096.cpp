// 1096 : [기초-2차원배열] 바둑판에 흰 돌 놓기(설명)

#include <iostream>

using namespace std;

int main()
{
    int locationOfStone[19][19] = {};
    int number;
    cin >> number;

    int setStoneCross, setStoneRow;
    

    for (int i = 0; i < number; i++)
    {
        cin >> setStoneCross >> setStoneRow;
        locationOfStone[setStoneCross-1][setStoneRow-1] = 1;
    }

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