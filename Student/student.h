#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	string snumber;
	string major;
	int birth;
	int sex;
	int grade;

public:
	Student()
	{
		name = "";
		snumber = "";
		major = "";
		birth = 0;
		sex = 0;
		grade = 0;

	};
	~Student() {};
	void setData(string name, string snumber, string major, int birth, int sex, int grade) {
		this->name = name;
		this->snumber = snumber;
		this->major = major;
		this->birth = birth;
		this->sex = sex;
		this->grade = grade;
	};
	void getData() {};
	void show();
};

void Student::show()
{
	cout << "name : " << name << endl;
	cout << "snumber : " << snumber << endl;
	cout << "major : " << major << endl;
	cout << "birth : " << birth << endl;
	cout << "sex : " << sex << endl;
	cout << "grade : " << grade << endl;

};