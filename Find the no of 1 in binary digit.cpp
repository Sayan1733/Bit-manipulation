#include<iostream>
using namespace std;
int findnoof1(int n){
	int i=0;
	while(n!=0){
		n=(n & (n-1));
		i++;
	}
	return i;
}
int main(){
	int n,i=0;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"The no of 1 in "<<n<<" is:"<<findnoof1(n);
	return 0;
}
