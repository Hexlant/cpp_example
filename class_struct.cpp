//
// Created by henry on 2018. 8. 5..
//

#include <iostream>
using namespace std;

struct StructStudent{
    int id;
    char* name;
    float grade;

    void show(){
        cout << id << " " << name << " " << grade << endl;
    }
};

class ClassStudent {

    private:
        int id;
        char* name;
        float grade;

public:
    void init(int _id, char* _name, float _grade);
    void show();

};

void ClassStudent::init(int _id, char* _name, float _grade){
    id = _id;
    name = _name;
    grade = _grade;
}



void ClassStudent::show() {
    cout << id << " " << name << " " << grade << endl;
}


int main(void) {

    StructStudent struct_student = {2, "Sam", 3.6};
    struct_student.show();

    ClassStudent class_student;

    class_student.init(1, "Henry", 2.2);
    class_student.show();


    return 0;

}

