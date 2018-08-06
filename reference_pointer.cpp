//
// Created by henry on 2018. 8. 6..
//


#include "iostream"

using namespace std;

void swapPointer(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){


    int a = 10, b = 20;
    swapPointer(&a, &b);

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;


    int c = 10, d = 20;
    swapReference(c, d);
    cout << "c =" << c << endl;
    cout << "d =" << d << endl;
    return 0;

}
