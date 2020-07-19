// 1038 : [기초-산술연산] 정수 2개 입력받아 합 출력하기1(설명)
// long long 
// 범위 ?9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

// int
// 범위 : ?2,147,483,648 ~ 2,147,483,647
#include <iostream>

using namespace std;

int main()
{
    double num1, num2;

    cin >> num1 >> num2;

    long long add = num1 + num2;

    cout << add;

    return 0;

}
