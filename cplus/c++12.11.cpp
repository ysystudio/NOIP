//#include <iostream>
//#include <cstring>
//using namespace std;
//int c[505],d[505],e[505],i=0,jin=0,l1,l2;
//int gaojingdujia(){
//	char a[505],b[505];
//	cin>>a>>b;
//	l1=strlen(a);
//	l2=strlen(b);
//	for(int i=0;i<l1;i++){
//		c[i]=a[l1-i-1]-'0';
//	}
//	for(int i=0;i<l2;i++){
//		d[i]=b[l2-i-1]-'0';
//	}
//	if(l2>l1){
//		l1=l2;
//	}
//	for(int i=0;i<l1;i++){
//		e[i]=c[i]+d[i]+jin;
//		jin=0;
//		if(e[i]>=10){
//			e[i]=e[i]%10;
//			jin=1;
//		}
//	}
//	if(jin==1)
//		cout<<jin;
//	for(int i=l1-1;i>=0;i--)
//		cout<<e[i];
//	return 0;
//}


#include <iostream>
using namespace std;
int tong(){
	int a;
	cin>>a;
	int b[a+1]={0},c[101]={0};
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	for(int i=0;i<a;i++){
		c[b[i]]+=1;
	}
	for(int i=a;i>=0;i--){
		for(int j=0;j<c[i];j++){
			cout<<i<<" ";
		}
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int jian(){
	int c[10088]={0},d[10088]={0},e[10088]={0},l=0,l1,l2;
	char a[10088],b[10088];
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0;i<l1;i++){
		c[i]=a[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		d[i]=b[l2-i-1]-'0';
	}
	l=l1;
	if(l1<l2)
		l=l2;
	for(int i=0;i<l;i++){
		if (c[i]<d[i] && i+1<l1){
			c[i+1]-=1;
			c[i]+=10;
		}
		e[i]=c[i]-d[i];
	}
	for(int i=l1+5;i>=0;i--){
		if(e[i]!=0){
			l1=i;
			break;
		}
	}
	for(int i=l1;i>=0;i--){
		cout<<e[i];
	}	
	return 0;
}


#include <iostream>
#include <cstring>
using namespace std;
int cheng(){
	char a[505],b[505];
	int c[505]={0},d[505]={0},e[505]={0},i=0,jin=0,l1,l2,l;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	l=l1+l2;
	for(int i=0;i<l1;i++){
		c[i]=a[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		d[i]=b[l2-i-1]-'0';
	}	
	for(int j=0;j<l2;j++){
		for(int i=0;i<l1;i++){
			e[i]=c[j]*d[i]+jin;
			jin=0;
			if(e[i]>10){
				jin=e[i]/10;
				e[i]=e[i]%10;
			}
		}
	}
	if(jin!=0)
		cout<<jin;
	for(int i=l;i>=0;i--)
		cout<<e[i];
	return 0;
}


#include <iostream>
using namespace std;
void ji(int a,int b,int c){
	double s,g;
	s=a+b+c;
	g=s/3;
	cout<<s<<endl;
	cout<<g<<endl;
	return ;
}
int amain(){
	int a=1,b=1,c=0,s=1;
	while(a!=0){
		cin>>a>>b>>c;
		ji(a,b,c);
	}
	return 0;
}



#include <iostream>
using namespace std;
void diao(int &a,int &b){
	double t;
	t=a;
	a=b;
	b=t;
	return ;
}
int ma(){
	int a=1,b=1;
	while(a!=0){
		cin>>a>>b;
		diao(a,b);
		cout<<a<<" "<<b;
	}
	return 0;
}



#include <iostream>
using namespace std;
int main(){
	int la,a[5]={10},chu,shang[5]={0},d=0,yu;
	cin>>la;
	for(int i=0;i<la;i++){
		cin>>a[i];
	}
	cin>>chu;
	for(int i=0;i<=la+1;i++){
		if(chu>d){
			d=d*10+a[i];
			shang[i]=0;
		}
		else{
			yu=d%chu;
			shang[i]=d/chu;
			d=yu;	
		}
	}
	for(int i=0;i<=la+1;i++){
		cout<<shang[i];
	}
	return 0;
}
