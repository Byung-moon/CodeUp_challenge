// ********�߿�**********
// endl ��ſ� '\n'�� ���� --> endl�� ���� flush���� �ϱ⶧���� ��û ���� 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //����� �ӵ� �ø��� --  �߿�
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