// 1096 : [����-2�����迭] �ٵ��ǿ� �� �� ����(����)

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