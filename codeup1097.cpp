// 1097 : [����-2�����迭] �ٵϾ� ���� ������(����)

#include <iostream>

using namespace std;

int main()
{
    short locationOfStone[19][19] = {};
    int reverseNum; 
    int setStoneCross, setStoneRow;

    // ��� ���ҿ� ���� �� ���� �Է¹ޱ�
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> locationOfStone[i][j];
        }
    }
    
    // ���ڵ����� �� Ƚ�� �Է�
    cin >> reverseNum;

    // �߽���ǥ �Է¹ް� �� ��ǥ�� �������� ���ڵ�����
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
    
    // �迭�� ��� ���� ���
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