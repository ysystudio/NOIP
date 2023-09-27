#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i,s;//i+1?次数循环计数
	i++;
	i+=1;
	i=i+1;
	//无次数循环
	while(cin>>s){
		s+=5;
		cout<<s<<endl;
	}
}
//1 1 1 1 1 1 1
//	return 0;
//}
//int main(){
//	double a,sum;
//	int i;
//	a=1;
//	i=0;
//	sum=0;
//	while(i<64){
//		sum+=a;
//		a=a*2;
//		i+=1;
//	}
//	cout<<a;
//	return 0;
//}
//int main(){//清零,至一
//	double n,sum=1,i=1;
//	cin>>n;
//	while(i<=n){
//		sum*=i;
//		i+=1;
//	}
//	cout<<sum;
//	return 0;
//}

//int main(){//清零,至一
//	double sum=0,n,m;
//	cin>>n;
//	cin>>m;
//	while(n<=m){
//		sum+=n;
//		n+=1;
//	}
//	cout<<sum;
//	return 0;
//}


//int main(){//清零,至一
//	long long sum=0,m,n;
//	cin>>m>>n;
//	while(m<=n){
//		if(m%3==0){
//			sum+=1;
//		}
//		m+=1;
//	}
//	cout<<sum;
//	return 0;
//}

//int main(){//清零,至一
//	char m,n;
//	m=65;
//	n=97;
//	while(m<91){
//		cout<<m<<n<<" ";
//		m+=1;
//		n+=1;
//	}
//	return 0;
//}
//int in(){
//	cout<<"                            __                            __    __  	"<<endl;
//	cout<<"      _________       _____/ /______         __          /  |  /	 |	"<<endl;
//	cout<<"     /___  ___/      /____  _______/    ____/ /______   /  @ |/  @ |	"<<endl;
//	cout<<"  ______/ /______   _____/ /______    /____  _____  /          		"<<endl;
//	cout<<" /______  ______/  / __________  /        / /    / /       ||__/|  	"<<endl; 
//	cout<<"       / /        / /_________/ /        / /    / /        |    |	"<<endl;
//	cout<<"      / /         |__  ___  ___/__      / /    / /         |    |	"<<endl;    
//	cout<<"    _/ /         ___/ /   | |__/ /     / /   _/ /          |    |	"<<endl;
//	cout<<"   |__/         |____/    |_____/     /_/    |_/            |__/   		"<<endl;
//}
//  
  
//  int main(){//清零,至一
//	  char m;
//	  cin>>m;
//	  int n;
//	  n=0;
//	  while(m!='.'){
//		  if(m>=97 && m<=122)
//		     n+=1;
//		  cin>>m;
//	  }
//	  cout<<n;
//	  return 0;
//  }

