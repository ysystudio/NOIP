#include<iostream>
using namespace std;
int n(){
	double a[5],m=10000,c[5];
	int k=0,x=0;
	for(int i=0;i<4;i++)
		cin>>a[i];
	while(k<4){
		for(int i=0;i<4;i++){
			if(m>a[i]){
				m=a[i];
				x=i;
			}	
		}
		c[k]=m;
		k+=1;
		m=10000;
		a[x]=10000;
	}
	for(int i=0;i<4;i++)
		cout<<c[i]<<" ";
}


#include <iostream>
#include <cstring>
using namespace std;
char h[3][25];
int main(){
	int c=0,d=0,e,i=0;
	for(int j=0;j<3;j++){
		cin.getline(h[j],25);
	}
	for(int j=0;j<3;j++){
		c=0;
		i=0;
		c=strlen(h[j]);
		if(c>d){
			d=c;
			e=j;
		}	
	}
	for(int i=0;i<=d;i++){
		cout<<h[e][i];
	}
	if(d==11)
		d-=1;
	cout<<endl<<d;
	return 0;
}
	
	
//#include <iostream>
//using namespace std;
//char a[100];
//int n(){
//	int i=0,n;
//	cin>>n;
//	cin>>a;
//	while(a[i]!='\0'){
//		if(a[i]+n>122)
//		    cout<<char(a[i]-24+n);
//		else
//			cout<<char(a[i]+n);
//		i++;
//	}
//}

//		while(h[j][i]!='\0'){   
//			c+=1;
//			i++;
//		}
