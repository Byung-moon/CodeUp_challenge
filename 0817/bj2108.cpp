// 2108 통계학
// 산술평균, 중앙값, 최빈값, 범위 출력
// 링크 : https://www.acmicpc.net/problem/2108
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

    // count 배열
    int countArr[8001] = {0, };

    for (int i = 0; i < N; i++)
    {
        cin >> getnum;
        numberArr.push_back(getnum);
        sum += getnum;
       
        countArr[getnum+4000]++; 
    }

    // 산술평균
    double avg = sum/(double)N;
    //오름차순 정렬 
    sort(numberArr.begin(), numberArr.end());
    // 산술 평균 출력
    cout << floor(avg + 0.5) << '\n';
    // 중앙값 출력
    printf("%d\n", numberArr[N/2]);

    // 최빈값 출력
    int maxIndex = max_element(countArr, countArr+8001) - countArr;  // 가장 큰 인덱스 출력
    //int maxMinus = *max_element(minusArr, minusArr+4000);   // 가장 큰 인덱스 출력
    int firstMaxNum = countArr[maxIndex];
    int firstMaxIndex = maxIndex;

    countArr[maxIndex] = -1; // 최빈값의 개수가 같을때 가장 작은값은 -1로 변경
    maxIndex = max_element(countArr, countArr+8001) - countArr; 
    int secondMaxNum = countArr[maxIndex];
    if (firstMaxNum > secondMaxNum)
    {
        printf("%d\n", firstMaxIndex-4000);
    }
    else
        printf("%d\n", maxIndex-4000);
    
    // 범위 출력
    int maxNum = *max_element(numberArr.begin(), numberArr.end());
    int minNum = *min_element(numberArr.begin(), numberArr.end());
    printf("%d", maxNum - minNum); 

    return 0;
}

