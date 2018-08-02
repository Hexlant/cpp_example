//
// Created by henry on 2018. 8. 2..
//

#include "iostream"

using namespace std;


//int main(void){
//
//    int target = 20;
//    int& ref = target;
//
//    cout << "target = " << target << endl;
//    cout << "ref = " << ref << endl;
//
//    cout << "&target = " << &target << endl;
//    cout << "&ref = " << &ref << endl;
//
//    ref = 1000;
//
//    cout << "target = " << target << endl;
//    cout << "ref = " << ref << endl;
//
//    return 0;
//}

int main(void){

    int val = 10;
    int* p = &val;

    int& ref = p;

    cout << "p = " << *p << endl;
    cout << "ref = " << ref << endl;

//    cout << "&target = " << &target << endl;
//    cout << "&ref = " << &ref << endl;
//
//    ref = 1000;
//
//    cout << "target = " << target << endl;
//    cout << "ref = " << ref << endl;

    return 0;
}