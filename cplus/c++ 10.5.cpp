#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;
//随机
int cccp(){
	long long a,i=1;
	srand((unsigned)time(NULL));
	while(i<10){
		a=rand();
		cout<<a<<endl;
		i++;
	}
	return 0;
}
//质数与合数
int what(){
	long long a,i=2;
	cin>>a;
	while(i<=a){
		if(a%i==0)
			break;
		else
			i++;
	}
	if(i<a)
	    cout<<"合数"<<endl;
	else
		cout<<"质数"<<endl;
	return 0;
}


//完全数
int a(){
	long long a,i=1,sum=0;
	cin>>a;
	while(i<a){
		if(a%i==0)
			sum+=i;
		i++;
	}
	if(sum==a)
		cout<<"完全数"<<endl;
	else if(sum>a)
		cout<<"盈数"<<endl;
	else
		cout<<"亏数"<<endl;
	return 0;
}
//for
int er(){
	for(int i=0;i<10;i++)
		cout<<"鸡你太美!"<<endl;
	for(int i=0;i<10;i++)
		cout<<"哎呦~你干嘛~"<<endl;
}
//阶乘与阶加
int ww(){
	long long a,sum=0,b=1;
	cin>>a;
	for(int i=1;i<=a;i++){
		sum+=i;
	    b*=i;
	}
	cout<<sum<<endl;
	cout<<b<<endl;
	return 0;
}
//质数与合数
int main(){
	int a,f=0;
	cin>>a;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
			f+=1;break;

	}
	if(a==1)
		cout<<"既不是质数,也不是合数"<<endl;
	else if(!f)
		cout<<"质数"<<endl;
	else
		cout<<"合数"<<endl;
	return 0;

}
//完全数
int min(){
	long long a,sum;
	cin>>a;
}

int main1(){
	long long a;
	cin>>a;
	while(a!=1){
		if(a%2==0){
			a/=2;
			cout<<a<<endl;
		}
		else{
			a=a*3+1;
			cout<<a<<endl;
		}
	}
	return 0;


	for(int i=1;i<a;i++){
		if(a%i==0)
			sum+=i;
	}
	if(sum==a)
		cout<<"完全数"<<endl;
	else if(sum<a)
		cout<<"亏数"<<endl;
	else
		cout<<"盈数"<<endl;
	return 0;
}
