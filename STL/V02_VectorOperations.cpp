// Vector Operations

#include<iostream>
#include<vector>

using namespace std;

vector<string> cars = {"Lambo", "Bmw", "Supra", "RR", "La-F"};

int main() {
    // at() 
    
    cout<<"Operation cars.at(0): "<<cars.at(0)<<endl;// gives the item at index 0 
    cout<<"Operation cars.at(4): "<<cars.at(4)<<endl; // gives the item at index 4 

    // changing vector element

    cout<<"\nBefore Change: "<<cars.at(3)<<endl; // before
    cars[3] = "Mustang";
    cout<<"\nAfter Change: "<<cars.at(3)<<endl; // after

    // push_back() for adding elements 

    cout<<"\n<--- Before Push_Back Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }

    cars.push_back("RR");

    cout<<"\n<--- After Push_Back Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }

    // pop_back() for deleting or pop a element;

cout<<"\n<--- Before Pop_Back Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }

    cars.pop_back();

    cout<<"\n<--- After Pop_Back Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }

    return 0;
}