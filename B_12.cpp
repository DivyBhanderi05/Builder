#include<iostream>

using namespace std;

class abhi;
class divy{
	private:
		int hr;
		int min;
		int sec;
	
	friend void dhruv(divy,abhi);
};

class abhi{
	private:
		int hr;
		int min;
		int sec;
	
	friend void dhruv(divy,abhi);
};

void dhruv(divy o1, abhi o2){
	
	int sum_hr;
	
	cout<<"Enter Number 1 : ";
	cin>>o1.hr;

	
	
	cout<<endl<<endl<<"Enter Number 2 : ";
	cin>>o2.hr;
	
	
	
	cout<<endl<<"Number 1 :- "<<o1.hr<<endl<<endl;
	cout<<"Number 2 :- "<<o2.hr<<endl<<endl;
	
	sum_hr = o1.hr + o2.hr;

	
	
	cout<<"Added Number :- "<<sum_hr<<endl;
}

int main(){
	divy o1;
	abhi o2;
	
	dhruv(o1,o2);
	
	return 0;
}
