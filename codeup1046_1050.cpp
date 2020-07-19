// 1046 : [기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기
// 1047 : [기초-비트시프트연산] 정수 1개 입력받아 2배 곱해 출력하기(설명)
// 1048 : [기초-비트시프트연산] 한 번에 2의 거듭제곱 배로 출력하기(설명)
// 1049 : [기초-비교연산] 두 정수 입력받아 비교하기1(설명)
// 1065 : [기초-조건/선택실행구조] 정수 3개 입력받아 짝수만 출력하기(설명)
// 1071 : [기초-반복실행구조] 0 입력될 때까지 무한 출력하기1(설명)
#include <iostream>

using namespace std;

int main()
{
    /*  1046번
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    long long sum = num1 + num2 +num3;
    double avg = sum/3.0;

    cout << sum << endl;

    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    */

    /*  1047번
    int num;
    cin >> num;

    cout << (num<<1);
    */

    /*  1048번
    int num, absNum;
    cin >> num >> absNum;

    cout << (num << absNum);
    */ 

    //1049번
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

    //1065번
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

    //1066번
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

    // 1071번
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