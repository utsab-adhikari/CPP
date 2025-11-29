#include <iostream>
#include <queue>
#include <deque> 

using namespace std;

int main() {

    deque<string> carList = {"Volvo", "BMW", "Ford", "Mazda"};
    queue<string> cars(carList);

    // front
  	cars.push("Tata Nano");
  	cars.push("Mustang");
  	
  	cout<<"Front: "<<cars.front()<<endl;
  	cout<<"Back: "<<cars.back()<<endl;

	cars.pop();
	cout<<"Poped.."<<endl;
	
	cout<<"Front: "<<cars.front()<<endl;
  	cout<<"Back: "<<cars.back()<<endl;


    return 0;
}
