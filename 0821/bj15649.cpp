// 15649 N�� M
// ���� ��ó : https://www.acmicpc.net/problem/15649
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArr(int N, int M, int startNum, bool visited[]);
vector <int> numVec;

int main()
{
    int N, M;   // N�� max ����, M�� ������ ����
    cin >> N >> M;

    // �湮 ���
    bool visited[9] = {false, };

    // ���� ��µ� �� ��(���� ������ ����)
    int cnt = 0;

   
    printArr(N, M, 1, visited);
    
    return 0;
}

void printArr(int N, int M, int startNum, bool visited[])
{
  // �湮 Ȯ��
  if (visited[startNum] == true)
  {
      return;
  }

  // ���� ��� �� ���� Ȯ��
  if (numVec.size() == M)
  {
      //���
      for (int i = 0; i < M; i++)
      {
          cout << numVec[i] << ' ';
      }
      cout << '\n';

      return;
  }

  // �湮 ǥ��
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