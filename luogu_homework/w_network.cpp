//namespace w_net{
	

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

/*
#include <cstdio>
#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
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
 */

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

/*
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
 */

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
//int main() {
//	int  mini = 0, n, v, w_max = 1000001, w;
//	cin >> n ;
//	int guo[n+3];
//	for (int i = 1; i <= n; i++) {
//		cin>>guo[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		for(int j=1;j<=n;j++){
//			edge edge_t;
//			edge_t.v = j;
//			edge_t.w = guo[i]+guo[j];
//			adj[i].push(edge_t);
//		}
//	}
//	vs[1] = 1;
//	for (int i = 1; i <= n - 1; i++) {
//		w = w_max;
//		for (int j = 1; j <= n; j++) {
//			if (vs[j] == 1) { // 寻找所有在最小生成树里的点
//				if (adj[j].size() > 0) {
//					edge edge_t;
//					// 拿到最短的边
//					edge_t = adj[j].top();
//					while (vs[edge_t.v] != 0 && adj[j].size() > 0) {
//						// 如果点在生成树里,从优先队列删除,直到找到不在生成树里的边
//						adj[j].pop();
//						edge_t = adj[j].top();
//					}
//					if (vs[edge_t.v] == 0 && edge_t.w < w) {
//						// 记录边的点和权
//						v = edge_t.v;
//						w = edge_t.w;
//					}
//				}
//			}
//		}
//		if (w < w_max) {
//			vs[v] = 1;
//			mini += w;
//		}
//	}
//	cout << mini; // 输出最小生成树的权值和
//	return 0;
//}
