// ********중요**********
// endl 대신에 '\n'를 쓰기 --> endl은 버퍼 flush까지 하기때문에 엄청 느림 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //입출력 속도 늘리기 --  중요
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    //vector <int> number;
    int N;
    cin >> N;
    int array[10001] = {0, };
    int getnum;

    for(int i; i < N; i++)
    {
        cin >> getnum;
        array[getnum]++;
    }

    int cntnum = 1;
    int outnum = 0;

    while(outnum != N)
    {
        if(array[cntnum] == 0)
        {
            cntnum++;
            //continue;
        }
        else
        {
            cout << cntnum << '\n';
            outnum++;
            array[cntnum]--;
        }
    }
    return 0;
}