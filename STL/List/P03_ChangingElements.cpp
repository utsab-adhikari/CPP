// Changing Elements in a List

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

    cars.front() = "Opel";
    cars.back() = "Honda";
    cout<<"<--- Updated List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }
    return 0;
}