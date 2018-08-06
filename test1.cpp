//
// Created by henry on 2018. 8. 5..
//

#include <iostream>

using namespace std;

struct Data
{
    char *name;
    int number;
};

Data CreateData(char* _name, int _number)
{
    Data result;
    result.name = new char[ strlen(_name)+1 ];
    strcpy(result.name, _name);
    result.number = _number;
    return result;
}

int main()
{
    char _name[32] = "EOS";

    Data data1 = CreateData(_name, 100);
    Data data2 = data1;
    strcpy(data1.name, "Ethereum");

    cout << data1.name << endl;
    cout << data2.name << endl;
    return 0;
}