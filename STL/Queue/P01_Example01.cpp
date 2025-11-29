#include <iostream>
#include <queue>
#include <deque> 

using namespace std;

int main() {
    deque<string> carList = {"Volvo", "BMW", "Ford", "Mazda"};
    queue<string> cars(carList);

    while (!cars.empty()) {
        cout << cars.front() << endl; 
        cars.pop();                     
    }

    return 0;
}
