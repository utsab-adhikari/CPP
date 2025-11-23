// Default Constructor

#include<iostream>
#include<string.h>

using namespace std;

class Student {
    public:
        char name[20];
        int rollNo;
    
    Student() {
        strcpy(name, "Utsab Adhikari");
        rollNo = 31;
        // this is the default constructor body
        /* here i assigned name as Utsab Adhikari 
        and rollNo as 31, so we can initialize the 
        data member of the class while creating objects
        In general Default Constructor is use to initialize 
        the data members:
                if character then ""
                if int then 0 
        */
       cout<<"\nConstructor is Called"<<endl;
    }

    void display() {
        cout<<"\n<--- Details -->"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        // class method or function 
    }
};

int main() {

    Student S1;
    // here we created a object of the class Student
    // the default constructor is called while creating the object 
    
    S1.display();

    return 0;
}