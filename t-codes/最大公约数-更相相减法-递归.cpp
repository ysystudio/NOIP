#include<iostream>
using namespace std;
int gy(int a,int b){
	if(a==b){
		return a;
	}else{//大-小，差放在大数的位置 
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
		return gy(a,b);
	}
}
int main(){
	int a,b;
	cin>>a>>b;	
	cout<<gy(a,b)<<endl;
	return 0;
}
