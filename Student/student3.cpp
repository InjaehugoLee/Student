#include <iostream>
#include <vector>
#include "student2.h"
using namespace std;
// array of students
// findMin(), findMax() ==> ����(grade)

//Student* findMin(vector<Student*>& vec)
//{
//    Student* ret = vec[0];
//    for (int i = 1; i < vec.size(); i++)
//        if (vec[i]->getGrade() < ret->getGrade())
//            ret = vec[i];
//    return ret;        
//    
//}
//void findMinNprint(vector<Student*>& vec)
//{
//    Student* p = findMin(vec);
//    p->show();
//}
Student* findMax(vector<Student*>& vec)
{
    Student* ret = NULL;
    int max = 0;
    for (auto t:vec)
    {
   
        if (t->getGrade() > max)
        {
            ret = t;
            max = t->getGrade();
        }
    }
    return ret;
}
//void findMaxNprint(vector<Student*>& vec)
//{
//    Student* p = findMax(vec);
//    p->show();
//}

int main()
{
    vector<Student*> vec;

    vec.push_back(new Student("ȫ�浿", "1234ABB", 50));
    vec.push_back(new Student("ȫ�̵�", "2234ABB", 55));
    vec.push_back(new Student("ȫ�ﵿ", "3234ABB", 45));
    vec.push_back(new Student("ȫ�絿", "4234ABB", 100));
    vec.push_back(new Student("ȫ����", "5234ABB", 10));

   

   /* Student* p1 = findMin(vec);
    p1->show();*/

    cout << "======================================\n";

    /*findMaxNprint(vec);*/

    Student* p2 = findMax(vec);
    p2->show();
    

    for (auto t : vec) {
        delete t;
    }
    vec.clear();
}