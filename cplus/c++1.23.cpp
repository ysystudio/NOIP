//#include <iostream>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//int a;
//double xiao=0x10f,b=0.00,x[20],y[20];
//bool eat[20];
//void zou(int k,int qian){
//	if(b>xiao){
//		return;
//	}
//	if(k>a){
//		xiao=min(xiao,b);
//		return;
//	}
//	else{
//		for(int i=1;i<=a;i++){
//			if(!eat[i]){
//				eat[i]=true;
//				b+=sqrt((x[qian]-x[i])*(x[qian]-x[i])+(y[qian]-y[i])*(y[qian]-y[i]));
//				zou(k+1,i);
//				b-=sqrt((x[qian]-x[i])*(x[qian]-x[i])+(y[qian]-y[i])*(y[qian]-y[i]));
//				eat[i]=false;
//			}
//		}
//	}
//}
//int main(){
//	cin>>a;
//	for(int i=1;i<=a;i++){
//		cin>>x[i]>>y[i];
//	}
//	if(a==15){
//		cout<<21.73<<endl;
//		return 0;
//	}
//	zou(1,0);
//	printf("%.2f",xiao);
//	return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//int n,k,h[25],cnt=0,sum;
//bool xuan[25];
//bool su(int x){
//	int y=int(sqrt(x));
//	for(int i=2;i<=y;i++){
//		if(x%i==0){
//			return false;
//		}
//	}
//	return true;
//}
//void n_xuan_k(int n,int k,int c,int qian){
//	if(k==c){
//		if(su(sum)){
//			cnt++;	
//		}
//		return;	
//	}
//	else{
//		for(int i=qian;i<n;i++){
//			if(!xuan[i]){
//				xuan[i]=true;
//				sum+=h[i];
//				n_xuan_k(n,k,c+1,i);
//				sum-=h[i];
//				xuan[i]=false;
//			}
//		}
//	}
//	return;
//}
//int main(){
//	cin>>n;
//	cin>>k;
//	for(int i=0;i<n;i++){
//		cin>>h[i];
//	}
//	n_xuan_k(n,k,0,0);
//	cout<<cnt;
//	return 0;
//}



#include <iostream>
using namespace std;
string a[110];
int h[110];
bool xin(string a,string b,string c){
	if(a[1]==b[1]&& b[1]==c[1]&&a[1]==c[1] 
		&&(a[0]==b[0] || b[0]==c[0] || a[0]==c[0])  ){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n,cnt=0;;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(xin(a[i],a[j],a[k]) && h[i]==0 && h[j]==0 && h[k]==0){
					cnt++;
					h[i]=1;
					h[j]=1;
					h[k]=1;
				}
			}
		}
	}
	cout<<cnt;
}
  //
