// 1039 : [����-�������] ���� 2�� �Է¹޾� �� ����ϱ�2(����)
// 1040 : [����-�������] ���� 1�� �Է¹޾� ��ȣ �ٲ� ����ϱ�(����)
// 1042 : [����-�������] ���� 2�� �Է¹޾� ���� �� ����ϱ�(����)
// 1043 : [����-�������] ���� 2�� �Է¹޾� ���� ������ ����ϱ�(����)
// 1045 : [����-�������] ���� 2�� �Է¹޾� �ڵ� ����ϱ�
#include <iostream>

using namespace std;

int main()
{   
    /* 1039��
    long long num1, num2;

    cin >> num1 >> num2;

    cout << num1+num2 ;
    */

    /* 1040��
    int num1;

    cin >> num1;

    cout << -num1;
    */

   /*   1042��
    int num1, num2;
    cin >> num1 >> num2;

    cout << num1/num2; 
    */

   /* 1043��
   int num1, num2;
   cin >> num1 >> num2;

   cout << num1%num2;
    */

   /*   1044��   
    int num;
    cin >> num;
    long long longNum = num;

    cout << longNum+1;
    */

    long long num1, num2;

    cin >> num1 >> num2;

    float devidedNum = num1/(float)num2;

    cout << num1+num2 << endl;
    cout << num1-num2 << endl;
    cout << num1*num2 << endl;
    cout << (num1/num2) << endl;
    cout << num1%num2 << endl;

    cout << fixed;
    cout.precision(2);
    cout << devidedNum;

    return 0;
}