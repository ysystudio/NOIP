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
    for(i=1;i<n+1;i++){//��ʼ�� 
      f[i]=i;}      
    for(i=0;i<m;i++){//�ϲ� 
      cin>>a>>b;
      f[find(a)]=find(b);
	}  
    for(i=0;i<p;i++){//ѯ�� 
      cin>>a>>b;
      if(find(a)==find(b))//��Ҫ 
      //if(f[a]==f[b])���� 
        cout<<"Yes\n";
      else
      {cout<<"No\n";}     
    }
    return 0;
}
