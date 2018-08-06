//
// Created by henry on 2018. 8. 5..
//

#include <iostream>

using namespace std;

int main()
{
    char table[32] = "My Name Is Ethereum";
    char* pChar = table;
    char** ppChar = &pChar;


    cout << pChar + 1   << endl;
    cout << *pChar + 2  << endl;
    cout << *ppChar + 3 << endl;
    cout << **ppChar + 4<< endl;

    return 0;
}