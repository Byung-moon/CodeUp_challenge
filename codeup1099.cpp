// 1099 : [기초-2차원배열] 성실한 개미
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
    
    // 10 x 10 배열 생성
    int matrixOfMap[10][10];

    for (int i = 0; i < 10; i++)
    {
          for (int j = 0; j < 10; j++)
          {
              cin >> matrixOfMap[i][j];
          }
    }
    
    // 현재 위치 배열 선언
    int cntRow = 1, cntColumn = 1;

    // 오른쪽 칸 먼저 확인 후 0이면 이동 1이면 아래로 이동. 2를 만나면 종료. 끝에 도달해도 종료.
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

    //개미 이동경로 출력 (변화된 배열 값 출력)
    //cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matrixOfMap[i][j] << ' ';
        }
        cout << endl;
    }
    


    //메모리 해제
    /*
    for (int i = 0; i < row; i++)
    {
        delete [] matrixOfMap[i];
    }
    delete [] matrixOfMap;
    */
    return 0;
}
