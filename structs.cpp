#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int student_id;
    string major;
};

void print_student_info(Student s);
Student create_student(string name, int student_id, string major);


int main() {

    // structure = user defined data type used to store vars or arrays 
    Student student1, student2, student3;
    //assigning values
    student1.name = "Maddie";
    student1.student_id = 292;
    student1.major = "Biochemistry and Computer Science";
    cout << "Name: " << student1.name << endl;
    cout << "Student ID Num: " << student1.student_id << endl;
    cout << "Major: " << student1.major << endl;

    student2 = {"Zoe", 252, "Biochemistry"};
    print_student_info(student2);
    student3 = create_student("Oliver", 264, "Economics");
    print_student_info(student3);

    Student *ptr_student1;
    ptr_student1 = &student1;
    // after creating pointer to the struct, can deref to get values
    cout << (*ptr_student1).name << endl;
    // to change values
    ptr_student1->major = "Molecular Biology and Computer Science";
    ptr_student1->name = "Madeline"; // the arrow does the same job as * (both dereference)
    print_student_info(student1);
    

    return 0;
}

void print_student_info(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Student ID Num: " << s.student_id << endl;
    cout << "Major: " << s.major << endl;

}

Student create_student(string name, int student_id, string major) {
    Student s;
    s.name = name;
    s.student_id = student_id;
    s.major = major;
    return s;
}