#include <iostream>
#include <queue>
#include <deque> 

using namespace std;

int main() {

    deque<string> carList = {"Volvo", "BMW", "Ford", "Mazda"};
    queue<string> cars(carList);

    // front
    cout<<"Front: "<<cars.front()<<endl;
    cout<<"Back: "<<cars.back()<<endl;


    return 0;
}
