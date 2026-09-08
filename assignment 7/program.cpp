#include <iostream>
using namespace std;

class Student
{
    int rollno, marks;

public:
    void accept(int r, float m)
    {
    rollno = r;
    marks = m;
    }

    void display()
    {
        cout << rollno << "\t" << marks << endl;
    }
    Student()
    {
  rollno=10;
  marks=100;


    }


    Student(int roll, int mks)
    {
  rollno=roll;
  marks=mks;


    }


};

int main()
{
    Student s1, s2;
    Student s3(20, 34);

    cout << "Enter roll no and marks for S1: ";
    //s1.accept(30, 76.45);

    cout << "Enter roll no and marks for S2: ";
   // s2.accept(57, 98.23);

    cout << "Enter roll no and marks for S3: ";
    //s3.accept();

    cout << "\nRoll No\tMarks\n";

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
