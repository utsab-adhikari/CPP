// Example of vector
#include<iostream>
#include<vector>

using namespace std;

vector<int> Ids = {10, 20 , 30 , 40};
vector<string> cars = {"Lambo", "Bmw", "Supra", "RR", "La-F"};

int main() {
    cout<<"\n<--- Ids --->"<<endl;
    for(int id: Ids) {
        cout<<" "<<id<<endl;
    }
    cout<<"\n<--- Cars --->"<<endl;
    for(string car: cars) {
        cout<<" "<<car<<endl;
    }
    return 0;
}