#include <iostream>


using namespace std;
int wacao(){
	int a,s=0,x=1,t;
	cin>>a;
	int h[a];
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<a-1;i++){
			if(h[i]>h[i+1]){
				t=h[i];
				h[i]=h[i+1];
				h[i+1]=t;
				x+=1;
				s+=1;
			}	
		}
	}
	cout<<s;
}


#include <iostream>
using namespace std;
int junp(){
	int a;
	cin>>a;
	int h[a],jie[a]={0};
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	for(int i=0;i<a-1;i++){
		if(abs(h[i]-h[i+1])<a)
			jie[abs(h[i]-h[i+1])]+=1;
	}
	for(int i=1;i<a-1;i++){
		if(jie[i]==0){
			cout<<"Not jolly";
			return 0;
		}	
	}
	cout<<"Jolly";
	return 0;
}



#include <iostream>
using namespace std;
int main(){
	int m,n,s=1,t=0;
	cin>>n;
	cin>>m;
	int h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	for(int i=0;i<n-1;i++){
		if(t+h[i]>m){
			t=h[i];
			s+=1;
		}
		else
			t+=h[i];	
	}
	cout<<s;
	return 0;
}
