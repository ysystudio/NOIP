//#include <iostream>//插入排序
//using namespace std;
//int zhijie(){
//	int a[10],x=0,n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<n;i++){
//		x=a[i];
//		for(int j=i-1;j>=0;j--){
//			if(x<a[j]){
//			    a[j+1]=a[j];
//				a[j]=x;
//		    }
//		}	
//	}
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
//	return 0;
//}
//
#include <iostream>//插入排序
using namespace std;
int main (){
	int a[10],x=0,n,r,l,mid,i;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for( i=1;i<n;i++){
		x=a[i];
		r=i-1;
		l=0;
		while(l<=r){
			mid=(l+r)/2;
			if(x<a[mid])
				r=mid-1;
			else
				l=mid+1;
		}
		for(int j=i-1;j>=l;j--){
			a[j+1]=a[j];
		}
		a[l]=x;
	}	
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}


//#include <iostream>
//using namespace std;
//char a[100];
//int in(){
//	int i=0,s=0;
//	cin.getline(a,205) ;
//	while(a[i]!='\0'){
//		if(a[i]==32)
//			s+=1;
//		i++;
//	}
//	cout<<s;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int h[127];
//int mn(){
//	char a[100010];
//	long long b=0;
//	cin.getline(a,100001);
//	while(a[b]!='\0'){
//		h[int(a[b])]+=1;
//		b++;
//	}
//	for(int i=0;i<100000;i++)
//	if(h[int(a[i])]==1){
//		cout<<a[i];
//		b=0;
//		break;
//	}
//	if(b!=0)
//		cout<<"no";
//	return 0;
//}

#include <iostream>
using namespace std;
int n(){
	double a,f;
	int l=0;
	char h[2][505];
	cin>>f;
	cin>>h[0],500;
	cin>>h[1],500;
	while(h[0][l]!='\0' && h[1][l]!='\0'){
		if(h[0][l]==h[1][l])
			a+=1;
		l+=1;
	}
	a=a/l;
	if(a>=f)
		cout<<"yes";
	else
		cout<<"no";
	return 0;	
}

#include <iostream>
using namespace std;
int RPS(){
	int x,j=0,k=0;
	cin>>x;
	char h[x][4],c[20];
	cin.get();
	for(int i=0;i<x;i++){
		cin.getline(c,20);
		j=0;
		k=0;
		while(c[j]!='\0'){
			if(c[j]>=65 && c[j]<=90){
				h[i][k]=c[j];
				k++;
			}
			j++;	
		}
		h[i][k]='\0';
	}
	for(int i=0;i<x;i++){
		if(h[i][1]==h[i][0])
			cout<<"Tie"<<endl;
		else if((h[i][0]=='R' && h[i][1]=='S')|| (h[i][0]=='P'&&h[i][1]=='R')|| (h[i][0]=='S'&& h[i][1]=='P'))
			cout<<"Player1"<<endl;
		else
			cout<<"Player2"<<endl;
	}
	return 0;	
}



#include <iostream>
using namespace std;
char line[10000];
int xuanpiao(){
	char a;
	int i=0,j=0;
	cin>>i;
	cin.get();			
	int xuan_piao[26]={0};
	cin.getline(line,10000);
	while(line[j]!='\0'){
		a = line[j];
		if(a>=97 && a<=122){
			xuan_piao[a-97]+=1;
		}
		else if(a>=65 && a<=90){
			xuan_piao[a-65]+=1;
		}
		j++;
	}
			
	for(int j=0;j<i;j++){
		cout<<char(j+97)<<':'<<xuan_piao[j]<<endl;
	}
	return 0;
}



//include <iostream>
//using namespace std;
//char a[10000];
//int main(){
//	int i=0;
//	cin>>i;
//	cin.get();			
//	int xuan_piao[26]={0};
//	while(cin>>a ){
//		if(a == '\0'){
//			break;
//		}
//		if(a>=97 && a<=122){
//			xuan_piao[a-97]+=1;
//		}
//		else if(a>=65 && a<=90){
//			xuan_piao[a-65]+=1;
//		}	
//	}
//	for(int j=0;j<i;j++){
//		cout<<char(j+97)<<':'<<xuan_piao[j]<<endl;
//	}
//	return 0;
//}



#include <iostream>
#include <cstring>
using namespace std;
int m(){
	char a[80],b[80],c,d;
	int alen,blen,len;
	cin.getline(a,80);
	cin.getline(b,80);
	alen=strlen(a);
	blen=strlen(b);
	if(alen>blen)
		len=blen;
	else
		len=alen;
	for(int i=0;i<len;i++){
		c=a[i];
		d=b[i];
		if(c>=97 && c<=122)
			c-=32;
		if(d>=97 && d<=122)
			d-=32;
		if(c>d)
		{cout<<'>';return 0;}
		if(d>c)
		{cout<<'<';return 0;}
	}
	if(alen>blen)
		cout<<">";
	else if(alen<blen)
		cout<<"<";
	else
		cout<<"=";
	return 0;
}
