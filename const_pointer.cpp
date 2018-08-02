//
// Created by henry on 2018. 8. 2..
//

#include "iostream"

using namespace std;


int main(void){

    int val1 = 10;
    int val2 = 20;

    const int constVal1 = 100;
    int const constVal2 = 200;

    const int* p1 = &val1;
    int* const p2 = &val1;
    int const* p3 = &val1;

    p1 = &constVal1;
    p3 = &constVal2;
//    p3 = &val2;
//    *p1 = 30;

    cout << *p1 << endl;

    return 0;
}