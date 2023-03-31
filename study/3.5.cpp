//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m;
//int bo[405][405];
//int dx[]={-2,-2,-1,-1,1,1,2,2};
//int dy[]={-1,1,-2,2,-2,2,-1,1};
//void bfs(int xxx,int yyy){
//	queue<int> q;
//	q.push(xxx);
//	q.push(yyy);
//	while(!q.empty()){
//		int x=q.front();
//		q.pop();
//		int y=q.front();
//		q.pop();
//		for(int i=0;i<8;++i){
//			int xx=x+dx[i];
//			int yy=y+dy[i];
//			if(xx>0 && xx<=n && yy>0 && yy<=m && bo[xx][yy]==-1){
//				bo[xx][yy]=bo[x][y]+1;
//				q.push(xx);
//				q.push(yy);
//			}
//		}
//	}
//}
//int main(){
//	int x,y;
//	scanf("%d%d%d%d",&n,&m,&x,&y);
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=m;j++){
//			bo[i][j]=-1;
//		}
//	}
//	bo[x][y]=0;
//	bfs(x,y);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout<<bo[i][j]<<"    ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int yao[20][2], a,b,x=0;
void jia(int nowsum){
	int sum=nowsum;
	if(sum==b && x==0){
		cout<<"YES";
		x=1;
		return;
	}
	for(int i=0;i<a;i++){
		if(sum+yao[i][0]<=b && yao[i][1]!=0){
			sum+=yao[i][0];
			yao[i][1]-=1;
			jia(sum);
			sum-=yao[i][0];
			yao[i][1]+=1;
		}
	}
	if(x==0)cout<<"NO";
	return;
}
int main(){
	cin>>a;
	cin>>b;
	for(int i=0;i<a;i++){
		cin>>yao[i][0];
		cin>>yao[i][1];
	}
	jia(0);
	return 0;
}




