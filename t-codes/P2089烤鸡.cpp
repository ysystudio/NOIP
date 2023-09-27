#include<iostream>
int b[10000][11],number=0,n,a[11];
using namespace std;
void ty(int k,int g){
	int i;
	if(k>10 ){
		if(g==0){		
			number++;	
		    for(i=1;i<=10;i++){
			    b[number][i]=a[i];  
			}	
		}
    }else{
		for(i=1;i<=3&&i<=g;i++){
			a[k]=i;
			ty(k+1,g-i);
            a[k]=0;
		}
	}
}
int main(){
	int i,j;	
	number=0;
	cin>>n;
	if(n< 10 || n>30){
		cout<<0;
	}
	else{
		ty(1,n);
		cout<<number<<endl;
    	for(i=1;i<=number;i++){
    		for(j=1;j<=10;j++){
    			cout<<b[i][j]<<" ";
			}
    	cout<<endl;
		}	
	}
	return 0;
}
