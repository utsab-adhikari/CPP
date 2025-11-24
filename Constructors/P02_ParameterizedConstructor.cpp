// Default Constructor

#include <iostream>
#include <string.h>

using namespace std;

class Student
{
public:
    char name[20];
    int rollNo;

    Student()
    {
        strcpy(name, "");
        rollNo = 0;
        cout << "\nDefault Constructor is Called" << endl;
        // here data members initialized to null/0 
    }

    Student(char n[20], int r)
    {
        strcpy(name, n);
        rollNo = r;
        cout << "\nParameterized Constructor is Called" << endl;
        // putting value in data member
    }

    void display()
    {
        cout << "\n<--- Details -->" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        // class method or function
    }
};

int main()
{

    Student S1("Utsab", 31);

    S1.display();

    return 0;
}