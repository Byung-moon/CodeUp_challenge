// 8����, 10����, 16���� ��ȯ
// std::cout<<"8����: "<< std::oct <<input<<"\n";
//  std::cout<<"10����: "<< std::dec <<input<<"\n";
//  std::cout<<"16����: "<< std::hex <<input<<"\n";

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> hex >> num;

    cout << oct << num << endl;

    return 0;
}