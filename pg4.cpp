#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int fact=1;
	for(int i=n;i>=1;i--){
		fact*=i;
	}
	cout<<"The factorial of the number "<<n<<" is "<<fact<<endl;
}
