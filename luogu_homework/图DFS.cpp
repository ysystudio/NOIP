#include <iostream>
using namespace std;
int a[100][100], vis[100], num;
void dfs(int h){
	for (int i1=0; i1< num; i1++)
		if (a[h][i1]==1 && vis[i1]==0){
		        vis[i1] = 1;
		        cout<<"-"<<i1;
		        dfs(i1);
		}
}
int main(){
	num = 7;
    for (int i=0;i<num;i++)
        for (int j=0;j<num;j++)
            cin>>a[i][j]; 
    vis[0] = 1;
    cout<< 0;
    dfs(0);
    return 0;
}
