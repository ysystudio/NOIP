//#include <vector>
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int  main(){
//	vector<int >a;
//	int x,t;
//	cin>>x;
//	for(int i=0;i<x;i++){
//		cin>>t;
//		a.push_back(t);
//	}
//	a.pop_back();
//	a.pop_back();
//	a.clear();
//	sort(a.begin(),a.end());
//	for(int i=0;i<a.size();i++){
//		cout<<a[i]<<endl;
//	}
//}
//a.pop_back();
//a.push_back();
//a.size();
//a.empty();
//




//#include <iostream>
//using namespace std;
//int tu[8][8],zou[7];
//void zoutu(int qi){
//	for(int i=0;i<7;i++){
//		if(tu[qi][i]==1 && zou[i]!=1){
//			cout<<'-'<<i;
//			zou[i]=1;
//			zoutu(i);
//		}
//	}
//	return;
//}
//int main(){
//	for(int i=0;i<7;i++){
//		for(int j=0;j<7;j++){
//			cin>>tu[i][j];
//		}
//	}
//	cout<<0;
//	zoutu(0);
//	return 0;
//}
//0 1 0 1 1 1 0
//
//0 0 1 0 0 0 0
//
//0 0 0 0 0 1 0
//
//0 0 1 0 0 0 0
//
//0 0 0 0 0 0 1
//
//0 0 0 0 0 0 0
//
//0 0 1 0 0 0 0


//#include <iostream>
//#include <queue>
//using namespace std;
//int tu[8][8],zou[7];
//queue<int>q;
//void zoutu(){
//	int qi;
//	while(!q.empty()){
//		qi=q.front();
//		q.pop();
//		for(int i=0;i<7;i++){
//			if(tu[qi][i]==1 && zou[i]!=1){
//				cout<<'-'<<i;
//				zou[i]=1;
//				q.push(i);
//			}
//		}	
//	}
//	return;
//}
//int main(){
//	for(int i=0;i<7;i++){
//		for(int j=0;j<7;j++){
//			cin>>tu[i][j];
//		}
//	}
//	cout<<0;
//	q.push(0);
//	zoutu();
//	return 0;
//}

/*
#include <iostream>
#include <stdlib.h>
using namespace std;
struct cunzhuang{
int f;
int t;
int l;

};
cunzhuang cun[100005];
int f[1005];
int cmp(const void* x,const void* y){
	return ((cunzhuang*)x)->l - ((cunzhuang*)y)->l;
}
int find(int x){
	if(f[x]==x)
		return x;
	return f[x]=find(f[x]);
}
int main(){
	int m,n,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		f[i]=i;
	}
	for(int i=1;i<=m;i++){
		cin>>cun[i].f>>cun[i].t>>cun[i].l;
	}
	qsort(cun+1,m,sizeof(cunzhuang),cmp);
	for(int i=1;i<=m;i++){
		cnt=cun[i].l;
		f[find(cun[i].f)]=find(cun[i].t); 
		int j;
		for(j=2;j<=n;j++){
			if(find(1)!=find(j))
				break;
		}
		if(j>n){
			cout<<cnt;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}

 */

#include <iostream>
#include <string.h>
using namespace std;
int m, n;
string field[1001];
int quguo[1001*1001];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int cnt=1;
//void zou_migong(int x, int y, int n , int zou_gou) {
//	// x,y: 起始点 , n: 迷宫的大小n*n, p:走过的标记
//	for (int k = 0; k < 4; ++k) {
//		int xx = x + dx[k];
//		int yy = y + dy[k];
//		if (xx >=0 && xx < n && yy >=0 && yy < n) {
//			if((quguo[xx*n+yy]!=zou_gou) && (field[xx][yy]!=field[x][y])){
//				cnt+=1;
//				quguo[xx*n+yy]=zou_gou;
//				zou_migong(xx, yy , n,zou_gou);
//			}
//		}
//	}
//	return;
//}

void zou_migong(int x, int y, int n , int zou_gou) {
	// x,y: 起始点 , n: 迷宫的大小n*n, p:走过的标记
	int xx, yy,zz;
	for (int k = 0; k < 4; ++k) {
		xx = x + dx[k];
		yy = y + dy[k];
		zz = xx*n+yy;
		if (xx >=0 && xx < n && yy >=0 && yy < n) {
			if((field[xx][yy]!=field[x][y]) && (quguo[zz]!=zou_gou)){
				cnt+=1;
				quguo[zz]=zou_gou;
				zou_migong(xx, yy , n,zou_gou);
			}
		}
	}
	return;
}
int main() {
	char a;
	cin >> n >> m;
	int max_zouguo[m];
	for (int i = 0; i < n; ++i) {
		cin>>field[i];
	}
	int x,y;
	memset(quguo,0,n*n);
	for(int k=0;k<m;k++){
		cin>>x>>y;
		y-=1;
		x-=1;
		quguo[x*n+y]=k+1;
		zou_migong(x,y,n,k+1);
		max_zouguo[k]=cnt;
		cnt=1;
	}
	for(int i=0;i<m;i++){
		cout<<max_zouguo[i]<<endl;
	}
	return 0;
}
