// 1072 : [����-�ݺ����౸��] ���� �Է¹޾� ��� ����ϱ�(����)
// 1073 : [����-�ݺ����౸��] 0 �Էµ� ������ ���� ����ϱ�2(����)
// 1074 : [����-�ݺ����౸��] ���� 1�� �Է¹޾� ī��Ʈ�ٿ� ����ϱ�1(����)
#include <iostream>

using namespace std;

int main()
{
    // No.1072
    /*
    int n;
    cin >> n;
    int number;

    for(int i=0; i<n; i++)
    {
        cin >> number;
        cout << number << endl;
    }
    */

    
    // No.1073
    /*
    int number;
    
    while(1)
    {
        cin >> number;
        if (number == 0)
        {
            break;
        }
        else
        {
            cout << number << endl;
        }
    }
    */
    
    // 1093 [����-1�����迭] �̻��� �⼮ ��ȣ �θ���1(����)
    /*
    int callNum;
    cin >> callNum;

    int student[23] = {};
    int attendNum;

    for (int i = 0; i < callNum; i++)
    {
        cin >> attendNum;
        student[attendNum-1] += 1;
    }

    for (int i = 0; i < 23; i++)
    {
        cout << student[i] << ' ';
    }
    */
    
    // 1095 : [����-1�����迭] �̻��� �⼮ ��ȣ �θ���3(����)
    int callNum;
    cin >> callNum;

    int student[23] = {};
    int attendNum;

    for (int i = 0; i < callNum; i++)
    {
        cin >> attendNum;
        student[attendNum-1] += 1;
    }

    for (int i = 0; i < 23; i++)
    {
        if (student[i])
        {
            cout << i+1;
            break;
        }
        
    }
    
    return 0;
}