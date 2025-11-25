// Example of List

#include<iostream>
#include<list>


using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

int main() {
    cout<<"<--- List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }
    return 0;
}