#include<iostream>
int f[5001]; 
using namespace std;
int find(int x){
	if(f[x]==x)
		return x;
	return f[x]=find(f[x]);
}
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int i,a,b;
	for(i=1;i<n+1;i++){//初始化 
		f[i]=i;}
	for(i=0;i<m;i++){//合并 
		cin>>a>>b;
		f[find(a)]=find(b);}
	for(i=0;i<p;i++){//询问 
		cin>>a>>b;
		if(find(a)==find(b))//重要 
			cout<<"Yes\n";
		else
		{cout<<"No\n";}     
	}
	return 0;
}



//#include<iostream>
//int f[50000]; 
//using namespace std;
//int find(int x){
//	if(f[x]==x)
//		return x;
//	return f[x]=find(f[x]);}
//int main(){
//	int n,m,z,x,y;
//	cin>>n>>m;
//	string a,b;
//	string h[n+3];
//	for(int i=1;i<n+1;i++){
//		f[i]=i;
//		cin>>h[i];}
//	for(int i=0;i<m;i++){
//		cin>>a>>b;
//		for(int i=1;i<n+1;i++){
//			if(h[i]==a){
//				x=i;}
//			if(h[i]==b){
//				y=i;}}
//		f[find(x)]=find(y);
//	}cin>>z;
//	for(int i=0;i<z;i++){
//		cin>>a>>b;
//		for(int i=1;i<n+1;i++){
//			if(h[i]==a){
//				x=i;}
//			if(h[i]==b){
//				y=i;}}
//		if(find(x)==find(y))
//			cout<<"Yes."<<endl;
//		else
//		{cout<<"No."<<endl;} 
//	}
//	return 0;
//}





//#include <iostream>
//using namespace std;
//int a,m;
//char quguo[101][101];
//char migong[101][101];
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//int cnt=0,jichengji[11];
//void mi(int x, int y,int xt,int yt) {
//	if(migong[x][y]=='#'){
//		return;
//	}
//	for (int k = 0; k < 4; ++k) {
//		int xx = x + dx[k];
//		int yy = y + dy[k];
//		if (xx >=0 && xx < m && yy >=0 && yy < m) {
//			if((quguo[xx][yy]==0) && (migong[xx][yy]!='#')){
//				if(xx==xt && yy==yt){
//					cnt=1;
//					return;
//				}
//				quguo[xx][yy]=1;
//				mi(xx, yy,xt,yt);
//			}
//		}
//	}
//	return;
//}
//int main() {
//	cin >>a;
//	for(int q=0;q<a;q++){
//		cin>>m;
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < m; ++j) {
//				cin>>migong[i][j];
//			}
//		}
//		int x,y,xt,yt;
//		cin>>x>>y>>xt>>yt;
//		for(int k=0;k<a;k++){
//			mi(x,y,xt,yt);
//		}
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < m; ++j) {
//				quguo[i][j]=0;
//			}
//		}
//		jichengji[q]=cnt;
//		cnt=0;
//	}
//	for(int i=0;i<a;i++){
//		if(jichengji[i]==1){
//			cout<<"YES"<<endl;
//		}
//		else{
//			cout<<"NO"<<endl;
//		}
//	}
//	return 0;
//}






//#include<iostream>
//int f[5001]; 
//using namespace std;
//int find(int x){
//	if(f[x]==x)
//		return x;
//	return f[x]=find(f[x]);
//}
//int main(){
//	int n,m,p;
//	cin>>n>>m>>p;
//	int i,a,b;
//	for(i=1;i<n+1;i++){//初始化 
//		f[i]=i;}
//	for(i=0;i<m;i++){//合并 
//		cin>>a>>b;
//		f[find(a)]=find(b);}
//	for(i=0;i<p;i++){//询问 
//		cin>>a>>b;
//		if(find(a)==find(b))//重要 
//			cout<<"Yes\n";
//		else
//		{cout<<"No\n";}     
//	}
//	return 0;
//}



#include<iostream>
int f[20001]; 
using namespace std;
int find(int x){
	if(f[x]==x)
		return x;
	return f[x]=find(f[x]);
}
int main(){
	int m,n,x,y,a,b,p1=0,p2=0;
	cin>>m>>n>>x>>y;
	for(int i=1;i<=m+n;i++){f[i]=i;}
	for(int i=0;i<x+y;i++){ 
		cin>>a>>b;
		if(a<0)a=m-a;
		if(b<0)b=m-b;
		f[find(a)]=find(b);
	}
	for(int i=2;i<=m;i++){
		if(find(1)==find(i))
			p1+=1;     
	}
	for(int i=m+2;i<=n+m;i++){
		if(find(m+1)==find(i))
			p2+=1;     
	}
	if(p1>p2)cout<<p2+1;
	else cout<<p1+1;
	return 0;
}

