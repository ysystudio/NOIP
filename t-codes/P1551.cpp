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
      f[find(a)]=find(b);
	}  
    for(i=0;i<p;i++){//询问 
      cin>>a>>b;
      if(find(a)==find(b))//重要 
      //if(f[a]==f[b])错误 
        cout<<"Yes\n";
      else
      {cout<<"No\n";}     
    }
    return 0;
}
