#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,gc;
	cout<<"Enter the two numbers:"<<endl;
	cin>>a>>b;
	if(b>a){
		swap(a,b);
	}
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0){
			gc=i;
		}
	}
	cout<<"gcd:"<<gc<<endl;
}
