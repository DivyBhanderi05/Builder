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
	
	int sum_hr,sum_min;
	
	cout<<"Enter Number 1 : ";
	cin>>o1.hr;
	cout<<"Enter D1 1 : ";
	cin>>o1.min;
	
	
	cout<<endl<<endl<<"Enter Number 2 : ";
	cin>>o2.hr;
	cout<<"Enter D1 2 : ";
	cin>>o2.min;
	
	
	cout<<endl<<"Number 1 :- "<<o1.hr<<"."<<o1.min<<endl<<endl;
	cout<<"Number 2 :- "<<o2.hr<<"."<<o2.min<<endl<<endl;
	
	sum_hr = o1.hr + o2.hr;
	sum_min = o1.min + o2.min;
	
	
	cout<<"Added Number :- "<<sum_hr<<"."<<sum_min<<endl;
}

int main(){
	divy o1;
	abhi o2;
	
	dhruv(o1,o2);
	
	return 0;
}
