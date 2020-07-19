// 1039 : [기초-산술연산] 정수 2개 입력받아 합 출력하기2(설명)
// 1040 : [기초-산술연산] 정수 1개 입력받아 부호 바꿔 출력하기(설명)
// 1042 : [기초-산술연산] 정수 2개 입력받아 나눈 몫 출력하기(설명)
// 1043 : [기초-산술연산] 정수 2개 입력받아 나눈 나머지 출력하기(설명)
// 1045 : [기초-산술연산] 정수 2개 입력받아 자동 계산하기
#include <iostream>

using namespace std;

int main()
{   
    /* 1039번
    long long num1, num2;

    cin >> num1 >> num2;

    cout << num1+num2 ;
    */

    /* 1040번
    int num1;

    cin >> num1;

    cout << -num1;
    */

   /*   1042번
    int num1, num2;
    cin >> num1 >> num2;

    cout << num1/num2; 
    */

   /* 1043번
   int num1, num2;
   cin >> num1 >> num2;

   cout << num1%num2;
    */

   /*   1044번   
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