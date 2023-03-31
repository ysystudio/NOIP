//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//	char h[25][105]={'0'};
//	int x=0,alen[25]={0},t=0,max_h=0,max_z=0;
//	cin>>x;
//	cin.get();
//	for(int i=1;i<=x;i++){
//		cin.getline(h[i],101);
//		if(strlen(h[i])>=t){
//			t=strlen(h[i]);
//		}
//	}
//	for(int i=1;i<=x;i++){
//		if(int(strlen(h[i]))==t){
//			alen[i]+=1;
//		}
//	}
//	for(int i=0;i<t;i++){
//		for(int j=1;j<=x;j++){
//			if(h[j][i]>max_z && alen[j]!=0){
//				max_z=h[j][i];
//				max_h=j;
//			}
//		}
//		for(int j=1;j<=x;j++){
//			if(alen[j]!=0){
//				if(h[j][i]==max_z && j!=max_h)
//					break;
//				cout<<max_h<<endl;
//				for(int i=0;i<t;i++){
//					cout<<int(h[max_h][i])-int('0');
//				}
//				return 0;
//			}
//		}
//	}
//	return 0;
//}



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
#include <iostream>
using namespace std;
int zhiyuanzhe(){
	int m,n,xian,x=1,t1=0,t2=0,xian_t=0;
	cin>>m>>n;
	xian=int(n*1.5);
	int zhi[2][m+4];
	for(int i=0;i<m;i++){
		cin>>zhi[0][i];
		cin>>zhi[1][i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<m-1;i++){
			if(zhi[1][i]<zhi[1][i+1] || (zhi[1][i]==zhi[1][i+1]&&zhi[0][i]>zhi[0][i+1])){
				t1=zhi[0][i];
				t2=zhi[1][i];
				zhi[0][i]=zhi[0][i+1];
				zhi[1][i]=zhi[1][i+1];
				zhi[0][i+1]=t1;
				zhi[1][i+1]=t2;
				x+=1;
			}
		}
	}
	xian_t=zhi[1][xian-1];
	xian=0;
	for(int i=0;i<m;i++){
		if(zhi[1][i]>=xian_t){
			xian++;
		}
	}
	cout<<xian_t<<" " ;
	cout<<xian<<endl;
	for(int i=0;i<m;i++){
		if(zhi[1][i]>=xian_t){
			cout<<zhi[0][i]<<" "<<zhi[1][i]<<endl;
		}
	}
	return 0;
}



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int h[3][50004];
void pai(int l,int r)
{
	int mid=h[2][(l+r)/2];
	int i=l,j=r;
	do{
		while(h[2][i]<mid) i++;
		while(h[2][j]>mid) j--;
		if(i<=j){
			swap(h[2][i],h[2][j]);
			swap(h[0][i],h[0][j]);
			swap(h[1][i],h[1][j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) pai(l,j);
	if(i<r) pai(i,r);
}
int main(){
	double sum=0;
	int x=1,t1=0,t2=0,t3=0,dian=0;
	cin>>dian;
	for(int i=0;i<dian;i++){
		cin>>h[0][i]>>h[1][i]>>h[2][i];
	}
	pai(0,dian-1);
	for(int i=0;i<dian-1;i++){
		sum+=sqrt(((h[0][i]-h[0][i+1])*(h[0][i]-h[0][i+1]))+
			((h[1][i]-h[1][i+1])*(h[1][i]-h[1][i+1]))+
			((h[2][i]-h[2][i+1])*(h[2][i]-h[2][i+1])));
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
}




//void pai(int l,int r)
//{
//	int mid=a[(l+r)/2];
//	int i=l,j=r;
//	do{
//		while(a[i]<mid) i++;
//		while(a[j]>mid) j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	if(l<j) pai(l,j);
//	if(i<r) pai(i,r);
//}
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	} 
//	pai(1,n);
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	} 
//	return 0;
//}



//	while(x!=0){
//		x=0;
//		for(int i=0;i<dian-1;i++){
//			if(h[2][i]>h[2][i+1]){
//				t1=h[0][i];
//				t2=h[1][i];
//				t3=h[2][i];
//				h[0][i]=h[0][i+1];
//				h[1][i]=h[1][i+1];
//				h[2][i]=h[2][i+1];
//				h[0][i+1]=t1;
//				h[1][i+1]=t2;
//				h[2][i+1]=t3;
//				x+=1;
//			}
//		}
//	}
