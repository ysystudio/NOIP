//最小生成树 1:prim普里母算法 
#include <iostream>
#include <cstdio>
using namespace std;
int gh[12][12], vs[12], mini, n, u, v ,w;
int main(){
  	freopen("datastr.txt","r",stdin); 
  	cin>>n;//总共多少个结点 
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
		  cin>>gh[i][j];   
    vs[0]=1;
	for (int i=0;i<n-1;i++){//n-1个边 	
		w=10000;
		for (int j=0;j<n;j++){//在最小生成树里的 
		    if (vs[j]==1){		     
		        for (int k=0;k<n;k++){//不在最小生成树里的
		          	if ((vs[k]==0)&&(gh[j][k]<w)){		            
		            	u=j;
						v=k;
						w=gh[j][k];
					}
		        }
		    }          
		}
		vs[v]=1;
		mini=mini+w;
		cout<<u<<"----"<<v<<endl;
	}   
    cout<<"min length is "<<mini;
    
    return 0;
}
