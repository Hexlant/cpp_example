//
// Created by henry on 2018. 8. 1..
//

#include "iostream"
#define LENGTH 10

using namespace std;

int main(void){


    int arr[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << arr << endl;

    for(int i = 0; i < LENGTH; i++){

        cout << " arr[" << i << "] = " << arr[i] << " ";
        cout << "*(arr + " << i << ") = " << *(arr + i) << endl;
    }

    cout << arr + 1 << endl;

    return 0;

}