//
// Created by henry on 2018. 8. 1..
//

#include "iostream"

using namespace std;

int main(void){

//    int* a = 4;

    int* a;
    int b = 4;
    a = &b;

    cout << "address = " << a << endl;
    cout << "value = " << *a << endl;


    int* ptr = NULL;
    int val1 = 1, val2 = 2;
    cout << "val1 = " << val1 << " val2 = " << val2 << endl;

    ptr = &val1;
    val2 = *ptr;
    cout << "val1 = " << val1 << " val2 = " << val2 << endl;

    return 0;
}