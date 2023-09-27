//Kruskal克鲁斯卡尔算法
//选权最小而且无环 
//先给边排序，用bubble
//无环：先用find函数找爹，
//再用 father[u]=v;这句合并 
#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
int gh[12][12];
int edgecount,n;// edgecount表示一共多少条边 
int father[120];//全局后，函数中不用加 father[] 
struct edge{ //存储边的情况，ed是边长，qi起点，zh终点 
	int ed,qi,zh;
};
edge a[120];
void init(){
	freopen("datastr.txt","r",stdin);
	cin>>n;//总共多少个结点 
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++){  
		    cin>>gh[i][j];   
		    if(gh[i][j]<1000 && i < j){//读入数据是14条边，要去掉一半        
		   		a[edgecount].ed=gh[i][j];
		   		a[edgecount].qi=i;
		   		a[edgecount].zh=j;
		   		edgecount++;
		    }//edgecount应该为7条边 
		}   
	for (i=0;i<n;i++){ 
		father[i]=i;
	}
}
bool cmp (edge x, edge y){
	return x.ed < y.ed;
}
int find( int pos){
    if (father[pos] ==pos)
        return pos;
    return father[pos] = find( father[pos]);
}     
int main(){
	int tot,i,j,p,u,v;     
	init();
	//把7条边排序，按从小到大的顺序        
	sort(a,a+edgecount,cmp);	
	//从最短的那条边开始 
	tot=0;          
	p=0;  //记录边数 
	int m=0;//记录当前已经选到第几条边了    
	while (m<n-1){      
		if (find(a[p].qi)!=find(a[p].zh)) {
			tot+=a[p].ed;
			cout<<a[p].qi<<"-->"<<a[p].zh<<endl;
			father[find(a[p].qi)]=find(a[p].zh);           
			m++; 		        
		}
		p++;
	}
    cout<<tot<<endl; 
    return 0;
}     
