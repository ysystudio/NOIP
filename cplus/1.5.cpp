//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//	char a[2001],b[2001];
//	int c[2001]={0},d[2001]={0},e[2005]={0},i=0,jin=0,l1,l2,zhi;
//	cin>>zhi;
//	cin>>a>>b;
//	l1=strlen(a);
//	l2=strlen(b);
//	for(int i=0;i<l1;i++){
//		if(int(a[l1-i-1])>='A' && int(a[l1-i-1])<='Z'){
//			c[i]=a[l1-i-1]-'A'+10;
//		}
//		else{
//			c[i]=a[l1-i-1]-'0';
//		}
//	}
//	for(int i=0;i<l2;i++){
//		if(int(a[l2-i-1])>='A' && int(a[l2-i-1])<='Z'){
//			d[i]=a[l2-i-1]-'A'+10;
//		}
//		else{
//			d[i]=b[l2-i-1]-'0';
//		}		
//	}
//	if(l2>l1){
//		l1=l2;
//	}
//	for(int i=0;i<l1;i++){
//		e[i]=c[i]+d[i]+jin;
//		jin=0;
//		if(e[i]>=zhi){
//			e[i]=e[i]%zhi;
//			jin=1;
//		}
//	}
//	if(jin!=0)
//		if
//		cout<<jin;
//	for(int i=l1-1;i>=0;i--){
//		if(e[i]>9){
//			cout<<char(55+e[i]);
//		}
//		else{
//			cout<<e[i];
//		}	
//	}	
//	return 0;
//}



#include <iostream>
using namespace std;
int zhiyin(){
	int a,t[101]={0};
	cin>>a;
	int h[a+2]={0};
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	for(int i=0;i<a;i++){
		t[h[i]]+=1;
	}
	for(int i=99;i>=0;i--){
		if(t[i]>0){
			for(int j=0;j<t[i];j++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
	
#include <iostream>
#include <iomanip>
using namespace std;
int man(){
	int a;
	cin>>a;
	int h[2][a+3],x=1,t1,t2;
	double time=0;
	for(int i=1;i<=a;i++){
		cin>>h[1][i];
		h[0][i]=i;
	}
	while(x!=0){
		x=0;
		for(int i=1;i<a;i++){
			if(h[1][i]>h[1][i+1]){
				t1=h[1][i];
				h[1][i]=h[1][i+1];
				h[1][i+1]=t1;
				t2=h[0][i];
				h[0][i]=h[0][i+1];
				h[0][i+1]=t2;
				x+=1;
			}
		}
	}
	for(int i=1;i<=a;i++){
		time+=h[1][i]*(a-i);
		cout<<h[0][i]<<" ";
	}
	cout<<endl<<fixed<<setprecision(2)<<time/a<<endl;

}


#include <iostream>
using namespace std;
int ma(){
	int a,b;
	cin>>a>>b;
	int h[2][b+2],x=1,t1,t2,jia=0,j=0;
	for(int i=0;i<b;i++){
		cin>>h[0][i];
		cin>>h[1][i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<b-1;i++){
			if(h[0][i]>h[0][i+1]){
				t1=h[1][i];
				h[1][i]=h[1][i+1];
				h[1][i+1]=t1;
				t2=h[0][i];
				h[0][i]=h[0][i+1];
				h[0][i+1]=t2;
				x+=1;
			}
		}
	}
	while(a-h[1][j]>=0){
		a-=h[1][j];
		jia+=h[0][j]*h[1][j];
		j++;
	}
	if(a!=0){
		jia+=a*h[0][j];
	}
	cout<<jia;
}



#include <iostream>
using namespace std;
int age(int n){
	if(n==1)
		return 10;
	else
		return age(n-1)+2;
}
int ain(){
	int i;
	cin>>i;
	cout<<age(i);
	return 0;
}


#include <iostream>
using namespace std;
int chen(int n){
	if(n==1||n==0)
		return 1;
	else
		return chen(n-1)*n;
}
int mainchen(){
	int i;
	cin>>i;
	cout<<chen(i);
	return 0;
}



#include <iostream>
using namespace std;
int fei(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	else
		return fei(n-1)+fei(n-2);
}
int dofei(){
	int i;
	cin>>i;
	cout<<fei(i);
	return 0;
}


#include <iostream>
using namespace std;
void move(int n,char a,char b,char c){
	if(n==1){
		cout<<a<<"-->"<<c<<endl;
	}
	else{
		move(n-1,a,c,b);//把n-1们移开
		cout<<a<<"-->"<<c<<endl;//最底下的盘子移到c
		move(n-1,b,a,c);//把n-1们弄到c
	}
	return;
}
int domain(){
	int i;
	cin>>i;
	move(i,'a','b','c');
}


//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//	int a[100];
//	memset(a,0f,sizeof)
//}



//#include <iostream>
//using namespace std;
//bool a[100];
//int n,b[100];
//void ty(int k){
//	int i;
//	if(k>n){
//		for(i=1;i<=n;i++){
//			cout<<b[i];
//		}
//		cout<<endl;
//		return;
//	}
//	for(i=1;i<=n;i++){
//		if(a[i]==true){
//			b[k]=i;
//			a[i]=false;
//			ty(k+1);
//			b[k]=0;
//			a[i]=true;
//		}
//	}
//}
//int doQPL(){
//	int i;
//	cin>>n;
//	for(i=1;i<=n;i++)
//		a[i]=true;
//	ty(1);
//	return 0;
//}


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int wenjian(){
	int a,b;
	freopen("jitaimei.in","r",stdin);
	freopen("jitaimei.out","w",stdout);
	while(cin>>a>>b){
		cout<<a+b;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}



#include <iostream>
using namespace std;
bool b[30],c[30],d[30];
int a[30],t=0;
void ty(int k){
	if(k>8){
		t++;
		for(int j=1;j<=8;j++){
			cout<<a[j]<<' ';
		}
		cout<<endl;
		return;
	}
	else{
		for(int j=1;j<=8;j++){
			if(b[j]==true && c[k+7+j]==true && d[k-j+7]==true){
				a[k]=j;
				b[j]=c[k+j+7]=d[k-j+7]=false;
				ty(k+1);
				b[j]=c[k+j+7]=d[k-j+7]=true;
			}
		}	
	}
	return;
}
int doQ(){
	for(int i=0;i<=23;i++){
		a[i]=0;b[i]=true;c[i]=true;d[i]=true;
	}
	ty(1);
	cout<<t;
	return 0;
}


#include<algorithm>
using namespace std;
int pai(){
	int a[10]={9,7,5,4,6,8,3,2,1};
	sort(a,a+10);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}



#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char ch[5000];
	int l1,e,cheng[5020]={0},jin=0,jie[5100]={0},t=0;
	cin.getline(ch,1001);
	cin>>e;
	l1=strlen(ch);
	for(int i=0;i<l1;i++){
		cheng[i]=ch[l1-i-1]-'0';
	}
	for(int i=0;i<l1;i++){
		t=e*cheng[i];
		jie[i]=t%10+jin;
		jin=0;
		if(t>=10)
			jin=t/10;
	}
	if(jin!=0)
		cout<<jin;
	for(int i=l1-1;i>=0;i--)
		cout<<jie[i];
	return 0;
}

