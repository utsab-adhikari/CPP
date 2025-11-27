
// Example program to demonstrate push_front and push_back in a list

#include<iostream>
#include<list>


using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

int main() {
    cout<<"<--- List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }

    // adding elements to front and back
    cars.push_front("Audi");
    cars.push_back("Toyota");
    
    cout<<"<--- Updated List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }
    return 0;
}