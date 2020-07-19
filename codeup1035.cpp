// 8진수, 10진수, 16진수 변환
// std::cout<<"8진수: "<< std::oct <<input<<"\n";
//  std::cout<<"10진수: "<< std::dec <<input<<"\n";
//  std::cout<<"16진수: "<< std::hex <<input<<"\n";

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> hex >> num;

    cout << oct << num << endl;

    return 0;
}