// 1099 : [����-2�����迭] ������ ����
#include <iostream>
#include <string.h>

using namespace std;

#define ROW 10;
#define COLUMN 10;

int main()
{
    /*
    int row, column;
    cin >> row >> column;

    int** matrixOfMap = new int*[row]{ };

    for (int i = 0; i < row; i++)
    {
        matrixOfMap[i] = new int[column];
        memset(matrixOfMap[i], 0, sizeof(int)*column);
    }
    */
    
    // 10 x 10 �迭 ����
    int matrixOfMap[10][10];

    for (int i = 0; i < 10; i++)
    {
          for (int j = 0; j < 10; j++)
          {
              cin >> matrixOfMap[i][j];
          }
    }
    
    // ���� ��ġ �迭 ����
    int cntRow = 1, cntColumn = 1;

    // ������ ĭ ���� Ȯ�� �� 0�̸� �̵� 1�̸� �Ʒ��� �̵�. 2�� ������ ����. ���� �����ص� ����.
    while(1)
    {   
        //cout << cntRow << ' ' << cntColumn << endl;
        if (matrixOfMap[cntRow][cntColumn] == 2)
        {
            matrixOfMap[cntRow][cntColumn] = 9;
            break;
        }

        matrixOfMap[cntRow][cntColumn] = 9;
        
        if(matrixOfMap[cntRow][cntColumn+1] == 0)
        {
            matrixOfMap[cntRow][cntColumn+1] = 9;
            cntColumn += 1;
        }
        else if ((matrixOfMap[cntRow][cntColumn+1] == 1) && (matrixOfMap[cntRow+1][cntColumn] == 0))
        {
            matrixOfMap[cntRow+1][cntColumn] = 9;
            cntRow += 1;
        }
        else if ((matrixOfMap[cntRow+1][cntColumn] == 2) )
        {
            matrixOfMap[cntRow+1][cntColumn] = 9;
            break;
        }
        else if ((matrixOfMap[cntRow][cntColumn+1] == 2))
        {
            matrixOfMap[cntRow][cntColumn+1] = 9;
            break;
        }
        else if ((matrixOfMap[cntRow+1][cntColumn] == 1) && (matrixOfMap[cntRow][cntColumn+1] == 1))
        {
            break;
        }
    }

    //���� �̵���� ��� (��ȭ�� �迭 �� ���)
    //cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrixOfMap[i][j] << ' ';
        }
        cout << endl;
    }
    


    //�޸� ����
    /*
    for (int i = 0; i < row; i++)
    {
        delete [] matrixOfMap[i];
    }
    delete [] matrixOfMap;
    */
    return 0;
}
