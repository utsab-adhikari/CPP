// Performing the vector operations: size() and empty(); 

#include<iostream>
#include<vector>

using namespace std;

vector<string> cars = {"Lambo", "Bmw", "Supra"};

int main() {
    // check the size of the vector
    cout<<"The size of the vector is: "<<cars.size();

    // checks the vector is empty: 1/0
    if(cars.empty()) {
        cout<<"\n The vector is empty"<<endl;
    } else {
        cout<<"\nThe vector is not empty"<<endl;
    }
    

    // pop_back() for deleting or pop a element;

    cout<<"\n<--- Before Pop_Back Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }

    cars.pop_back();
    cars.pop_back();
    cars.pop_back();

    //all the element/items are poped, so we should get empty() == 1

    cout<<"\nThe size of the vector is: "<<cars.size();

    if(cars.empty()) {
        cout<<"\nThe vector is empty"<<endl;
    } else {
        cout<<"\nThe vector is not empty"<<endl;
    }

    return 0;
}