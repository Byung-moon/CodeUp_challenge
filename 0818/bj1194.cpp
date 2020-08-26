#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

//int cnt_x, cnt_y;
vector <char> key;

char map2D[50][50] = {NULL, };
bool visited2D[50][50] = {false, };
int distance = 0;
vector <int> distanceVec;

int main()
{
    // 세로, 가로 크기 입력
    int N, M;
    cin >> N >> M;

    // 시작점
    int start_X, start_Y;

    // 맵 입력
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map2D[i][j];
        }
    }

    // 0 위치 찾기, 찾은 후 위치 변경
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            if (map2D[i][j] == '0')
            {
                start_X = j;
                start_Y = i;
                // 시작점 방문처리
                //visited2D[i][j] = true;
            }
        } 
    }

    breakmaze(start_X, start_Y);


}


// 최단거리 출력하는 미로 탈출 함수
int breakmaze(int start_X, int start_Y)
{  
    int cnt_x = start_X, cnt_y = start_Y;

    // 방문 처리
    visited2D[start_X][start_Y] = true;

    // 거리 증가
    distance++;

    // 현재 위치가 도착지점인지 확인
    if(map2D[cnt_x][cnt_y] == 1)
        return ;

    // 우하좌상 이동시 더해줄 값. 다음좌표.
    int nx[4] = {0, 1, 0, -1}; // i에 더함
    int ny[4] = {1, 0, -1, 0}; // j에 더함

    for (int i = 0; i < 4; i++)
    {
        if(cnt_x + nx[i] < 0 || cnt_y + ny[i] < 0 || cnt_x + nx[i] > 49 || cnt_y + ny[i] > 49 || map2D[cnt_x+nx[i]][cnt_y+ny[i]] == '#' )
                continue;
        else if (map2D[cnt_x+nx[i]][cnt_y+ny[i]] >= 'A' && map2D[cnt_x+nx[i]][cnt_y+ny[i]] <= 'F')
        {
            int ch = map2D[cnt_x+nx[i]][cnt_y+ny[i]] - 'A'; // A면 0 B면 1 C면 2 D-3 E-4 F-5
            switch (ch)
            {
            case 0:
                if (find(key.begin(), key.end(), 'a') != key.end())
                {
                    int next_x = cnt_x + nx[i];
                    int next_y = cnt_y + ny[i];

                    breakmaze(next_x, next_y);
                    visited2D[next_x][next_y] = false;

                }
                
                break;
            
            default:
                break;
            }
        }
        
        else if ( map2D[cnt_x + nx[i]][cnt_y + ny[i]] == '')
        {
            /* code */
        }
        
    }
    
    
    

}
