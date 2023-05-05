#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter the numbers:"<<endl;
	cin>>n;
	while(n!=0){
		int temp=n%10;
		sum+=temp;
		n/=10;
	}
	cout<<"Sum"<<sum<<endl;
}
