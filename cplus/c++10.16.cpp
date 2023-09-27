#include <iostream>
using namespace std;
int nn(){
	int j,i;
	for(i=1;i<5;i++){
		for(j=1;j<4;j++){
			cout<<i<<" "<<j<<endl;
			
		}
			
	}
	return 0;
}

int j(){
	double a,b,i,j;
	cin>>a;
	cin>>b;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++)
			cout<<"*";
		cout<<""<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int ddd(){
	double a,b,i,j,x;
	cin>>a;
	for(i=1;i<=a;i++){
		b=a-i+1;
		for(x=1;x<b;x++)
			cout<<" ";
		for(j=0;j<i*2-1;j++)
			cout<<"*";
		cout<<""<<endl;	
	}
	for(i=a-1;i!=0;i--){
		b=a-i+1;
		for(x=1;x<b;x++)
			cout<<" ";
		for(j=i*2-1;j!=0;j--)
			cout<<"*";
		cout<<""<<endl;
	}
	return 0;
}


//数组
int sz(){
	double h[5],s;//定义数组0~4
	for(int i=0;i<5;i++)
		cin>>h[i];//下标
	for(int i=0;i<5;i++)
		s=s+h[i];
	cout<<s;
	return 0;
	
}


//#include <iostream>
//using namespace std;
//int main(){
//	
//}

#include <iostream>
using namespace std;
int ain(){
	double sum,p;
	int a;
	cin>>a;
	cin>>p;
	double f[a];
	for(int i=0;i<a;i++){
		cin>>f[i];
	}
	for(int i=0;i<a;i++){
		if(f[i]>p)
			sum+=1;
	}
	if(sum>0)
	    cout<<sum;
	else
		cout<<"None";
	return 0;
}


#include <iostream>
using namespace std;
int ou(){
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


#include <iostream>
using namespace std;
int ma(){
	long long a,b,s;
	cin>>a;
	for(int i=1;i<a;i++){
		s=0;
		for(int j=1;j<i;j++){
			if(i%j==0)
				s+=j;
		}
		//if(s==i)
		cout<<i<<endl;
	}
	return 0;
		
}


#include <iostream>
using namespace std;
int man(){
	long long a;
	int x=0;
	cin>>a;
	for(int i=2;i<=a;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				x=1;
				break;	
			}	
		}
		if(x==0)
			cout<<i<<endl;
		x=0;
	}
	return 0;
}

#include <iomanip>
//cout<<fixed<<setprecision(2)<<a/b<<endl;
int h[101]={0};//全局变量
int main(){
	int a,s=0;
	double p;
	cin>>a;
	cin>>p;
	for(int i=0;i<a;i++)
		cin>>h[i];
	for(int i=0;i<a;i++){
		if(h[i]>p)
			s+=1;
		}
	cout<<s;
	return 0;
}
