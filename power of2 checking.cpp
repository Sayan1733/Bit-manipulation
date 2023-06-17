#include<iostream>
using namespace std;
bool ispowerof2(int n){
	return (n && !(n&(n-1)));
}

int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(ispowerof2(n)){
		cout<<"True";
	}
	else
		cout<<"False";
	
	return 0;
}
