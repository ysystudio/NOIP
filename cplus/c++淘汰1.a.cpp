#include <iostream>
using namespace std;
int mn(){
	long long sum=0;
	int a;
	cin>>a;
	long long f[a];
	for(int i=0;i<a;i++){
		cin>>f[i];
	}
	for(int i=0;i<a;i++){
			sum+=f[i];
	}
	cout<<sum;
	return 0;
}


#include <iostream>
using namespace std;
int jiu(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++)
			cout<<j<<"*"<<i<<"="<<i*j<<" ";
		cout<<""<<endl;
	}
	return 0;
}


#include <iostream>
using namespace std;
int main(){
	long long a,s=0;
	cin>>a;
	int h[a];
	for(int i=0;i<a;i++)
		cin>>h[i];
	for(int i=0;i<a;i++){
		if(h[i]%2==0)
			s+=h[i];
	}
	cout<<s;
	return 0;
}
