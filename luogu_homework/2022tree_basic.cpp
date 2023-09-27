
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
int DFS() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			cin >> dfs_tu[i][j];
		}
	}
	cout << 0;
	dfs_zoutu(0);
	return 0;
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
int BFS() {
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



//  #include <iostream>
//  #include <cstdio>
//  using namespace std;
//int gh[5001][5001], vs[5001];
//int smalest_tree() {
//	int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
//	cin >> n >> m;
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= n; j++) {
//			gh[i][j] = w_max;
//		};
//	}
//	for (int i = 1; i <= m; i++) {
//		cin >> dian1 >> dian2 >> quan;
//		if (quan < gh[dian1][dian2]) {
//			gh[dian1][dian2] = quan;
//			gh[dian2][dian1] = quan;
//		}
//	}
//	vs[1] = 1;
//	c = 1;
//	for (int i = 1; i <= n - 1; i++) { //遍历n-1
//		w = w_max;
//		for (int j = 1; j <= n; j++) {
//			if (vs[j] == 1) {
//				for (int k = 1; k <= n; k++) {
//					if ((vs[k] == 0) && (gh[j][k] < w) ) {
//						v = k;
//						w = gh[j][k];
//					}
//				}
//			}
//		}
//		if (w < w_max) {
//			vs[v] = 1;
//			mini += w;
//			c++;
//			if (c >= n) {
//				cout << mini;
//				return 0;
//			}
//		}
//	}
//	if ( c < n) {
//		cout << "orz";
//		return 0;
//	}
//	cout << mini;
//	return 0;
//}



//  #include <iostream>
//  #include <cstdio>
//  #include <vector>
//  using namespace std;
//int vs[5001];
//struct edge {
//	int v, w;
//};
//vector<edge> adj[5001];
//int smalest_tree_adj() {
//	int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) {
//		cin >> dian1 >> dian2 >> quan;
//		edge edge_t;
//		edge_t.v = dian2;
//		edge_t.w = quan;
//		adj[dian1].push_back(edge_t);
//		edge_t.v = dian1;
//		edge_t.w = quan;
//		adj[dian2].push_back(edge_t);
//	}
//	vs[1] = 1;
//	c = 1;
//	for (int i = 1; i <= n - 1; i++) {
//		w = w_max;
//		for (int j = 1; j <= n; j++) {
//			if (vs[j] == 1) {
//				for (int k = 0; k < adj[j].size(); k++) {
//					if ((vs[adj[j][k].v] == 0) && (adj[j][k].w < w) ) {
//						v = adj[j][k].v;
//						w = adj[j][k].w;
//					}
//				}
//			}
//		}
//		if (w < w_max) {
//			vs[v] = 1;
//			mini += w;
//			c++;
//			if (c >= n) {
//				cout << mini;
//				return 0;
//			}
//		}
//	}
//	if ( c < n) {
//		cout << "orz";
//		return 0;
//	}
//	cout << mini;
//	return 0;
//}


//#include <cstdio>
//#include <iostream>
//#include <queue>
//using namespace std;
//int vs[5001];
//struct edge {
//	int v, w;
//	bool operator<(const edge &a) const {
//		return w > a.w;
//	}
//};
//priority_queue<edge> adj[5001];
//int smalest_tree_adj_pq() {
//	int quan, mini = 0, n, m, v, c, w_max = 1000001, w, dian1, dian2;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) {
//		cin >> dian1 >> dian2 >> quan;
//		edge edge_t;
//		edge_t.v = dian2;
//		edge_t.w = quan;
//		adj[dian1].push(edge_t);
//		edge_t.v = dian1;
//		edge_t.w = quan;
//		adj[dian2].push(edge_t);
//	}
//	vs[1] = 1;
//	c = 1;
//	for (int i = 1; i <= n - 1; i++) {
//		w = w_max;
//		for (int j = 1; j <= n; j++) {
//			if (vs[j] == 1) {
//				if (adj[j].size() > 0) {
//					edge edge_t;
//					edge_t = adj[j].top();
//					while (vs[edge_t.v] != 0 && adj[j].size() > 0) {
//						adj[j].pop();
//						edge_t = adj[j].top();
//					}
//					if (vs[edge_t.v] == 0 && edge_t.w < w) {
//						v = edge_t.v;
//						w = edge_t.w;
//					}
//				}
//			}
//		}
//		if (w < w_max) {
//			vs[v] = 1;
//			mini += w;
//			c++;
//			if (c >= n) {
//				cout << mini;
//				return 0;
//			}
//		}
//	}
//	if (c < n) {
//		cout << "orz";
//		return 0;
//	}
//	cout << mini;
//	return 0;
//}




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
#include<vector>
using namespace std;
const int inf = 1e9;
struct edge {
	int v, w;
};
struct node {
	int dian, dis;
	bool operator <(const node &a)const {
		return dis > a.dis;
	}
};
vector<edge> adj[100005];
priority_queue<node> q;
int dist[100005];
bool vis[100005];
int n, m, s;
void djstl() {
	for (int i = 1; i <= n; i++) {
		vis[i] = false;
		dist[i] = inf;
	}
	node node_u;
	node_u.dian = s;
	node_u.dis = 0;
	q.push(node_u );
	dist[s] = 0;
	while (!q.empty()) {
		node_u = q.top();
		q.pop();
		if (vis[node_u.dian] == true) {
			continue;
		}
		vis[node_u.dian] = true; //c处理过是真
		for (int i = 0; i < adj[node_u.dian].size(); i++) {
			int v = adj[node_u.dian][i].v;
			int w = adj[node_u.dian][i].w;
			if (dist[node_u.dian] + w < dist[v]) { //不同路径走到V点更新最小值
				dist[v] = dist[node_u.dian] + w;
				node tmp;
				tmp.dis = dist[v];
				tmp.dian = v;
				q.push(tmp);
			}
		}
	}
}
int zuixiao_lujing() {
	scanf("%d%d%d", &n, &m, &s);
	int u;
	edge vw;
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &u, &vw.v, &vw.w);
		adj[u].push_back(vw);
	}
	djstl();
	for (int i = 1; i <= n; i++) {
		cout << dist[i] << " ";
	}
	return 0;
}




/*# [USACO3.1]最短网络 Agri-Net
  
  ## 题目背景
  
  Farmer John 被选为他们镇的镇长！他其中一个竞选承诺就是在镇上建立起互联网，并连接到所有的农场。当然，他需要你的帮助。
  
  ## 题目描述
  
  FJ 已经给他的农场安排了一条高速的网络线路，他想把这条线路共享给其他农场。为了用最小的消费，他想铺设最短的光纤去连接所有的农场。
  
  你将得到一份各农场之间连接费用的列表，你必须找出能连接所有农场并所用光纤最短的方案。每两个农场间的距离不会超过 $10^5$。
  
  ## 输入格式
  
  第一行农场的个数 $N$（$3 \leq N \leq 100$）。
  
  接下来是一个 $N \times N$ 的矩阵，表示每个农场之间的距离。理论上，他们是 $N$ 行，每行由 $N$ 个用空格分隔的数组成，实际上，由于每行 $80$ 个字符的限制，因此，某些行会紧接着另一些行。当然，对角线将会是 $0$，因为不会有线路从第 $i$ 个农场到它本身。
  
  ## 输出格式
  
  只有一个输出，其中包含连接到每个农场的光纤的最小长度。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  4
  0 4 9 21
  4 0 8 17
  9 8 0 16
  21 17 16 0
  ```
  
  ### 样例输出 #1
  
  ```
  28
  ```
  
  ## 提示
  
  题目翻译来自NOCOW。
  
  USACO Training Section 3.1*/

#include <iostream>
#include <cstdio>
using namespace std;
int farm[101][101], farm_vs[101];
int Agri_Net() {
	int mini = 0, n, v, c, w_max = 1e5+5, w;
	cin >> n ;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin>>farm[i][j];
		}
	}
	farm_vs[1] = 1;
	c = 1;
	for (int i = 1; i <= n - 1; i++) { //遍历n-1
		w = w_max;
		for (int j = 1; j <= n; j++) {
			if (farm_vs[j] == 1) {
				for (int k = 1; k <= n; k++) {
					if ((farm_vs[k] == 0) && (farm[j][k] < w) ) {
						v = k;
						w = farm[j][k];
					}
				}
			}
		}
		if (w < w_max) {
			farm_vs[v] = 1;
			mini += w;
			c++;
			if (c >= n) {
				cout << mini;
				return 0;
			}
		}
	}
	if ( c < n) {
		cout << "orz";
		return 0;
	}
	cout << mini;
	return 0;
}



/*# [SCOI2005]繁忙的都市
  
  ## 题目描述
  
  城市 C 是一个非常繁忙的大都市，城市中的道路十分的拥挤，于是市长决定对其中的道路进行改造。城市 C 的道路是这样分布的：城市中有 $n$ 个交叉路口，有些交叉路口之间有道路相连，两个交叉路口之间最多有一条道路相连接。这些道路是双向的，且把所有的交叉路口直接或间接的连接起来了。每条道路都有一个分值，分值越小表示这个道路越繁忙，越需要进行改造。但是市政府的资金有限，市长希望进行改造的道路越少越好，于是他提出下面的要求：
  
  1. 改造的那些道路能够把所有的交叉路口直接或间接的连通起来。
  1. 在满足要求 1 的情况下，改造的道路尽量少。
  1. 在满足要求 1、2 的情况下，改造的那些道路中分值最大的道路分值尽量小。
  
  任务：作为市规划局的你，应当作出最佳的决策，选择哪些道路应当被修建。
  
  ## 输入格式
  
  第一行有两个整数 $n,m$ 表示城市有 $n$ 个交叉路口，$m$ 条道路。
  
  接下来 $m$ 行是对每条道路的描述，$u, v, c$ 表示交叉路口 $u$ 和 $v$ 之间有道路相连，分值为 $c$。
  
  ## 输出格式
  
  两个整数 $s, \mathit{max}$，表示你选出了几条道路，分值最大的那条道路的分值是多少。
  
  ## 样例 #1
  
  ### 样例输入 #1
  
  ```
  4 5
  1 2 3
  1 4 5
  2 4 7
  2 3 6
  3 4 8
  ```
  
  ### 样例输出 #1
  
  ```
  3 6
  ```
  
  ## 提示
  
  ### 数据范围及约定
  
  对于全部数据，满足 $1\le n\le 300$，$1\le c\le 10^4$，$1 \le m \le 10^5$。*/

#include <iostream>
#include <cstdio>
using namespace std;
int lu[305][305], lu_vs[305];
int busy_city() {
	int quan, n, m, v, c=0, w_max = 1e5+5, w, dian1, dian2,max=0;
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			lu[i][j] = w_max;
		};
	}
	for (int i = 1; i <= m; i++) {
		cin >> dian1 >> dian2 >> quan;
		if (quan < lu[dian1][dian2]) {
			lu[dian1][dian2] = quan;
			lu[dian2][dian1] = quan;
		}
	}
	lu_vs[1] = 1;
	c = 0;
	for (int i = 1; i <= n - 1; i++) { //遍历n-1
		w = w_max;
		for (int j = 1; j <= n; j++) {
			if (lu_vs[j] == 1) {
				for (int k = 1; k <= n; k++) {
					if ((lu_vs[k] == 0) && (lu[j][k] < w) ) {
						v = k;
						w = lu[j][k];
					}
				}
			}
		}
		if (w < w_max) {
			lu_vs[v] = 1;
			if(w>max){
				max=w;
			}
			c++;
		}
	}
	cout << c<<" "<<max;
	return 0;
}

int main() {
	
	//smalest_tree_adj_pq();
	//	zuixiao_lujing();
	//Agri_Net();
	busy_city();
	return 0;
}
