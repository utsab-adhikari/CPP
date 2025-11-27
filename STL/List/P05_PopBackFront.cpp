// Poping Elements from Front and Back of a List

#include<iostream>
#include<list>


using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

int main() {
    cout<<"<--- List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }

    // removing elements from front and back
    cars.pop_front();
    cars.pop_back();
    
    cout<<"<--- Updated List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }
    return 0;
}