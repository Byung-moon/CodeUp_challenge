// 15649 N과 M
// 문제 출처 : https://www.acmicpc.net/problem/15649
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArr(int N, int M, int startNum, bool visited[]);
vector <int> numVec;

int main()
{
    int N, M;   // N은 max 숫자, M은 수열의 길이
    cin >> N >> M;

    // 방문 노드
    bool visited[9] = {false, };

    // 현재 출력된 개 수(현재 수열의 길이)
    int cnt = 0;

   
    printArr(N, M, 1, visited);
    
    return 0;
}

void printArr(int N, int M, int startNum, bool visited[])
{
  // 방문 확인
  if (visited[startNum] == true)
  {
      return;
  }

  // 수열 출력 된 개수 확인
  if (numVec.size() == M)
  {
      //출력
      for (int i = 0; i < M; i++)
      {
          cout << numVec[i] << ' ';
      }
      cout << '\n';

      return;
  }

  // 방문 표시
  visited[startNum] == true;

  for (int i = 1; i <= N; i++)
  {
    if(find(numVec.begin(), numVec.end(), i) != numVec.end() ) 
        continue;

    numVec.push_back(i);
    visited[i] == true;

    printArr(N, M, i, visited);

    visited[startNum] == false;
    numVec.pop_back();

  }
  
}