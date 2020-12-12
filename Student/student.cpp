#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	string name;
	string snumber;
	string major;
	int birth;
	int sex;
	int grade;

public:
	Student() {
		
		name = "";
		snumber = "";
		major = "";
		birth = 0;
		sex = 0;
		grade = 0;

	}

	Student(string n, string snumber, string major, int birth, int sex, int grade) {

		name = n;
		this->snumber = snumber;
		this->major = major;
		this->birth = birth;
		this->sex = sex;
		this->grade = grade;

	}
	~Student(){}

	void setname(string n) {
		name = n;
	};
	string getname() {
		return name;
	};
	void setsnumber(string snumber) {
		this->snumber = snumber;
	};
	string getsnumber() {
		return snumber;
	};
	void setmajor(string m) {
		major = m;
	};
	string getmajor() {
		return major;
	};
	void setbirth(int b) {
		birth = b;
	};
	int getbirth() {
		return birth;
	};
	void setsex(int s) {
		sex = s;
	};
	int getsex() {
		return sex;
	};
	void setgrade(int grade) {
		this->grade = grade;
	};
	int getgrade() {
		return grade;
	};

	void show();
};


void Student::show() {

	cout << "�̸��� : " << name << endl;
	cout << "�й��� : " << snumber << endl;
	cout << "������ : " << major << endl;
	cout << "��������� : " << birth << endl;
	cout << "������ : " << sex << endl;
	cout << "�г��� : " << grade << endl;
};

int main()
{

	Student P1("������", "201003125", "�빮��", 920122, 1, 1);
	P1.show();

	//P1.name = "�����";

	P1.setname("������");
	P1.show();

	//cout << P1.getname() << endl;

}
