#include <iostream>
using namespace std;
int xuanze(){
	int a[5],s=0,f=0,t;
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	for(int j=3;j>1;j--){
		s=0;
		for(int i=0;i<=j;i++){
			if(s<a[i]){
				s=a[i];
				f=i;
			}		
		}
		if(f!=j){
			t=a[j];
			a[j]=a[f];
			a[f]=t;
		}
	}
	for(int i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int gaojingdu(){
	char a[505],b[505];
	int c[505]={0},d[505]={0},e[505]={0},i=0,jin=0,l1,l2;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0;i<l1;i++){
		c[i]=a[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		d[i]=b[l2-i-1]-'0';
	}
	if(l2>l1){
		l1=l2;
	}
	for(int i=0;i<l1;i++){
		e[i]=c[i]+d[i]+jin;
		jin=0;
		if(e[i]>=10){
			e[i]=e[i]%10;
			jin=1;
		}
	}
	if(jin==1)
		cout<<jin;
	for(int i=l1-1;i>=0;i--)
		cout<<e[i];
	return 0;
}

#include <iostream>
using namespace std;
int mai(){
	int a,i=0;
	cin>>a;
	int b[a+1]={0},c[100]={0};
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	while(b[i]!='\0'){
		c[b[i]]+=1;
		i++;
	}
	for(int i=a;i>0;i--){
		for(int j=0;j<c[i];j++){
			cout<<i<<' ';
		}
	}
	return 0;
}
//1 1 4 5 1 4


#include <iostream>
using namespace std;
int ma(){
	int n,x1=1,x2=1,x3=1,t,t1;
	cin>>n;
	for(int i=0;i<n-3;i++){
		t=x3;
		x3+=x1;
		t1=x2;
		x2=t;
		x1=t1;
		
	}
	cout<<x3;
	return 0;
}

#include <iostream>
using namespace std;
int zhongshu(){
	int i=0,h[11]={0},m=0,b=0;
	cin>>i;
	for(int j=0;j<i;j++){
		cin>>b;
		h[b]+=1;
	}
	for(int i=0;i<10;i++){
		if(m<h[i]){
			m=h[i];
		}
	}
	for(int i=0;i<10;i++){
		if(m==h[i]){
			cout<<i<<endl;
			cout<<h[i];
			break;
		}
	}
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int jiuyuan(){
	int a,t=0;
	cin>>a;
	struct house{
		int x;
		int y;
		int ren;
	};
	house h[a];
	for(int i=0;i<a;i++){
		cin>>h[i].x;
		cin>>h[i].y;
		cin>>h[i].ren;
	}
	for(int i=0;i<a;i++){
		t+=(sqrt(h[i].x*h[i].x+h[i].y*h[i].y)/50)*2;
		t+=h[i].ren*1.5;
	}
	cout<<t;
}


#include <iostream>
using namespace std;
int niu_number(int n){
	int sum;
	if(n<=3)
		sum=1;
	else{
		sum=1;
		for(int i=n;i>=4;i--){
			sum+=niu_number(i-3);
		}
	}
	return sum; 
}
int get_niu_number(){
	int n,sum;
	cin>>n;
	sum=niu_number(n);
	cout<<sum;
	return 0;
}


#include <iostream>
using namespace std;
int main(){
	int i=0,k,h[1000000]={0},m=0,b=0;
	cin>>i;
	for(int j=0;j<i;j++){
		cin>>b;
		h[b]+=1;
	}
	for(int i=0;i<10;i++){
		if(m<h[i]){
			m=h[i];
			k=i;
		}
	}
	cout<<i<<endl;
	cout<<h[i];
	return 0;
}


