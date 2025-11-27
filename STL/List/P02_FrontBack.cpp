// Example program to demonstrate the use of list in C++

#include<iostream>
#include<list>


using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

int main() {
    cout<<"<--- List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }

    // getting front and back elements
    cout<<"Front Car: "<<cars.front()<<endl;
    cout<<"Back Car: "<<cars.back()<<endl;
    return 0;
}