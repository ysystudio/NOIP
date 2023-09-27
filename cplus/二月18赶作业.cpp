#include <iostream>
using namespace std;
int jiankang(){
	int a;
	cin>>a;
	double sleep[a]={0},water[a]={0};
	string sport[a];
	for(int i=0;i<a;i++){
		cin>>sleep[i];
		cin>>water[i];
		cin>>sport[i];
	}
	for(int i=0;i<a;i++){
		if(sleep[i]>=7 &&sleep[i]<=8 && water[i]>=1500 && sport[i]=="Yes"){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}


#include <iostream>
using namespace std;
int DNA(){
	int a,b,c,len;
	cin>>a>>b>>c;
	string dna;
	cin>>dna;
	cin>>len;
	for(int i=1;i<=len;i++){
		cout<<dna[a*i*i+b*i+c-1];
	}
	return 0;
}


#include <iostream>
using namespace std;
int xingyun(){
	int a,len=0,i=0,x=0;
	cin>>a;
	while(x<a){
		if(i%10!=4 && i/10!=4 && i/100!=4 && i%4!=0){
			len+=i;
			x++;
		}
		i++;
	}
	cout<<len;
	return 0;
}



#include<stack>
#include<iostream>
using namespace std;
int min(){
	char n;
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



#include<stack>
#include<iostream>
using namespace std;
int kuohao(){
	char n;
	stack<char> s;
	cin>>n;
	while(n!='@'){
		if(!s.empty()){
			if((n==')' && s.top()=='(') || int(n)-2==int(s.top())){
				s.pop();
			}
			else if(n=='('||n==')'||n==']'||n=='['||n=='{'||n=='}'){
				s.push(n);
			}
		}
		else if(n=='('||n==')'||n==']'||n=='['||n=='{'||n=='}'){
			s.push(n);
		}cin>>n;
	}
	if(s.empty()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}



#include<iostream>
using namespace std;
int man(){
	int a,x=1,t;
	cin>>a;
	int age[a];
	for(int i=0;i<a;i++){
		cin>>age[i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<a-1;i++){
			if(age[i]<age[i+1]){
				t=age[i];
				age[i]=age[i+1];
				age[i+1]=t;
				x++;
			}
		}
	}
	for(int i=0;i<=a/2;i++){
		if(i==a-i-1){
			cout<<age[i]<<endl;
			return 0;
		}
		cout<<age[i]<<endl;
		cout<<age[a-i-1]<<endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
int main(){
	int x,nian[10],t;
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>nian[i];
	}
	for(int i=0;i<x;i++){
		t=nian[i];
		while(t/1000!=t/100)
	}
}
