//
// Created by henry on 2018. 8. 1..
//

#include "iostream"

using namespace std;

int main(void)
{
    cout << "size of char        : " << sizeof(char) << endl;
    cout << "size of short       : " << sizeof(short) << endl;
    cout << "size of long        : " << sizeof(long) << endl;
    cout << "size of int         : " << sizeof(int) << endl;
    cout << "size of float       : " << sizeof(float) << endl;
    cout << "size of double      : " << sizeof(double) << endl;
    cout << endl;

    cout << "size of char        : " << sizeof(char*) << endl;
    cout << "size of short       : " << sizeof(short*) << endl;
    cout << "size of long        : " << sizeof(long*) << endl;
    cout << "size of int         : " << sizeof(int*) << endl;
    cout << "size of float       : " << sizeof(float*) << endl;
    cout << "size of double      : " << sizeof(double*) << endl;

    return 0;
}