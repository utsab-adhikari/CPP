

#include<iostream>
#include<list>


using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

int main() {
    cout<<"<--- List of Cars --->"<<endl;
    for(string car: cars) {
        cout<<car<<endl;
    }

    // checking size and if list is empty
    cout<<"Size of List: "<<cars.size()<<endl;
    cout<<"Is List Empty? "<<(cars.empty() ? "Yes" : "No")<<endl;

    return 0;
}