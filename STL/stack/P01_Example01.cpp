// Example program to demonstrate stack in C++

#include<iostream>
#include<stack>

using namespace std;

stack<string> cars;

int main() {
    // adding elements to stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout<<"<--- Stack of Cars --->"<<endl;
    // displaying stack elements
    stack<string> tempStack = cars; // create a copy to display elements
    while(!tempStack.empty()) {
        cout<<tempStack.top()<<endl;
        tempStack.pop();
    }
    return 0;
}