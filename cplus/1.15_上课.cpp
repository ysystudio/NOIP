#include <iostream>
using namespace std;
int g(int a,int b){
	if(a==b)return a;
	else{
		if(a>b)g(a-b,b);
		else g(b-a,a);
	}
}
int gmain(){
	int a,b,c;
	cin>>a>>b;
	c=g(a,b);
	cout<<c;
	return 0;
}



#include <iostream>
using namespace std;
int goc(long long a,long long b){
	if(b==0){
		return a;
	}
	return goc(b,a%b);
}
int main(){
	long long a,b,c;
	cin>>a>>b;
	c=goc(a,b);
	cout<<c;
}
