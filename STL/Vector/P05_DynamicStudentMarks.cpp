#include<iostream>
#include<vector>

using namespace std;

vector<int> marks;

int main() { 
	int N, i,j; 
	float total =0;
	cout<<"Enter Number of Students:";
	cin>>N;

	cout<<"\n<-- Enter "<<N<<" Students makrs -->"<<endl;
	for( i=0;i<N;i++) {
		int num;
		cout<<"Enter Marks of Student "<<i+1<<" : ";
		cin>>num;
		marks.push_back(num);
	}
	cout<<endl;


	for(int mark: marks) {
		cout<<"Marks of Student "<<++j<<" : "<<mark<<endl;
		total = total + mark;
	}

	cout<<endl;

	int max = marks.at(0);

	for(int mark: marks) {
		if(mark>max) {
			max = mark;
		}
	}
	
	int min = marks.at(0);

	for(int mark: marks) {
		if(mark<min) {
			min = mark;
		}
	}
		

		cout<<"\nThe Highest Marks : "<<max<<endl;
		cout<<"\nThe Lowest Marks : "<<min<<endl;
		cout<<"\nThe Average Marks : "<<total/N<<endl;

	
	return 0;
}
