//
// Created by henry on 2018. 8. 2..
//

#include "iostream"

using namespace std;

struct Student{
    int id;
    char* name;
    float grade;

};

int main(void){

    Student s1;

    s1.id = 1;
    s1.name = "Henry";
    s1.grade = 3.2;

    Student s2 = {2, "Sam", 3.6};

    cout << s1.id << " " << s1.name << " " << s1.grade << endl;
    cout << s2.id << " " << s2.name << " " << s2.grade << endl;

    return 0;
}