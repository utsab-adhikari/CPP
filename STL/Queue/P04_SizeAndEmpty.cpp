#include <iostream>
#include <queue>
#include <deque> 

using namespace std;

int main() {

    deque<string> carList = {"Volvo", "BMW", "Ford", "Mazda"};
    queue<string> cars(carList);


	cout<<"Empty Status: "<<cars.empty()<<endl;

	cout<<"Size of the Queue: "<<cars.size()<<endl;
    
    cout<<"Front: "<<cars.front()<<endl;
    cout<<"Back: "<<cars.back()<<endl;


    return 0;
}
