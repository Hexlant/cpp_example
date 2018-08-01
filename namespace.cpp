//
// Created by henry on 2018. 8. 1..
//

#include "iostream"

namespace ns_a{
    int value = 100;
    int func(int s){
        return s;
    }
}

namespace ns_b{
    int value = 200;
    int func(int s){
        return s * 10;
    }
}

using namespace std;
using namespace ns_b;

int main(void){

      cout << ns_a::value << endl;
      cout << ns_b::value << endl;

      cout << ns_b::func(10) << endl;
      cout << func(20) << endl;

      return 0;
}