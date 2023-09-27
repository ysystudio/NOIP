//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m,sum=1;
//int bo[4][4],bol[4][4];
//int dx[]={0,0,1,1};
//int dy[]={-1,1,0,0};
//void bfs(int xxx,int yyy){
//	queue<int> q;
//	int bol[m][n];
//	
//	bol[n][m]=-1;
//	q.push(xxx);
//	q.push(yyy);
//	while(!q.empty()){
//		int x=q.front();
//		q.pop();
//		int y=q.front();
//		q.pop();
//		for(int i=0;i<4;++i){
//			int xx=x+dx[i];
//			int yy=y+dy[i];
//			if(xx>0 && xx<=n && yy>0 && yy<=m && bol[xx][yy]!=bo[x][y] && bol[xx][yy]!=-1){
//				bol[xx][yy]=-1;
//				sum+=1;
//				q.push(xx);
//				q.push(yy);
//			}
//		}
//	}
//}
//int main(){
//	int x,y;
//	string a;
//	cin>>n;
//	cin>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a;
//		for(int j=1;j<=m;j++){
//			bo[i][j]=a[j-1]-48;
//			bol[i][j]=a[j-1]-48;
//		}
//	}
//	while(true){
//		cin>>x;
//		cin>>y;
//		bfs(x,y);
//		cout<<sum<<endl;
//		sum=1;
//		}
//	return 0;
//}




//#include <iostream>
//#include <string.h>
//using namespace std;
//int m, n;
//string field[1001];
//char quguo[1001*1001];
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//int cnt=1;
//void mi(int x, int y) {
//	for (int k = 0; k < 4; ++k) {
//		int xx = x + dx[k];
//		int yy = y + dy[k];
//		if (xx >=0 && xx < n && yy >=0 && yy < n) {
//			if((quguo[xx*n+yy]==0) && (field[xx][yy]!=field[x][y])){
//				cnt+=1;
//				quguo[xx*n+yy]=1;
//				mi(xx, yy);
//			}
//		}
//	}
//	return;
//}
//int main() {
//	char a;
//	cin >> n >> m;
//	int da[m];
//	for (int i = 0; i < n; ++i) {
//		cin>>field[i];
//	}
//	int x,y;
//	for(int k=0;k<m;k++){
//		memset(quguo,0,n*n);
//		cin>>x>>y;
//		y-=1;
//		x-=1;
//		quguo[x*n+y]=1;
//		mi(x,y);
//		da[k]=cnt;
//		cnt=1;
//	}
//	for(int i=0;i<m;i++){
//		cout<<da[i]<<endl;
//	}
//	return 0;
//}



#include <iostream>
#include <queue>
using namespace std;
int caw,farm;
int dx[]={1,-1,0};
int t=100000;
void bfs(int xxx,int time){
	queue<int> q;
	q.push(xxx);
	q.push(time);
	while(!q.empty()){
		int xx=q.front();
		q.pop();
		int ti=q.front();
		q.pop();
		for(int i=0;i<3;++i){
			int x=0;
			if(i==2){x=xx*2;}
			else {x=xx+dx[i];}
			ti+=1;
			if(x>0){
				if(x==caw && ti<t){
					t=ti;
					break;
				}
				else if(ti<t && x<cow+4){
					q.push(x);
					q.push(ti);
				}
			}
			ti-=1;
		}
	}
}
int main(){
	cin>>farm;
	cin>>caw;
	if(caw<farm)
	t=farm-caw;
	else t=caw-farm;
	bfs(farm,0);
	cout<<t;
	return 0;
}
