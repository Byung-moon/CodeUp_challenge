// 1098 : [기초-2차원배열] 설탕과자 뽑기

#include <iostream>
#include <string.h>   //memset 함수 사용하기 위해 include, #include <string>과는 다름

using namespace std;

int main()
{
    int height, width, numOfSticks, length, direction, x, y;
   
    cin >> height >> width;
    cin >> numOfSticks;

    //short matrixOfSticks[height][width] = {}; 이런식으로 height, width 값을 비워놓으면 안됨 --> 동적할당을 해줘야함
    
    // height X width의 크기를 갖는 2차원 배열 동적 할당
    short** matrixOfSticks = new short*[height]{ };

    for (int i = 0; i < height; i++)
    {
        matrixOfSticks[i] = new short[width];
        memset(matrixOfSticks[i], 0, sizeof(short)*width);
    }
    
    // 막대기 길이, 방향, 놓을 곳(x,y)를 받고 그에 따른 값 변화
    for (int i = 0; i < numOfSticks; i++)
    {
        cin >> length >> direction >> x >> y;

        if(direction == 0)
        {
            for (int j = 0; j < length; j++)
            {
                matrixOfSticks[x-1][y-1+j] = 1;
            }
        }
        else
        {
            for (int k = 0; k < length; k++)
            {
                matrixOfSticks[x-1+k][y-1] = 1;
            }
        } 
    }
    
    // 막대기가 놓인 matrix 값들 출력
    for (int i = 0; i< height; i++)
    {
        for (int j = 0; j < width ; j++)
        {
            cout << matrixOfSticks[i][j] << " ";
        }
        cout << endl;
    }

    // 메모리 해제
    for (int i = 0; i < height; i++)
    {
        delete [] matrixOfSticks[i];
    }
    delete [] matrixOfSticks;
    
}