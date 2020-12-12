#include <iostream>
#include <string>
using namespace std;

#define MALE   1
#define FEMALE 2

class Student
{
private:
    string name, snumber, major;
    int birth, sex, grade;


public:
    Student();
    Student(string _name="", string _snumber = "1234",
        string _major = "ÇÑ±¹ÇĞ", int _birth = 0,
        int _sex = MALE, int _grade = 0);
    Student(string _name, string _snumber, int _grade)
    {
        name = _name;
        snumber = _snumber;
        grade = _grade;
    };

    ~Student() {};
  
    int getGrade() { return grade; }
    string getName() { return name; }
    string getSNumber() { return snumber; }

    void show() {

        cout << getName() << endl;
        cout << getSNumber() << endl;
        cout << getGrade() << endl;
    };
};