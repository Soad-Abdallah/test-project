#include <iostream>

using namespace std;

int add_fun(int x, int y)
{

    int z=x+y;
    return z;
}

int main()
{
    int num1,num2;
    cout << "please enter first number : ";
    cin>>num1;

    cout << "please enter second number : ";
    cin>>num2;
    cout<<num1 << "+" << num2 << "=" << add_fun(num1,num2);
    return 0;
}
