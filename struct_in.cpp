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

struct MasterStudent{
    Student student;
    char* major;
};

int main(void){

    MasterStudent ms;

    ms.student.id = 1;
    ms.student.name = "Henry";
    ms.student.grade = 3.2;
    ms.major = "Computer";

    cout << ms.student.id << " " << ms.student.name << " " << ms.student.grade << " " << ms.major << endl;


    return 0;
}