#include<iostream>
using namespace std;
int findbit(int n,int pos){
	return((n&(1<<pos))!=0);
}
int main(){
	int n,i;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"Enter the position:";
	cin>>i;
	cout<<"The bit in the "<<i<<" th position is: "<<findbit(5,2);
	return 0;
}
