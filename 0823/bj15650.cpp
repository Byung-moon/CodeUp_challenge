// 15650 N과 M
// 문제 출처 : https://www.acmicpc.net/problem/15650
#include <iostream>
#include <vector>

using namespace std;

vector <int> numVec;
bool visited[9] = {false, };

void printArr(int N, int M, int startNum);

int main()
{
    int N, M;
    cin >> N >> M;

    printArr(N, M, 1);
  
}

void printArr(int N, int M, int startNum)
{
  
    if (numVec.size() == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << numVec[i] << ' ';
        }
        cout << '\n';

        return;
    }
    
    for (int i = startNum; i <= N; i++)
    {   
        if (visited[i]!=true)   // 방문하지 않았을 경우만 탐색
        {
            visited[i] = true;  //  현재 노드 방문 처리
            numVec.push_back(i); // 현재 노드 값 벡터에 저장

            printArr(N, M, i+1); // 다음 노드 탐색 진행
            numVec.pop_back();   // 현재 노드에서 탐색할만큼 다 했기때문에 다음 노드를 위해 stack에서 제거. 

            visited[i] = false;  // 현재 있던 노드 다음번에도(ex, 현재노드 1인데 
                                 // 다아아음에 3부터 시작할때) 이 현재 노드를 사용할 수 있도록 하기 위해
        }
    }
}