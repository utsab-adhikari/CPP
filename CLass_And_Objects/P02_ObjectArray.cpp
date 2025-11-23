// Array of Object derived from a class;

#include<iostream>

using namespace std;

class Car {
    public:
        char brandName[20];
        int modelNo;

    void display() {
            cout<<"Brand Name: "<<brandName<<endl;
            cout<<"Model No: "<<modelNo<<endl;
    }
};

int main() {
    Car C[5];

    cout<<"\n<--- Enter Cars Details -->"<<endl;
    
    for(int i=0;i<5;i++) {
        cout<<"Car No: "<<i+1<<endl;
        cout<<"Brand Name: ";
        cin>>C[i].brandName;
        cout<<"Model No: ";
        cin>>C[i].modelNo;
        cout<<endl;
    }
    
    cout<<"\n<---Cars Details --->"<<endl;
    for(int j=0;j<5;j++) {
         cout<<"\nCar No: "<<j+1<<endl;
         C[j].display();
    }
    
    return 0;
}

