#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n){
	bool f=true;
	for(int i=2;i<=sqrt(n);i++) {		
		if(n%i==0){
		  f=false;
		  break;
		}			
	}
	cout<<f<<endl;
	return f; 
}
int main(){
	int a;	
	cin>>a;
	if(prime(a))
		cout<<"������";
	else
		 cout<<"��������"; 
	return 0;
}

