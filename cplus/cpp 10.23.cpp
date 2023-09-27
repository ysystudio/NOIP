#include <iomanip>
#include <iostream>
#include <cmath>
//using namespace std;
////cout<<fixed<<setprecision(2)<<a/b<<endl;
//int h[110];
//int mai(){
//	long long n;
//	cin>>n;
//	//质数碍事筛法
//	for(int i=2;i<=n;i++){
//		if(h[i]==0)
//			for(int j=i*i;j<n;j++){
//				if(j%i==0)
//					h[j]=1;
//			}
//	}
//	for(int i=1;i<=n;i++){
//		if(h[i]==0)
//			cout<<i<<endl;
//		
//	}
//	return 0;	
//}
//

	
#include <iomanip>
#include <iostream>
using namespace std;
int mai(){
	double b,s=0,q;
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>q;
		s+=q;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
		
}
	//cout<<fixed<<setprecision(2)<<    <<endl;
	
	
#include <iostream>
	using namespace std;
	int ain(){
		int a,b[11],s=0;
		cin>>a;
		a+=30;
		for(int i=0;i<10;i++)
			cin>>b[i];
		cin>>a;
		a+=30;
		for(int i=0;i<10;i++){
			if(b[i]<=a)
				s+=1;
		}
		
		cout<<s;
		return 0;	
	}
	
	
//#include <iostream>
//using namespace std;
//	int main(){
//		long long a;
//		cin>>a;
//		long long h[a];
//		for(int i=a-1;i>=0;i--)
//			cin>>h[i];
//		for(int i=0;i<a;i++)
//			cout<<h[i]<<" ";
//		return 0;	
//	}
	
#include <iostream>
using namespace std;
    int mn(){
		long long a,b,c=100,d=0;
		cin>>a;
		cin>>b;
		long long h[a],x[b];
		for(int i=0;i<a;i++)
			cin>>h[i];
		for(int j=0;j<b;j++)
			cin>>x[j];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				d=h[i]-x[j];
				if(h[i]-x[j]<0){
					d=0-(h[i]-x[j]);
				}	
				if(d<c)
					c=d;
			}
		}
		cout<<c;
		return 0;
			
	}
	
	
	
#include <iostream>
using namespace std;
	int in(){
	int a;
	cin>>a;
	long long h[a],b;
	for(int i=0;i<a;i++)
		cin>>h[i];
	cin>>b;
	for(int i=0;i<a;i++){
		if(h[i]%10==b)//gewei
			cout<<h[i]<<endl;
		else if((h[i]/10)%10==b)//shiwei
			cout<<h[i]<<endl;
		else if(h[i]%b==0)
			cout<<h[i]<<endl;
	}
	return 0;
}

	
#include <iostream>
	using namespace std;
	int m(){
		int a,b;
		cin>>a;
		cin>>b;
		long long h[a+2][b+2],x=0;
		for(int i=0;i<a+2;i++){
			for(int j=0;j<b+2;j++)
				h[i][j]=0;
		}	
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++)
				cin>>h[i][j];
		}
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				x=0;
				if(h[i][j]>=h[i-1][j])
					x+=1;
				if(h[i][j]>=h[i][j-1])
					x+=1;
				if(h[i][j]>=h[i+1][j])
					x+=1;
				if(h[i][j]>=h[i][j+1])
					x+=1;
				if(x==4)
				    cout<<i-1<<" "<<j-1<<endl;
			}	
		}
		return 0;
	}	




//#include <iostream>
//using namespace std;	
//int main(){
//	long long a,b,x,i=0,j;
//	cin>>a;
//	double h[a+1]{0};
//	for(int i=0;i<a;i++)
//		cin>>h[i];
//	cin>>b;
//	while(b>h[i]){
//		i++;
//	}
//	for(int x=0;x<a;x++){
//		if(i==x){
//			i=0;
//			cout<<b<<" ";
//		}
//		cout<<h[x]<<" ";
//	}
//	return 0;	
//}


//#include <iostream>
//using namespace std;	
//int main(){
//	long long a,b,c,d,e;
//	cin>>a;
//	for(int i=1;i<a;i++){
//		b=i%10;
//		c=i/10%10;
//		d=i/100%100;
//		e=i/1000%1000;
//		if(b*b*b+c*c*c+d*d*d+e*e*e==i)
//			cout<<i<<endl;
//	}
//	return 0;	
//}



#include <iomanip>
#include <iostream>
using namespace std;
int a(){
	double a,b,c,s1=0,s2=0;
	cin>>a;
	cin>>b;
	cin>>c;
	a=a/2*(a+1);
	for(int i=1;i<=b;i++)
		s1=s1+i*i;
	for(int j=1;j<=c;j++)
		s2=s2+1.0/j;
	
		
	cout<<s2;
	return 0;
}


#include <iostream>
using namespace std;
int jinitaimei(){
	long long a[4],b,s=1;
	for(int i=0;i<4;i++)
		cin>>a[i];
	a[4]==0;
	while(s!=0){
		s=0;
		for(int i=1;i<4;i++){
			if(a[i]<a[i-1]){
				b=a[i-1];
				a[i-1]=a[i];
				a[i]=b;
				s+=1;
			}
		}
	}
	for(int i=0;i<4;i++)
		cout<<a[i];
	return 0;	
}


#include <iostream>
using namespace std;
int main(){
	double a=2,b=1,c,d,s=0;
	cin>>d;
	for(int i=0;i<d;i++){
		s+=a/b;
		c=a;
		a=a+b;
		b=c;
	}
	cout<<s;
		
	
	
}
