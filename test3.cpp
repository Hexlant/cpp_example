//
// Created by henry on 2018. 8. 5..
//

#include <iostream>

using namespace std;


int func1(int a)
{

    static int result = 0;
    result = result + a;

    return result;
}
int func2(int a)
{
    int result = 0;
    result = result + func1(a);
    return result;
}


int main()
{
    cout << func1(10) << endl;
    cout << func2(10) << endl;

    cout << func1(20) << endl;
    cout << func2(20) << endl;
}