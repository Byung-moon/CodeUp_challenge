// 1046 : [����-�������] ���� 3�� �Է¹޾� �հ� ��� ����ϱ�
// 1047 : [����-��Ʈ����Ʈ����] ���� 1�� �Է¹޾� 2�� ���� ����ϱ�(����)
// 1048 : [����-��Ʈ����Ʈ����] �� ���� 2�� �ŵ����� ��� ����ϱ�(����)
// 1049 : [����-�񱳿���] �� ���� �Է¹޾� ���ϱ�1(����)
// 1065 : [����-����/���ý��౸��] ���� 3�� �Է¹޾� ¦���� ����ϱ�(����)
// 1071 : [����-�ݺ����౸��] 0 �Էµ� ������ ���� ����ϱ�1(����)
#include <iostream>

using namespace std;

int main()
{
    /*  1046��
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    long long sum = num1 + num2 +num3;
    double avg = sum/3.0;

    cout << sum << endl;

    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    */

    /*  1047��
    int num;
    cin >> num;

    cout << (num<<1);
    */

    /*  1048��
    int num, absNum;
    cin >> num >> absNum;

    cout << (num << absNum);
    */ 

    //1049��
    /*
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << 1;
    } 
    else
    {
        cout << 0;
    } 
    */

    //1065��
    /*
    int a, b, c;
    cin >> a >> b >> c;

    if ((a%2) == 0)
        cout << a << endl;
    if ((b%2) == 0)
        cout << b << endl;
    if ((c%2) == 0)
        cout << c << endl;
    */

    //1066��
    /*
    int a, b, c;
    cin >> a >> b >> c;

    if ((a%2) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
        
    if ((b%2) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
       
    if ((c%2) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    */

    // 1071��
    int num;

    while(1)
    {
        cin >> num;
        if(num == 0)
        {
            break;
        }
        else
        {
            cout << num << endl;
        }
        
    }
    return 0;
}