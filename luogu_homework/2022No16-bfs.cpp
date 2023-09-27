#include <iostream>
#include <string.h>
using namespace std;
int m, n;
string field[1001];
short quguo[1001*1001]={0};
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int cnt=1;
void zou_migong(int x, int y, int n , int zou_gou) {
  // x,y: 起始点 , n: 迷宫的大小n*n, p:走过的标记
  for (int k = 0; k < 4; ++k) {
    int xx = x + dx[k];
    int yy = y + dy[k];
    if (xx >=0 && xx < n && yy >=0 && yy < n) {
      if((quguo[xx*n+yy]!=zou_gou) && (field[xx][yy]!=field[x][y])){
        cnt+=1;
        quguo[xx*n+yy]=zou_gou;
        zou_migong(xx, yy , n,zou_gou);
      }
    }
  }
  return;
}
int main() {

	cin >> n >> m;
	short max_zouguo[m];
	for (int i = 0; i < n; ++i) {
		cin>>field[i];
	}
	int x,y;
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


// #include <iostream> 
// #include <queue>
// using namespace std;
// int m, n;

// #define N 1002
// char field[N][N]={0};
// int quguo[N][N]={0};
// int dx[] = {1, -1, 0, 0};
// int dy[] = {0, 0, 1, -1};

// typedef struct _Loc{
//     int x;
//     int y;
//   }Loc;

// int zou_migong_bfs(int x, int y, int n ,int zou_gou) {
// 	// x,y: 起始点 , n: 迷宫的大小n*n
// 	int xx, yy,xxx,yyy;
//   int cnt = 1;
//   
//   queue<Loc> qu;

//   Loc l; l.x = x; l.y = y; qu.push(l);
//   quguo[x][y] = zou_gou; //qugio init with all 0

//   while (!qu.empty()) {

//     Loc l; l = qu.front();  xx=l.x;   yy=l.y; qu.pop();
//     if(xx<1 || xx > n || yy < 1 || yy > n )  continue;

//     for (int k = 0; k < 4; k++) {
//       xxx = xx+dx[k]; yyy = yy+dy[k];
//       if( quguo[xxx][yyy]!=zou_gou && field[xx][yy]!=field[xxx][yyy] && quguo[xxx][yyy]!= -1 ) {
//         Loc l; l.x = xxx; l.y=yyy; qu.push(l);
//         quguo[xxx][yyy] = zou_gou;
//         cnt ++;
//       }
//     }

//   }
// 	return cnt;
// }

// int main() {
// 	cin >> n >> m;
// 	short max_zouguo[m];
//   
//   for(int i=0;i<n;i++)
//         for(int j=0;j<n;j++)
//             cin>>field[i+1][j+1];//读入地图 
//                                  //
//   for(int i=0;i<=n+1;i++){
//     quguo[0][i] = -1;
//     quguo[n+1][i] = -1;
//     quguo[i][0] = -1;
//     quguo[i][n+1] = -1;
//   }

// 	int x,y;
// 	for(int k=0;k<m;k++){
// 		cin>>x>>y;
//     max_zouguo[k]=zou_migong_bfs(x,y,n,k+1);
//     // cout << zou_migong_bfs(x,y,n,k+1) << endl;
// 	}

// 	for(int i=0;i<m;i++){
// 		cout<<max_zouguo[i]<<endl;
// 	}
// 	return 0;
// }
