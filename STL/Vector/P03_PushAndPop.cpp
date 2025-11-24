// Vector Operations

#include<iostream>
#include<vector>

using namespace std;

vector<string> cars = {"Lambo", "Bmw", "Supra", "RR", "La-F"};

int main() {

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