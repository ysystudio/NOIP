#include <iostream>
using namespace std;
int mo(int x){
	int a;
	a=x%3;
	return a;
}
int main(){
	int c=0,a,b=0,jin=0;
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			jin=0;
			if(mo(i)>=1){
				a=10*mo(i)-10+mo(j)+100;
			}
			else{
				a=10*2+mo(j);
			}
			if(j+3>9){
				b+=mo((j+3)%10);
				jin=1;
			}
			else{
			    b+=mo(j+3);	
			}
			if(i+2+jin>9){
				b+=10*mo((i+2+jin)%10)+100;
			}
			else{
				b+=10*mo(i+2+jin);	
			}
			if(a==b){
				c+=1;
				cout<<i<<j<<endl;
			}
			a=0;
			b=0;
			
		}
	}
	cout<<c;
	return 0;
}

