#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <vector>


/*
# 图DFS搜索
## 题目描述
顶点从0号开始，进行DFS周游。
## 输入格式
n*n的矩阵
## 输出格式
按DFS顺序输出顶点号，中间用-连接，见样例。
## 样例 #1
### 样例输入 #1
```
0 1 0 1 1 1 0
0 0 1 0 0 0 0
0 0 0 0 0 1 0
0 0 1 0 0 0 0
0 0 0 0 0 0 1
0 0 0 0 0 0 0
0 0 1 0 0 0 0
```
### 样例输出 #1
```
0-1-2-5-3-4-6
```*/
#include <iostream>

namespace dfs
{
using namespace std;

int dfs_tu[8][8], dfs_zou[7];
void dfs_zoutu(int qi) {
    for (int i = 0; i < 7; i++) {
        if (dfs_tu[qi][i] == 1 && dfs_zou[i] != 1) {
            cout << '-' << i;
            dfs_zou[i] = 1;
            dfs_zoutu(i);
        }
    }
    return;
}
int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> dfs_tu[i][j];
        }
    }
    cout << 0;
    dfs_zoutu(0);
    return 0;
}
}


/*
# 图BFS搜索
## 题目描述
顶点从0号开始，进行BFS周游。
## 输入格式
n*n的矩阵
## 输出格式
按BFS顺序输出顶点号，中间用-连接，见样例。
## 样例 #1
### 样例输入 #1
```
0 1 0 1 1 1 0
0 0 1 0 0 0 0
0 0 0 0 0 1 0
0 0 1 0 0 0 0
0 0 0 0 0 0 1
0 0 0 0 0 0 0
0 0 1 0 0 0 0
```
### 样例输出 #1
```
0-1-3-4-5-2-6
```*/
#include <iostream>
#include <queue>

namespace bfs 
{

using namespace std;
int bfs_tu[8][8], bfs_zou[7];
queue<int> bsf_q;
void bfs_zoutu() {
    int qi;
    while (!bsf_q.empty()) {
        qi = bsf_q.front();
        bsf_q.pop();
        for (int i = 0; i < 7; i++) {
            if (bfs_tu[qi][i] == 1 && bfs_zou[i] != 1) {
                cout << '-' << i;
                bfs_zou[i] = 1;
                bsf_q.push(i);
            }
        }
    }
    return;
}
int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> bfs_tu[i][j];
        }
    }
    cout << 0;
    bsf_q.push(0);
    bfs_zoutu();
    return 0;
}

}


/*
# 【模板】最小生成树
## 题目描述
如题，给出一个无向图，求出最小生成树，如果该图不连通，则输出 `orz`。
## 输入格式
第一行包含两个整数 $N,M$，表示该图共有 $N$ 个结点和 $M$ 条无向边。
接下来 $M$ 行每行包含三个整数 $X_i,Y_i,Z_i$，表示有一条长度为 $Z_i$
的无向边连接结点 $X_i,Y_i$。
## 输出格式
如果该图连通，则输出一个整数表示最小生成树的各边的长度之和。如果该图不连通则输出
`orz`。
## 样例 #1
### 样例输入 #1
```
4 5
1 2 2
1 3 2
1 4 3
2 3 4
3 4 3
```
### 样例输出 #1
// ```
7
```
## 样例 #2
### 样例输入 #1
```
5 18
2 4 276
3 3 435
3 4 608
2 4 860
1 2 318
1 3 547
5 4 419
2 5 98
1 5 460
5 3 399
3 5 240
3 2 733
3 3 903
4 2 909
5 2 206
3 4 810
2 1 115
2 3 419
```
### 样例输出 #1
// ```
729
```

## 提示
数据规模：
对于 $20\%$ 的数据，$N\le 5$，$M\le 20$。
对于 $40\%$ 的数据，$N\le 50$，$M\le 2500$。
对于 $70\%$ 的数据，$N\le 500$，$M\le 10^4$。
对于 $100\%$ 的数据：$1\le N\le 5000$，$1\le M\le 2\times 10^5$，$1\le Z_i \le
10^4$。
样例解释：
![](https://cdn.luogu.com.cn/upload/pic/2259.png)
所以最小生成树的总边权为 $2+2+3=7$。*/

#include <cstdio>
#include <iostream>

namespace smallest_tree
{
using namespace std;

int gh[5001][5001], vs[5001];
int main() {
  int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
  cin >> n >> m;
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <=n; j++){
        gh[i][j]= w_max;
    };
  }
  for (int i = 1; i <= m; i++) {
    cin >> dian1 >> dian2 >> quan;
    if(quan < gh[dian1][dian2]) {
        gh[dian1][dian2] = quan;
        gh[dian2][dian1] = quan;
    }
  }
  vs[1] = 1;
  c = 1;
  for (int i = 1; i <= n - 1; i++) { //遍历n-1
    w = w_max;
    for (int j = 1; j <= n; j++) {
      if (vs[j] == 1) {
        for (int k = 1; k <= n; k++) {
          if ((vs[k] == 0) && (gh[j][k] < w) ) {
            v = k; w = gh[j][k];
          }
        }
      }
    }
    if (w < w_max) {
      vs[v] = 1; mini += w; c++;
      if(c >= n){
        cout<<mini; return 0;
      }
    }
  }
  if( c < n){
        cout<<"orz"; return 0;
  }
  cout << mini;
  return 0;
}

}

#include <cstdio>
#include <iostream>
#include <vector>

namespace smalest_tree_vec
{
using namespace std;

int vs[5001];
struct edge {
    int v,w;
};
vector<edge> adj[5001];

int main() {
      int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
  cin >> n >> m;
    for (int i = 1; i <= m; i++) {
    cin >> dian1 >> dian2 >> quan;
    edge edge_t;
    edge_t.v = dian2; edge_t.w = quan;
    adj[dian1].push_back(edge_t);
    edge_t.v = dian1; edge_t.w = quan;
    adj[dian2].push_back(edge_t);
      }
  vs[1] = 1;
  c = 1;
  for (int i = 1; i <= n - 1; i++) {
    w = w_max;
    for (int j = 1; j <= n; j++) {
      if (vs[j] == 1) {
        for (int k = 0; k < adj[j].size(); k++) {
          if ((vs[adj[j][k].v] == 0) && (adj[j][k].w < w) ) {
            v = adj[j][k].v; w = adj[j][k].w;
          }
        }
      }
    }
    if (w < w_max) {
      vs[v] = 1; mini += w; c++;
      if(c >= n){
        cout<<mini; return 0;
      }
    }
  }
    if( c < n){
        cout<<"orz"; return 0;
  }
  cout << mini;
  return 0;
}
}


#include <cstdio>
#include <iostream>
#include <queue>

namespace smalest_tree_pq
{

using namespace std;
int vs[5001];
struct edge {
    int v, w;
    bool operator<(const edge &a) const {
        return w > a.w;
    }
};
priority_queue<edge> adj[5001];
int main() {
    int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> dian1 >> dian2 >> quan;
        edge edge_t;
        edge_t.v = dian2;
        edge_t.w = quan;
        adj[dian1].push(edge_t);
        edge_t.v = dian1;
        edge_t.w = quan;
        adj[dian2].push(edge_t);
    }
    vs[1] = 1;
    c = 1;
    for (int i = 1; i <= n - 1; i++) {
        w = w_max;
        for (int j = 1; j <= n; j++) {
            if (vs[j] == 1) { // 寻找所有在最小生成树里的点
                if (adj[j].size() > 0) {
                    edge edge_t;
                    // 拿到最短的边
                    edge_t = adj[j].top();
                    while (vs[edge_t.v] != 0 && adj[j].size() > 0) {
                        // 如果点在生成树里,从优先队列删除,直到找到不在生成树里的边
                        adj[j].pop();
                        edge_t = adj[j].top();
                    }
                    if (vs[edge_t.v] == 0 && edge_t.w < w) {
                        // 记录边的点和权
                        v = edge_t.v;
                        w = edge_t.w;
                    }
                }
            }
        }
        if (w < w_max) {
            vs[v] = 1;
            mini += w;
            c++;
        }
    }
    if (c < n) { // 如果不是所有点都找到,输出orz
        cout << "orz";
        return 0;
    }
    cout << mini; // 输出最小生成树的权值和
    return 0;
}
}


/*
  # 【模板】单源最短路径（标准版）
  
  ## 题目背景
  
  2018 年 7 月 19 日，某位同学在 [NOI Day 1 T1 归程](https://www.luogu.org/problemnew/show/P4768) 一题里非常熟练地使用了一个广为人知的算法求最短路。
  
  然后呢？
  
  $100 \rightarrow 60$；
  
  $\text{Ag} \rightarrow \text{Cu}$；
  
  最终，他因此没能与理想的大学达成契约。
  
  小 F 衷心祝愿大家不再重蹈覆辙。
  
  ## 题目描述
  
  给定一个 $n$ 个点，$m$ 条有向边的带非负权图，请你计算从 $s$ 出发，到每个点的距离。
  
  数据保证你能从 $s$ 出发到任意点。
  
  ## 输入格式
  
  第一行为三个正整数 $n, m, s$。
  第二行起 $m$ 行，每行三个非负整数 $u_i, v_i, w_i$，表示从 $u_i$ 到 $v_i$ 有一条权值为 $w_i$ 的有向边。
  
  ## 输出格式
  
  输出一行 $n$ 个空格分隔的非负整数，表示 $s$ 到每个点的距离。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  4 6 1
  1 2 2
  2 3 2
  2 4 1
  1 3 5
  3 4 3
  1 4 4
  ```
  
  ### 样例输出 #1
  
  ```
  0 2 4 3
  ```
  
  ## 提示
  
  样例解释请参考 [数据随机的模板题](https://www.luogu.org/problemnew/show/P3371)。
  
  $1 \leq n \leq 10^5$；
  
  $1 \leq m \leq 2\times 10^5$；
  
  $s = 1$；
  
  $1 \leq u_i, v_i\leq n$；
  
  $0 \leq w_i \leq 10 ^ 9$,
  
  $0 \leq \sum w_i \leq 10 ^ 9$。
  
  本题数据可能会持续更新，但不会重测，望周知。
  
  2018.09.04 数据更新 from @zzq
 */

#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<set>
#include<vector>

namespace shortest_path {
using namespace std;

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
}

/*# 邮递员送信

  
  ## 题目描述
  
  有一个邮递员要送东西，邮局在节点 $1$。他总共要送 $n-1$ 样东西，其目的地分别是节点 $2$ 到节点 $n$。由于这个城市的交通比较繁忙，因此所有的道路都是单行的，共有 $m$ 条道路。这个邮递员每次只能带一样东西，并且**运送每件物品过后必须返回邮局**。求送完这 $n-1$ 样东西并且**最终回到邮局**最少需要的时间。
  
  ## 输入格式
  
  第一行包括两个整数，$n$ 和 $m$，表示城市的节点数量和道路数量。
  
  第二行到第 $(m+1)$ 行，每行三个整数，$u,v,w$，表示从 $u$ 到 $v$ 有一条通过时间为 $w$ 的道路。
  
  ## 输出格式
  
  输出仅一行，包含一个整数，为最少需要的时间。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  5 10
  2 3 5
  1 5 5
  3 5 6
  1 2 8
  1 3 8
  5 3 4
  4 1 8
  4 5 3
  3 5 6
  5 4 2
  ```
  
  ### 样例输出 #1
  
  ```
  83
  ```
  
  ## 提示
  
  对于 $30\%$ 的数据，$1 \leq n \leq 200$。
  
  对于 $100\%$ 的数据，$1 \leq n \leq 10^3$，
  $1 \leq m \leq 10^5$，
  $1\leq u,v \leq n$，
  $1 \leq w \leq 10^4$，输入保证任意两点都能互相到达。*/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<set>
#include<vector>

namespace postman {

using namespace std;
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
vector<edge> adj[100005],adj2[100005];
priority_queue<node> q;
int dist[100005],len;
bool vis[100005];
int n,m,s=1;
void djstl(vector<edge> *adj){
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
		for(long long unsigned int i = 0; i < adj[node_u.pos].size(); i++){
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
	scanf("%d%d",&n, &m);	
	int u,v,w;
	edge vw;
	for(int i=0;i<m;i++){
		scanf("%d%d%d", &u, &v, &w);
		vw.v=v;
		vw.w=w;
		adj[u].push_back(vw);
		vw.v=u;
		adj2[v].push_back(vw);
	}
	djstl(adj);
	for(int i=1;i<=n;i++){
		len+=dist[i];
	}
	djstl(adj2);
	for(int i=1;i<=n;i++){
		len+=dist[i];
	}
	cout<<len;
	return 0;
}

}
/*# 电车
  
  ## 题目描述
  
  在一个神奇的小镇上有着一个特别的电车网络，它由一些路口和轨道组成，每个路口都连接着若干个轨道，每个轨道都通向一个路口（不排除有的观光轨道转一圈后返回路口的可能）。在每个路口，都有一个开关决定着出去的轨道，每个开关都有一个默认的状态，每辆电车行驶到路口之后，只能从开关所指向的轨道出去，如果电车司机想走另一个轨道，他就必须下车切换开关的状态。
  
  为了行驶向目标地点，电车司机不得不经常下车来切换开关，于是，他们想请你写一个程序，计算一辆从路口 $A$ 到路口 $B$ 最少需要下车切换几次开关。
  
  ## 输入格式
  
  第一行有 $3$ 个整数 $N,A,B$（$2 \leq N \leq 100, 1 \leq A,B \leq N$），分别表示路口的数量，和电车的起点，终点。
  
  接下来有 $N$ 行，每行的开头有一个数字 $K_i$（$0 \leq K_i \leq N-1$），表示这个路口与 $K_i$ 条轨道相连，接下来有 $K_i$ 个数字表示每条轨道所通向的路口，开关默认指向第一个数字表示的轨道。
  
  ## 输出格式
  
  输出文件只有一个数字，表示从 $A$ 到 $B$ 所需的最少的切换开关次数，若无法从 $A$ 前往 $B$，输出 $-1$。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  3 2 1
  2 2 3
  2 3 1
  2 1 2
  ```
  
  ### 样例输出 #1
  
  ```
  0
  ```*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>

namespace electronic_car{

using namespace std;
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
int m,s,inf=1e9+5,to;
int dist[100005];
bool visit[100005];

void djstl(){
	for(int i=1;i<=m;i++){
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
	cin>>m>>s>>to;
	edge input;
	int u;
	for(int i=1;i<=m;i++){
		cin>>u;
		cin>>input.v;
		input.w=0;
		adj[i].push_back(input);
		for(int j=2;j<=u;j++){
			cin>>input.v;
			input.w=1;
			adj[i].push_back(input);
		}
	}
	djstl();
	if(dist[to]==inf){
		cout<<-1;
	}
	else{
		cout<<dist[to];
	}
	
	return 0;
}
}


/*# [USACO2.4]回家 Bessie Come Home
  
  ## 题目描述
  
  现在是晚餐时间，而母牛们在外面分散的牧场中。 
  
  Farmer John 按响了电铃，所以她们开始向谷仓走去。 你的工作是要指出哪只母牛会最先到达谷仓（在给出的测试数据中，总会**有且只有**一只最快的母牛）。在挤奶的时候（晚餐前），每只母牛都在她自己的牧场上，一些牧场上可能没有母牛。
  
  每个牧场由一条条道路和一个或多个牧场连接（可能包括自己）。有时，两个牧场（可能是字母相同的）之间会有超过一条道路相连。至少有一个牧场和谷仓之间有道路连接。因此，所有的母牛最后都能到达谷仓，并且母牛总是走最短的路径。当然，母牛能向着任意一方向前进，并且她们以相同的速度前进。牧场被标记为 $\texttt{a} \ldots \texttt{z}$ 和 $\texttt{A} \ldots \texttt{Y}$，在用大写字母表示的牧场中有一只母牛，小写字母中则没有。 谷仓的标记是 $\texttt{Z}$，注意没有母牛在谷仓中。
  
 **注意 $\texttt{m}$ 和 $\texttt{M}$ 不是同一个牧场**。
  
  ## 输入格式
  
  第一行一个整数 $P$（$1\leq P \leq 10^4$），表示连接牧场（谷仓）的道路的数目。
  
  接下来 $P$ 行，每行用空格分开的两个字母和一个正整数：被道路连接牧场的标号和道路的长度（道路长度均不超过 $10^3$）。
  
  ## 输出格式
  
  单独的一行包含二个项目：最先到达谷仓的母牛所在的牧场的标号，和这只母牛走过的路径的长度。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  5
  A d 6
  B d 3
  C e 9
  d Z 8
  e Z 3
  ```
  
  ### 样例输出 #1
  
  ```
  B 11
  ```
  
  ## 提示
  
  翻译来自 NOCOW
  
  USACO 2.4*/
#include <iostream>
#include <queue>
#include <vector>

namespace go_home{

using namespace std;
struct edge{
	int v,w;
}; 
struct node{
	int v,dis;
	bool operator <(const node &a)const{
		return dis>a.dis;
	}
};
vector<edge> adj[125];
priority_queue<node> q;
int m,n,s,inf=1e9+5;
int dist[125];
bool visit[125];

void djstl(){
	for(int i=60;i<=122;i++){
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
	cin>>m;
	s=int('Z');
	edge input;
	char i1,i2,name='A';
	for(int i=0;i<m;i++){
		cin>>i1>>i2>>input.w;
		input.v=int(i1);
		adj[int(i2)].push_back(input);
	}
	djstl();
	int len=inf;
	for(int i=65;i<90;i++){
		if(dist[i]<len){
			len=dist[i];
			name=char(i);
		}
	}
	cout<<name<<" "<<len;
	return 0;
}
}

/*# 最长路
  
  ## 题目描述
  
  设 $G$ 为有 $n$ 个顶点的带权有向无环图，$G$ 中各顶点的编号为 $1$ 到 $n$，请设计算法，计算图 $G$ 中 $1, n$ 间的最长路径。
  
  ## 输入格式
  
  输入的第一行有两个整数，分别代表图的点数 $n$ 和边数 $m$。
  
  第 $2$ 到第 $(m + 1)$ 行，每行 $3$ 个整数 $u, v, w$（$u<v$），代表存在一条从 $u$ 到  $v$ 边权为 $w$ 的边。
  
  ## 输出格式
  
  输出一行一个整数，代表 $1$ 到 $n$ 的最长路。
  
  若 $1$ 无法到达 $n$，请输出 $-1$。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  2 1
  1 2 1
  ```
  
  ### 样例输出 #1
  
  ```
  1
  ```
  
  ## 提示
  
 **【数据规模与约定】**
  
  - 对于 $20\%$的数据，$n \leq 100$，$m \leq 10^3$。
  - 对于 $40\%$ 的数据，$n \leq 10^3$，$m \leq 10^{4}$。
  - 对于 $100\%$ 的数据，$1 \leq n \leq 1500$，$0 \leq m \leq 5 \times 10^4$，$1 \leq u, v \leq n$，$-10^5 \leq w \leq 10^5$。*/


namespace fartest_path{
using namespace std;

struct edge {
    int v, w;
};
struct node {
    int v, dis;
    bool operator<(const node &a) const {
        return dis < a.dis;
    }
};
vector<edge> adj[1600];
priority_queue<node> q;
int m, n, s, inf = 0;
int dist[1600];
bool visit[1600];
void djstl() {
    for (int i = 1; i <= n; i++) {
        dist[i] = 0;
        visit[i] = false;
    }
    dist[s] = 0;
    node first;
    first.dis = 0;
    first.v = s;
    q.push(first);
    while (!q.empty()) {
        node t;
        t = q.top();
        q.pop();
        if (visit[t.v] == true) {
            continue;
        }
        visit[t.v] = true;
        for (int i = 0; i < int(adj[t.v].size()); i++) {
            int v = adj[t.v][i].v;
            int w = adj[t.v][i].w;
            if (dist[t.v] + w > dist[v]) {
                dist[v] = dist[t.v] + w;
                node tv;
                tv.v = v;
                tv.dis = dist[v];
                q.push(tv);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    s = 1;
    edge input;
    int u, len = 0;
    for (int i = 0; i < m; i++) {
        cin >> u >> input.v >> input.w;
        adj[u].push_back(input);
    }
    djstl();
    for (int i = 1; i <= n; i++) {
        if (dist[i] > len) {
            len = dist[i];
        }
    }
    cout << len;
    return 0;
}
}

/*# 无线通讯网
  
  ## 题目描述
  
  国防部计划用无线网络连接若干个边防哨所。2 种不同的通讯技术用来搭建无线网络；
  
  每个边防哨所都要配备无线电收发器；有一些哨所还可以增配卫星电话。
  
  任意两个配备了一条卫星电话线路的哨所（两边都ᤕ有卫星电话）均可以通话，无论他们相距多远。而只通过无线电收发器通话的哨所之间的距离不能超过 $D$，这是受收发器的功率限制。收发器的功率越高，通话距离 $D$ 会更远，但同时价格也会更贵。
  
  收发器需要统一购买和安装，所以全部哨所只能选择安装一种型号的收发器。换句话说，每一对哨所之间的通话距离都是同一个 $D$。你的任务是确定收发器必须的最小通话距离 $D$，使得每一对哨所之间至少有一条通话路径（直接的或者间接的）。
  
  ## 输入格式
  
  从 wireless.in 中输入数据第 1 行，2 个整数 $S$ 和 $P$，$S$ 表示可安装的卫星电话的哨所数，$P$ 表示边防哨所的数量。接下里 $P$ 行，每行两个整数 $x，y$ 描述一个哨所的平面坐标 $(x, y)$，以 km 为单位。
  
  ## 输出格式
  
  输出 wireless.out 中
  
  第 1 行，1 个实数 $D$，表示无线电收发器的最小传输距离，精确到小数点后两位。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  2 4
  0 100
  0 300
  0 600
  150 750
  ```
  
  ### 样例输出 #1
  
  ```
  212.13
  ```
  
  ## 提示
  
  对于 $20\%$ 的数据：$P = 2，S = 1$
  
  对于另外 $20\%$ 的数据：$P = 4，S = 2$
  
  对于 $100\%$ 的数据保证：$1 ≤ S ≤ 100$，$S < P ≤ 500$，$0 ≤ x,y ≤ 10000$。*/

#include <cstdio>
#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>

namespace w_net {

using namespace std;
int vs[501],x_y[2][501];
struct edge {
	int v;
	float w;
	bool operator<(const edge &a) const {
		return w > a.w;
	}
};
priority_queue<edge> adj[5001];
priority_queue<float> net;
int main() {
	int  n, m, v;
	float w_max = 1.0e5, w;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> x_y[0][i]>> x_y[1][i];
	}
	for (int i = 1; i <= m; i++) {
		for(int j=1;j<=m;j++){
			if(i==j){
				continue;
			}
			edge edge_t;
			edge_t.v = j;
			edge_t.w = sqrt((x_y[0][i]-x_y[0][j])*(x_y[0][i]-x_y[0][j])
				+(x_y[1][i]-x_y[1][j])*(x_y[1][i]-x_y[1][j]));
			adj[i].push(edge_t);
		}
		
	}
	vs[1] = 1;
	for (int i = 1; i <= m - 1; i++) {
		w = w_max;
		for (int j = 1; j <= m; j++) {
			if (vs[j] == 1) { // 寻找所有在最小生成树里的点
				if (adj[j].size() > 0) {
					edge edge_t;
					// 拿到最短的边
					edge_t = adj[j].top();
					while (vs[edge_t.v] != 0 && adj[j].size() > 0) {
						// 如果点在生成树里,从优先队列删除,直到找到不在生成树里的边
						adj[j].pop();
						edge_t = adj[j].top();
					}
					if (vs[edge_t.v] == 0 && edge_t.w < w) {
						// 记录边的点和权
						v = edge_t.v;
						w = edge_t.w;
					}
				}
			}
		}
		if (w < w_max) {
			vs[v] = 1;
			net.push(w);
		}
	}

	for(int i=0;i<n-1;i++){
		net.pop();
	}
	cout << fixed<<setprecision(2)<<net.top(); // 输出最小生成树的权值和
	return 0;
}
}


/*# [USACO08OCT]Watering Hole G

  
  ## 题目描述
  
  Farmer John 的农场缺水了。
  
  他决定将水引入到他的 $n$ 个牧场。他准备通过挖若干井，并在各块田中修筑水道来连通各块田地以供水。在第 $i$ 号田中挖一口井需要花费 $W_i$ 元。连接 $i$ 号田与 $j$ 号田需要 $P_{i,j}$（$P_{j,i}=P_{i,j}$）元。
  
  请求出 FJ 需要为使所有农场都与有水的农场相连或拥有水井所需要的最少钱数。
  
  ## 输入格式
  
  第一行为一个整数 $n$。
  
  接下来 $n$ 行，每行一个整数 $W_i$。
  
  接下来 $n$ 行，每行 $n$ 个整数，第 $i$ 行的第 $j$ 个数表示连接 $i$ 号田和 $j$ 号田需要的费用 $P_{i,j}$。
  
  ## 输出格式
  
  输出最小开销。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  4
  5
  4
  4
  3
  0 2 2 2
  2 0 3 3
  2 3 0 4
  2 3 4 0
  ```
  
  ### 样例输出 #1
  
  ```
  9
  ```
  
  ## 提示
  
  对于 $100\%$ 的数据，$1 \leq n \leq 300$，$1 \leq W_i \leq 10^5$，$0 \leq P_{i,j} \leq 10^5$。*/

namespace farmer_warter{


#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
int vs[301];
struct edge {
	int v, w;
	bool operator<(const edge &a) const {
		return w > a.w;
	}
};
priority_queue<edge> adj[301];
int main() {
	int quan, mini = 0, n, v, w_max = 100001, w;
	cin >> n;
	for(int i=1;i<=n;i++){
		edge t1;
		t1.v=i;
		cin>>t1.w;
		adj[0].push(t1);
		t1.v=0;
		adj[i].push(t1);
	}
	for (int i = 1; i <= n; i++) {
		for(int j=1;j<=n;j++){
			cin >> quan;
			if(i==j){
				continue;
			}
			edge edge_t;
			edge_t.v = j;
			edge_t.w = quan;
			adj[i].push(edge_t);
		}
		
	}
	vs[1] = 1;
	for (int i = 0; i <= n - 1; i++) {
		w = w_max;
		for (int j = 0; j <= n; j++) {
			if (vs[j] == 1) { // 寻找所有在最小生成树里的点
				if (adj[j].size() > 0) {
					edge edge_t;
					// 拿到最短的边
					edge_t = adj[j].top();
					while (vs[edge_t.v] != 0 && adj[j].size() > 0) {
						// 如果点在生成树里,从优先队列删除,直到找到不在生成树里的边
						adj[j].pop();
						edge_t = adj[j].top();
					}
					if (vs[edge_t.v] == 0 && edge_t.w < w) {
						// 记录边的点和权
						v = edge_t.v;
						w = edge_t.w;
					}
				}
			}
		}
		if (w < w_max) {
			vs[v] = 1;
			mini += w;
		}
	}
	cout << mini; // 输出最小生成树的权值和
	return 0;
}
}


/*# [NOIP2004 提高组] 合并果子 / [USACO06NOV] Fence Repair G
  
  ## 题目描述
  
  在一个果园里，多多已经将所有的果子打了下来，而且按果子的不同种类分成了不同的堆。多多决定把所有的果子合成一堆。
  
  每一次合并，多多可以把两堆果子合并到一起，消耗的体力等于两堆果子的重量之和。可以看出，所有的果子经过 $n-1$ 次合并之后， 就只剩下一堆了。多多在合并果子时总共消耗的体力等于每次合并所耗体力之和。
  
  因为还要花大力气把这些果子搬回家，所以多多在合并果子时要尽可能地节省体力。假定每个果子重量都为 $1$ ，并且已知果子的种类 数和每种果子的数目，你的任务是设计出合并的次序方案，使多多耗费的体力最少，并输出这个最小的体力耗费值。
  
  例如有 $3$ 种果子，数目依次为 $1$ ， $2$ ， $9$ 。可以先将 $1$ 、 $2$ 堆合并，新堆数目为 $3$ ，耗费体力为 $3$ 。接着，将新堆与原先的第三堆合并，又得到新的堆，数目为 $12$ ，耗费体力为 $12$ 。所以多多总共耗费体力 $=3+12=15$ 。可以证明 $15$ 为最小的体力耗费值。
  
  ## 输入格式
  
  共两行。  
  第一行是一个整数 $n(1\leq n\leq 10000)$ ，表示果子的种类数。  
  
  第二行包含 $n$ 个整数，用空格分隔，第 $i$ 个整数 $a_i(1\leq a_i\leq 20000)$ 是第 $i$ 种果子的数目。
  
  ## 输出格式
  
  一个整数，也就是最小的体力耗费值。输入数据保证这个值小于 $2^{31}$ 。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  3 
  1 2 9
  ```
  
  ### 样例输出 #1
  
  ```
  15
  ```
  
  ## 提示
  
  对于 $30\%$ 的数据，保证有 $n \le 1000$：
  
  对于 $50\%$ 的数据，保证有 $n \le 5000$；
  
  对于全部的数据，保证有 $n \le 10000$。*/


#include <cstdio>
#include <iostream>
#include <queue>

namespace fusion_apple {

using namespace std;
priority_queue<int, vector<int>, greater<int> > adj;
int main(){
	int n,t,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		adj.push(t);
	}
	while(adj.size()>=2){
		int a,b;
		a=adj.top();
		adj.pop();
		b=adj.top();
		adj.pop();
		sum=sum+a+b;
		adj.push(a+b);
	}
	cout<<sum;
	return 0;
}

}

int main() {
    smalest_tree_pq::main();
    // shortest_path::main();
    return 0;
}
