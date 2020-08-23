// 15650 N�� M
// ���� ��ó : https://www.acmicpc.net/problem/15650
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
        if (visited[i]!=true)   // �湮���� �ʾ��� ��츸 Ž��
        {
            visited[i] = true;  //  ���� ��� �湮 ó��
            numVec.push_back(i); // ���� ��� �� ���Ϳ� ����

            printArr(N, M, i+1); // ���� ��� Ž�� ����
            numVec.pop_back();   // ���� ��忡�� Ž���Ҹ�ŭ �� �߱⶧���� ���� ��带 ���� stack���� ����. 

            visited[i] = false;  // ���� �ִ� ��� ����������(ex, ������ 1�ε� 
                                 // �پƾ����� 3���� �����Ҷ�) �� ���� ��带 ����� �� �ֵ��� �ϱ� ����
        }
    }
}