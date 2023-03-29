#include <iostream>
#include <string.h>
using namespace std;
int m, n;
string field[1001];
short quguo[1001*1001]={0};
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
	char temp[4] = {0};
  int flag = 1;

  zou_gou = 1;
  while (flag) {
    
    quguo[x*n+y] = zou_gou;
    for (int i=-zou_gou;i<=zougou;i++) {
      for (int j=-zou_gou;j<=zou_gou;j++){

        xx = x +i;
        yy = y +j;
        zz = xx*n+yy;
        if (zou_gou[zz] == zou_gou) {

       }
        xx = x + dx[0];
        yy = y + dy[0];
    		if (xx <0 || xx >= n || yy < 0 || yy >= n || quguo[zz]==zou_gou || field[xx][yy]==field[x][y]) continue;
      }
    
    }
  
  }
	for (int k = 0; k < 4; ++k) {
		if (xx <0 || xx >= n || yy < 0 || yy >= n || quguo[zz]==zou_gou || field[xx][yy]==field[x][y]) continue;
			
		temp[k] = 1;
		cnt+=1;
		quguo[zz]=zou_gou;		
	}
	for (int k = 0; k < 4; ++k) {
		if (temp[k] == 1)
			zou_migong(x + dx[k], y + dy[k] , n,zou_gou);
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
