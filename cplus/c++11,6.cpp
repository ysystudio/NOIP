#include <iostream>
using namespace std;
int main(){
	long long a[7],b,s=1;
	for(int i=0;i<5;i++)
		cin>>a[i];
	while(s!=0){
		s=0;
		for(int i=1;i<5;i++){
			if(a[i]<a[i-1]){
				b=a[i-1];
				a[i-1]=a[i];
				a[i]=b;
				s+=1;
			}
		}
	}
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	return 0;	
}
