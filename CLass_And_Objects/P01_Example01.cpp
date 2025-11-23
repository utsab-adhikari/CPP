// Example of Class & Object in C++

#include<iostream>

using namespace std;

class Student {
    public:
        int id;
        char name[20]; 
};

int main() {
    Student s1;
    cout<<"\nEnter Your Id:";
    cin>>s1.id;
    cout<<"\nEnter Your Name: ";
    cin>>s1.name;

    cout<<"\n<--- Details ---> "<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Id: "<<s1.id<<endl;

    return 0;
}