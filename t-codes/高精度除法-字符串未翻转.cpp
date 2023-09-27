#include<iostream> 
#include<cstring> 
using namespace std; 
char s[5005];
int a[5005],b,c[5005],i;
long long d;
int main() {     
    cin>>s;    
    cin>>b;
    int len=strlen(s);
    for(i=0;i<len;i++){
    	a[i]=s[i]-'0';
	}
	d=0;
	for(i=0;i<len;i++){
		d=d*10+a[i];
		c[i]=d/b;
		d=d%b;
	}
	int k= 0;
    while(c[k]==0 && k<len){
    	k++; 
    }      
    for (i=k;i<len;i++)
      cout<<c[i];
    if(k==len)cout<<0; 
    return 0; 
}
