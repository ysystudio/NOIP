
#include<iostream>//djstl
#include<cstdio>
#include<cstring>
#include<queue>
//#include<set>
#include<vector>
using namespace std;
/*
  const int inf = 1e9+7;
  struct edge{
  int w,v;
  };
  struct node{
  int pos,dis;
  bool operator <(const node &a)const{
  return dis>a.dis;
  }
  };
  vector<edge> adj[100005];
  priority_queue<node> q;
  int dist[100005];
  bool vis[100005];
  int n,m,s;
  void djstl(){
  for(int i = 1; i <= n; i++){
  vis[i] = false;
  dist[i] = inf;
  }
  node node_u;
  node_u.pos = s;
  node_u.dis = 0;
  q.push(node_u );
  dist[s] = 0;
  while(!q.empty()){
  node_u = q.top();
  q.pop();
  if(vis[node_u.pos]==true){
  continue;
  }
  vis[node_u.pos]=true;//c处理过是真 
  for(int i = 0; i < adj[node_u.pos].size(); i++){
  int v = adj[node_u.pos][i].v;
  int w = adj[node_u.pos][i].w;
  if(dist[node_u.pos] + w < dist[v]){
  dist[v] = dist[node_u.pos]+w;
  node tmp;
  tmp.dis = dist[v];
  tmp.pos = v;
  q.push(tmp);
  }
  }
  }
  }
  int main(){
  scanf("%d%d%d",&n, &m, &s);	
  int u;
  edge vw;
  for(int i=0;i<m;i++){
  scanf("%d%d%d", &u, &vw.v, &vw.w);
  adj[u].push_back(vw);
  }
  djstl();
  for(int i=1;i<=n;i++){
  cout<<dist[i]<<" ";
  }
  return 0;
  }
 */

struct edge{
	int v,w;
}; 
struct node{
	int v,dis;
	bool operator <(const node &a)const{
		return dis>a.dis;
	}
};
vector<edge> adj[100005];
priority_queue<node> q;
int m,n,s,inf=1e9+5;
int dist[100005];
bool visit[100005];

void djstl(){
	for(int i=1;i<=n;i++){
		dist[i]=inf;
		visit[i]=false;
	}
	dist[s]=0;
	node first;
	first.dis=0;
	first.v=s;
	q.push(first);
	while(!q.empty()){
		node t;
		t=q.top();
		q.pop();
		if(visit[t.v]==true){
			continue;
		}
		visit[t.v]=true;
		for(int i=0;i<int(adj[t.v].size());i++){
			int v=adj[t.v][i].v;
			int w=adj[t.v][i].w;
			if(dist[t.v]+w<dist[v]){
				dist[v]=dist[t.v]+w;
				node tv;
				tv.v=v;
				tv.dis=dist[v];
				q.push(tv);
			}
		}
	}
}

int main(){
	cin>>n>>m>>s;
	edge input;
	int u;
	for(int i=0;i<m;i++){
		cin>>u>>input.v>>input.w;
		adj[u].push_back(input);
	}
	djstl();
	for(int i=1;i<=n;i++){
		cout<<dist[i]<<" ";
	}
	return 0;
}


