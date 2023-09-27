#include <iostream>
#include <cstring>
using namespace std;
int xu(){
	int a;
	cin>>a;
	cin.get();
	char h[a][30],huan[30];
	int ch[a],c=1,t;
	for(int i=0;i<a;i++){
		cin>>h[i];
		cin>>ch[i];
		}
	
	while(c!=0){
		c=0;
		for(int i=0;i<a-1;i++){
			if(ch[i]<ch[i+1]){
				t=ch[i+1];
				ch[i+1]=ch[i];
				ch[i]=t;
				strcpy(huan,h[i+1]);
				strcpy(h[i+1],h[i]);
				strcpy(h[i],huan);
				c+=1;
			}
		}	
	}
	for(int i=0;i<a;i++){
		cout<<h[i]<<' ';
		cout<<ch[i]<<endl;
	}
	return 0;
}


#include <iostream>
using namespace std;
int p(){
	int i=0,h[27]={0},m=0,m1;
	char a[500];
	cin>>a;
	while(a[i]!='\0'){
		h[a[i]-'a']+=1;
		i++;
	}
	for(int i=0;i<25;i++){
		if(m<h[i]){
			m=h[i];
			m1=i;
		}	
	}
	cout<<char(m1+'a');
	return 0;
}


//结构体
#include <iostream>
using namespace std;
int jiegou(){
	double p[3]={0};
	struct s{
		char n[30];
		char xh[8];
		double ch[3];
	};
	s a[3];
	for(int i=0;i<3;i++){
		//cin>>a[i].n>>a[i].xh;
		for(int j=0;j<3;j++){
			cin>>a[i].ch[j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			p[i]+=a[i].ch[j];
	}
	for(int i=0;i<3;i++){
		cout<<p[i]/3<<endl;
	}
	return 0;
}



#include <iostream>
using namespace std;
int ma(){
	int i=0,h[27]={0},m=1,c=0;
	char a[500];
	cin>>a;
	while(a[i]!='\0'){
		h[a[i]-'a']+=1;
		i++;
	}
	while(m!=0){
		m=0;
		for(int i=0;i<26;i++){
			if(m<h[i]){
				m=h[i];
				c=i;
			}
		}
		if(m==0)
			break;
		h[c]=0;
		cout<<char(c+65)<<' '<<m<<endl;
		
	}
	return 0;
}



#include <iostream>
using namespace std;
int feibuonaqi(){
	int n,x1=1,x2=1,t;
	cin>>n;
	for(int i=0;i<n-3;i++){
		t=x2;
		x2+=x1;
		x1=t;
		cout<<x1<<endl;
	}
	cout<<x2;
	return 0;
}



#include <iostream>
using namespace std;
int jiyin(){
	int i=0;
	char h[260]={0};
	cin.getline(h,258);
	while(h[i]!='\0'){
		if(h[i]=='A'){
			h[i]='T';
		}
		else if(h[i]=='T'){
			h[i]='A';
		}
		else if(h[i]=='G'){
			h[i]='C';
		}
		else{
			h[i]='G';
		}
		i++;
	}
	for(int j=0;j<=i;j++){
		cout<<h[j];
	}
	return 0;
}


#include <iostream>
using namespace std;
int man(){
	int a;
	char x[110]={0},y[110]={0},z[110]={0};
	cin>>a;
	cin>>x;
	cin>>y;
	for(int i=0;i<a;i++){
		if(y[i]<=x[i])
			z[i]=y[i];
		else{
			cout<<-1;
			return 0;
		}	
	}
	for(int i=0;i<a;i++){
		cout<<z[i];
	}
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int i=0,j=0,a=0;
	char h[15]={0};
	cin.getline(h,15);
	while(j<12){
		if(h[j]>='0' && h[i]<='9'){
			a+=(h[j]-'0')*(i+1);
			i++;
		}
		j++;
	}
	if(a%11==10 && h[12]=='X'){
		cout<<"Right";
	}
	else if(a%11==h[12]-'0'){
		cout<<"Right";
	}
	else{
		if(a%11==10){
			h[12]='X';
		}
		else{
			h[12]=char(a%11+'0');
		}
		cout<<h;
	}
		
	return 0;
}
