#include<stack>
#include<iostream>
using namespace std;
int main(){
	char h[10001],n;
	stack<char> s;
	while(cin>>n){
		if(!s.empty()){
			if(int(n)+32==int(s.top()) || int(n)-32==int(s.top())){
				s.pop();
			}
			else{
				s.push(n);
			}
		}
		else{
			s.push(n);	
		}
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}

