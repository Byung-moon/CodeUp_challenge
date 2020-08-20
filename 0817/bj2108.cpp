// 2108 �����
// ������, �߾Ӱ�, �ֺ�, ���� ���
// ��ũ : https://www.acmicpc.net/problem/2108
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    //cin.tie(NULL);
    //ios_base::sync_with_stdio(false);

    vector <int> numberArr;
    int N;
    cin >> N;
    int getnum;
    int sum = 0;

    // count �迭
    int countArr[8001] = {0, };

    for (int i = 0; i < N; i++)
    {
        cin >> getnum;
        numberArr.push_back(getnum);
        sum += getnum;
       
        countArr[getnum+4000]++; 
    }

    // ������
    double avg = sum/(double)N;
    //�������� ���� 
    sort(numberArr.begin(), numberArr.end());
    // ��� ��� ���
    cout << floor(avg + 0.5) << '\n';
    // �߾Ӱ� ���
    printf("%d\n", numberArr[N/2]);

    // �ֺ� ���
    int maxIndex = max_element(countArr, countArr+8001) - countArr;  // ���� ū �ε��� ���
    //int maxMinus = *max_element(minusArr, minusArr+4000);   // ���� ū �ε��� ���
    int firstMaxNum = countArr[maxIndex];
    int firstMaxIndex = maxIndex;

    countArr[maxIndex] = -1; // �ֺ��� ������ ������ ���� �������� -1�� ����
    maxIndex = max_element(countArr, countArr+8001) - countArr; 
    int secondMaxNum = countArr[maxIndex];
    if (firstMaxNum > secondMaxNum)
    {
        printf("%d\n", firstMaxIndex-4000);
    }
    else
        printf("%d\n", maxIndex-4000);
    
    // ���� ���
    int maxNum = *max_element(numberArr.begin(), numberArr.end());
    int minNum = *min_element(numberArr.begin(), numberArr.end());
    printf("%d", maxNum - minNum); 

    return 0;
}

