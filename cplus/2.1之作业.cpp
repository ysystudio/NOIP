#include <iostream>
#include <cstring>
using namespace std;
int yu_zhou_zong_tong(){
	string h[25],max_z="0";
	int x=0,alen[25]={0};
	int t,max_len=0,max_h=0;
	cin>>x;
	cin.get();
	for(int i=1;i<=x;i++){
		cin>>h[i];
		t = h[i].length();
		if(t > max_len){
			max_len = t;
		}
	}
	for(int i=1;i<=x;i++){
		if(h[i].length()==max_len){
			alen[i]+=1;
		}
	}
	for(int j=1;j<=x;j++){
		if(alen[j]!=0){
			if(h[j]>max_z){
				max_z=h[j];
				max_h=j;
			}
		}
	}
	cout<<max_h<<endl;
	cout<<max_z;
	return 0;
}



//#include <iostream>
//using namespace std;
//const int MAXN = 105;
//int m, n;
//char field[MAXN][MAXN];
//int color[MAXN][MAXN];
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//int colorCount;
//
//void floodFill(int x, int y) {
//	
//	for (int k = 0; k < 4; ++k) {
//		int xx = x + dx[k];
//		int yy = y + dy[k];
//		if (xx > 0 && xx <= m && yy > 0 && yy <= n) {
//			if(color[xx][yy] == 0 && field[xx][yy]=='W'){
//				color[xx][yy] = colorCount;floodFill(xx, yy);
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= m; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			cin >> field[i][j];
//		}
//	}
//	for (int i = 1; i <= m; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			if (field[i][j] =='W'  && color[i][j] == 0) {
//				colorCount++;
//				color[i][j] =colorCount; 
//				floodFill(i, j);
//			}
//		}
//	}
//	cout << colorCount << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int zhiyuanzhe(){
//	int m,n,xian,x=1,t1=0,t2=0,xian_t=0;
//	cin>>m>>n;
//	xian=int(n*1.5);
//	int zhi[2][m+4];
//	for(int i=0;i<m;i++){
//		cin>>zhi[0][i];
//		cin>>zhi[1][i];
//	}
//	while(x!=0){
//		x=0;
//		for(int i=0;i<m-1;i++){
//			if(zhi[1][i]<zhi[1][i+1] || (zhi[1][i]==zhi[1][i+1]&&zhi[0][i]>zhi[0][i+1])){
//				t1=zhi[0][i];
//				t2=zhi[1][i];
//				zhi[0][i]=zhi[0][i+1];
//				zhi[1][i]=zhi[1][i+1];
//				zhi[0][i+1]=t1;
//				zhi[1][i+1]=t2;
//				x+=1;
//			}
//		}
//	}
//	xian_t=zhi[1][xian-1];
//	xian=0;
//	for(int i=0;i<m;i++){
//		if(zhi[1][i]>=xian_t){
//			xian++;
//		}
//	}
//	cout<<xian_t<<" " ;
//	cout<<xian<<endl;
//	for(int i=0;i<m;i++){
//		if(zhi[1][i]>=xian_t){
//			cout<<zhi[0][i]<<" "<<zhi[1][i]<<endl;
//		}
//	}
//	return 0;
//}
//
//
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int h[3][50004];
//void pai(int l,int r)
//{
//	int mid=h[2][(l+r)/2];
//	int i=l,j=r;
//	do{
//		while(h[2][i]<mid) i++;
//		while(h[2][j]>mid) j--;
//		if(i<=j){
//			swap(h[2][i],h[2][j]);
//			swap(h[0][i],h[0][j]);
//			swap(h[1][i],h[1][j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	if(l<j) pai(l,j);
//	if(i<r) pai(i,r);
//}
//int panpa(){
//	double sum=0;
//	int dian=0;
//	cin>>dian;
//	for(int i=0;i<dian;i++){
//		cin>>h[0][i]>>h[1][i]>>h[2][i];
//	}
//	pai(0,dian-1);
//	for(int i=0;i<dian-1;i++){
//		sum+=sqrt(((h[0][i]-h[0][i+1])*(h[0][i]-h[0][i+1]))+
//			((h[1][i]-h[1][i+1])*(h[1][i]-h[1][i+1]))+
//			((h[2][i]-h[2][i+1])*(h[2][i]-h[2][i+1])));
//	}
//	cout<<fixed<<setprecision(3)<<sum;
//	return 0;
//}



#include <iostream>
using namespace std;
bool cmp(const string &a,const string &b) { 
	return (a+b < b+a);
}
int pinshu(){
	string h[25];
	int a,x=1;
	cin>>a;
	cin.get();
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<a-1;i++){
			if(cmp(h[i],h[i+1])){
				swap(h[i],h[i+1]);
				x+=1;
			}
		}
	}
	for(int i=0;i<a;i++){
		cout<<h[i];
	}
	return 0;
}



#include <iostream>
using namespace std;
int nkxudui(){
	int a;
	cin>>a;
	int h[a],t=0;
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(h[i]>h[j])
				t++;
		}
	}
	cout<<t;
	return 0;
}



//#include<iostream>
//using namespace std;
//int n,a[3][100001];
//void pai(int l,int r)
//{
//	int mid=a[1][(l+r)/2];
//	int i=l,j=r;
//	do{
//		while(a[1][i]>mid) i++;
//		while(a[1][j]<mid) j--;
//		if(i<=j){
//			swap(a[0][i],a[0][j]);
//			swap(a[1][i],a[1][j]);
//			swap(a[2][i],a[2][j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	if(l<j) pai(l,j);
//	if(i<r) pai(i,r);
//	return ;
//}
//void bi(int m,int n){
//	if(a[2][m]>a[2][n]) a[1][m]+=1;
//	else if(a[2][m]<a[2][n]) a[1][n]+=1;
//	return;
//}
//int ruishilun(){
//	
//	int N,R,Q;
//	cin>>N>>R>>Q;
//	for(int i=1;i<=2*N;i++){
//		cin>>a[1][i];
//		a[0][i]=i;
//	} 
//	for(int i=1;i<=2*N;i++){
//		cin>>a[2][i];
//	}
//	for(int i=0;i<R;i++){
//		pai(1,2*N);
//		for(int j=0;j<N;j++){
//			bi(2*j+1,2*j+2);
//		}
//	}
//	pai(1,2*N);
//	cout<<a[0][Q];
//	return 0;
//}


#include <iostream>
using namespace std;
int cnt=0;
char h[10000][10];
void zhin(double mei,double liao){
	int mei_do=mei,liao_do=liao;
	if(mei_do==0 && liao_do==0){
		cnt++;
		return;
	}
	for(int i=1;i<=3;i++){
		if(mei-i>=liao-1&&liao-1>=(mei-i)/3){
			h[cnt][int(10-liao)]=char(i);
			mei_do-=i;liao_do-=1;
			zhin(mei-i,liao-1);
		}
	}
}
int main(){
	int mei;
	cin>>mei;
	zhin(mei,10);
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		for(int j=0;j<10;j++){
			if(h[i][j]==0){
				h[i][j]=h[i-1][j];
			}
				cout<<int(h[i][j])<<" ";
		}
		cout<<endl;
	}
	return 0;
}





