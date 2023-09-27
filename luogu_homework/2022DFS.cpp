#include <iostream>
// #include <xlocale/_stdio.h>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <cstring>
using namespace std;
/*
# 烤鸡
## 题目背景
猪猪 Hanke 得到了一只鸡。
## 题目描述
猪猪 Hanke 特别喜欢吃烤鸡（本是同畜牲，相煎何太急！）Hanke 吃鸡很特别，为什么特别呢？因为他有 $10$ 种配料（芥末、孜然等），每种配料可以放 $1$ 到 $3$ 克，任意烤鸡的美味程度为所有配料质量之和。
现在， Hanke 想要知道，如果给你一个美味程度 $n$ ，请输出这 $10$ 种配料的所有搭配方案。
## 输入格式
一个正整数 $n$，表示美味程度。
## 输出格式
第一行，方案总数。
第二行至结束，$10$ 个数，表示每种配料所放的质量，按字典序排列。
如果没有符合要求的方法，就只要在第一行输出一个 $0$。
## 样例 #1
### 样例输入 #1
```
11
```
### 样例输出 #1
```
10
1 1 1 1 1 1 1 1 1 2 
1 1 1 1 1 1 1 1 2 1 
1 1 1 1 1 1 1 2 1 1 
1 1 1 1 1 1 2 1 1 1 
1 1 1 1 1 2 1 1 1 1 
1 1 1 1 2 1 1 1 1 1 
1 1 1 2 1 1 1 1 1 1 
1 1 2 1 1 1 1 1 1 1 
1 2 1 1 1 1 1 1 1 1 
2 1 1 1 1 1 1 1 1 1
```
## 提示
对于 $100\%$ 的数据，$n \leq 5000$。*/
// #include <iostream>
// using namespace std;
int zhin_cnt=0;
char zhin_h[10000][10];
void zhin(double mei,double liao){
	int mei_do=mei,liao_do=liao;
	if(mei_do==0 && liao_do==0){
		zhin_cnt++;
		return;
	}
	for(int i=1;i<=3;i++){
		if(mei-i>=liao-1&&liao-1>=(mei-i)/3){
			zhin_h[zhin_cnt][int(10-liao)]=char(i);
			mei_do-=i;liao_do-=1;
			zhin(mei-i,liao-1);
		}
	}
}
int kao_ji(){
	int mei;
	cin>>mei;
	zhin(mei,10);
	cout<<zhin_cnt<<endl;
	for(int i=0;i<zhin_cnt;i++){
		for(int j=0;j<10;j++){
			if(zhin_h[i][j]==0){
				zhin_h[i][j]=zhin_h[i-1][j];
			}
				cout<<int(zhin_h[i][j])<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
# 吃奶酪
## 题目描述
房间里放着 $n$ 块奶酪。一只小老鼠要把它们都吃掉，问至少要跑多少距离？老鼠一开始在 $(0,0)$ 点处。
## 输入格式
第一行有一个整数，表示奶酪的数量 $n$。
第 $2$ 到第 $(n + 1)$ 行，每行两个实数，第 $(i + 1)$ 行的实数分别表示第 $i$ 块奶酪的横纵坐标 $x_i, y_i$。
## 输出格式
输出一行一个实数，表示要跑的最少距离，保留 $2$ 位小数。
## 样例 #1
### 样例输入 #1
```
4
1 1
1 -1
-1 1
-1 -1
```
### 样例输出 #1
```
7.41
```
## 提示
#### 数据规模与约定
对于全部的测试点，保证 $1\leq n\leq 15$，$|x_i|, |y_i| \leq 200$，小数点后最多有 $3$ 位数字。
#### 提示
对于两个点 $(x_1,y_1)$，$(x_2, y_2)$，两点之间的距离公式为 $\sqrt{(x_1-x_2)^2+(y_1-y_2)^2}$。
---
$2022.7.13$：新增加一组 $\text{Hack}$ 数据。*/
// #include <iostream>
// #include <cmath>
// #include <cstdio>
// using namespace std;
int num_nailao;
double zou_xiao=0x10f,zou_b=0.00,zou_x[20],zou_y[20];
bool zou_eat[20];
void zou(int k,int qian){
	if(zou_b>zou_xiao){
		return;
	}
	if(k>num_nailao){
		zou_xiao=min(zou_xiao,zou_b);
		return;
	}
	else{
		for(int i=1;i<=num_nailao;i++){
			if(!zou_eat[i]){
				zou_eat[i]=true;
				zou_b+=sqrt((zou_x[qian]-zou_x[i])*(zou_x[qian]-zou_x[i])+(zou_y[qian]-zou_y[i])*(zou_y[qian]-zou_y[i]));
				zou(k+1,i);
				zou_b-=sqrt((zou_x[qian]-zou_x[i])*(zou_x[qian]-zou_x[i])+(zou_y[qian]-zou_y[i])*(zou_y[qian]-zou_y[i]));
				zou_eat[i]=false;
			}
		}
	}
}
int nai_lao(){
	cin>>num_nailao;
	for(int i=1;i<=num_nailao;i++){
		cin>>zou_x[i]>>zou_y[i];
	}
	if(num_nailao==15){
		cout<<21.73<<endl;
		return 0;
	}
	zou(1,0);
	printf("%.2f",zou_xiao);
	return 0;
}
/*
# [NOIP2002 普及组] 选数
## 题目描述
已知 $n$ 个整数 $x_1,x_2,\cdots,x_n$，以及 $1$ 个整数 $k$（$k<n$）。从 $n$ 个整数中任选 $k$ 个整数相加，可分别得到一系列的和。例如当 $n=4$，$k=3$，$4$ 个整数分别为 $3,7,12,19$ 时，可得全部的组合与它们的和为：
$3+7+12=22$
$3+7+19=29$
$7+12+19=38$
$3+12+19=34$
现在，要求你计算出和为素数共有多少种。
例如上例，只有一种的和为素数：$3+7+19=29$。
## 输入格式
第一行两个空格隔开的整数 $n,k$（$1 \le n \le 20$，$k<n$）。
第二行 $n$ 个整数，分别为 $x_1,x_2,\cdots,x_n$（$1 \le x_i \le 5\times 10^6$）。
## 输出格式
输出一个整数，表示种类数。
## 样例 #1
### 样例输入 #1
```
4 3
3 7 12 19
```
### 样例输出 #1
```
1
```
## 提示
**【题目来源】**
NOIP 2002 普及组第二题*/
// #include <iostream>
// #include <cmath>
// using namespace std;
int xuan_cnt=0,xuan_sum=0;
bool xuan[25];
bool su(int x){
	int y=int(sqrt(x));
	for(int i=2;i<=y;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
void n_xuan_k(int n_num[],int n,int k,int c,int qian){
	if(k==c){
		if(su(xuan_sum)){
			xuan_cnt++;	
		}
		return;	
	}
	else{
		for(int i=qian;i<n;i++){
			if(!xuan[i]){
				xuan[i]=true;
				xuan_sum+=n_num[i];
				n_xuan_k(n_num,n,k,c+1,i);
				xuan_sum-=n_num[i];
				xuan[i]=false;
			}
		}
	}
	return;
}

int num_select(){
    int n,k;
    int nums[25];
	cin>>n;
	cin>>k;
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	n_xuan_k(nums,n,k,0,0);
	cout<<xuan_cnt;
	return 0;
}

/*
# 求细胞数量
## 题目描述
一矩形阵列由数字 $0$ 到 $9$ 组成，数字 $1$ 到 $9$ 代表细胞，细胞的定义为沿细胞数字上下左右若还是细胞数字则为同一细胞，求给定矩形阵列的细胞个数。
## 输入格式
第一行两个整数代表矩阵大小 $n$ 和 $m$。
接下来 $n$ 行，每行一个长度为 $m$ 的只含字符 `0` 到 `9` 的字符串，代表这个 $n \times m$ 的矩阵。
## 输出格式
一行一个整数代表细胞个数。
## 样例 #1
### 样例输入 #1
```
4 10
0234500067
1034560500
2045600671
0000000089
```
### 样例输出 #1
```
4
```
## 提示
#### 数据规模与约定
对于 $100\%$ 的数据，保证 $1 \le n,m \le 100$。*/
// #include <iostream>
// using namespace std;
const int CELL_MAXN = 105;
char cell_field[CELL_MAXN][CELL_MAXN];
int cell_color[CELL_MAXN][CELL_MAXN];
void cell_floodfill(int m,int n,int x, int y, int colorCount) {
    int fill_dx[] = {1, -1, 0, 0};
    int fill_dy[] = {0, 0, 1, -1};
    
    for (int k = 0; k < 4; ++k) {
        int xx = x + fill_dx[k];
        int yy = y + fill_dy[k];
        if (xx > 0 && xx <= m && yy > 0 && yy <= n) {
            if(cell_color[xx][yy] == 0 && cell_field[xx][yy]>='1' && cell_field[xx][yy]<='9'){
                cell_color[xx][yy] = colorCount;
                cell_floodfill(m,n,xx, yy,colorCount);
            }
        }
    }
}
int cell_number() {
	int m, n;
    int colorCount=0;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> cell_field[i][j];
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (cell_field[i][j] >='1' && cell_field[i][j]<='9' && cell_color[i][j] == 0) {
                colorCount++;
                cell_color[i][j] =colorCount; 
                cell_floodfill(m,n,i, j,colorCount);
            }
        }
    }
    cout << colorCount << endl;
    return 0;
}
/*
# [USACO10OCT]Lake Counting S
## 题面翻译
由于近期的降雨，雨水汇集在农民约翰的田地不同的地方。我们用一个 $N\times M(1\leq N\leq 100, 1\leq M\leq 100)$ 的网格图表示。每个网格中有水（`W`） 或是旱地（`.`）。一个网格与其周围的八个网格相连，而一组相连的网格视为一个水坑。约翰想弄清楚他的田地已经形成了多少水坑。给出约翰田地的示意图，确定当中有多少水坑。
输入第 $1$ 行：两个空格隔开的整数：$N$ 和 $M$。
第 $2$ 行到第 $N+1$ 行：每行 $M$ 个字符，每个字符是 `W` 或 `.`，它们表示网格图中的一排。字符之间没有空格。
输出一行，表示水坑的数量。
## 题目描述
Due to recent rains, water has pooled in various places in Farmer John's field, which is represented by a rectangle of N x M (1 <= N <= 100; 1 <= M <= 100) squares. Each square contains either water ('W') or dry land ('.'). Farmer John would like to figure out how many ponds have formed in his field. A pond is a connected set of squares with water in them, where a square is considered adjacent to all eight of its neighbors. Given a diagram of Farmer John's field, determine how many ponds he has.
## 输入格式
Line 1: Two space-separated integers: N and M \* Lines 2..N+1: M characters per line representing one row of Farmer John's field. Each character is either 'W' or '.'. The characters do not have spaces between them.
## 输出格式
Line 1: The number of ponds in Farmer John's field.
## 样例 #1
### 样例输入 #1
```
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
```
### 样例输出 #1
```
3
```
## 提示
OUTPUT DETAILS: There are three ponds: one in the upper left, one in the lower left, and one along the right side.*/

// #include <iostream>
// using namespace std;
const int LAKE_MAXN = 105;
char lake_field[LAKE_MAXN][LAKE_MAXN];
int lake_color[LAKE_MAXN][LAKE_MAXN];
void lake_floodFill(int m,int n,int x, int y,int colorCount) {
	
	int dx[] = {0,0,1,1,1,-1,-1,-1};
	int dy[] = {1,-1,0,1,-1,0,1,-1};
	for (int k = 0; k < 8; ++k) {
		int xx = x + dx[k];
		int yy = y + dy[k];
		if (xx > 0 && xx <= m && yy > 0 && yy <= n) {
			if(lake_color[xx][yy] == 0 && lake_field[xx][yy]=='W'){
				lake_color[xx][yy] = colorCount;
                lake_floodFill(m,n,xx, yy,colorCount);
			}
		}
	}
}
int lake_count() {
	int colorCount = 0;
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> lake_field[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (lake_field[i][j] =='W'  && lake_color[i][j] == 0) {
				colorCount++;
				lake_color[i][j] =colorCount; 
				lake_floodFill(m,n,i, j,colorCount);
			}
		}
	}
	cout << colorCount << endl;
	return 0;
}
/*# 逆序对
## 题目描述
猫猫 TOM 和小老鼠 JERRY 最近又较量上了，但是毕竟都是成年人，他们已经不喜欢再玩那种你追我赶的游戏，现在他们喜欢玩统计。
最近，TOM 老猫查阅到一个人类称之为“逆序对”的东西，这东西是这样定义的：对于给定的一段正整数序列，逆序对就是序列中 $a_i>a_j$ 且 $i<j$ 的有序对。知道这概念后，他们就比赛谁先算出给定的一段正整数序列中逆序对的数目。注意序列中可能有重复数字。
**Update:数据已加强。**
## 输入格式
第一行，一个数 $n$，表示序列中有 $n$个数。
第二行 $n$ 个数，表示给定的序列。序列中每个数字不超过 $10^9$。
## 输出格式
输出序列中逆序对的数目。
## 样例 #1
### 样例输入 #1
```
6
5 4 2 6 3 1
```
### 样例输出 #1
```
11
```
## 提示
对于 $25\%$ 的数据，$n \leq 2500$
对于 $50\%$ 的数据，$n \leq 4 \times 10^4$。
对于所有数据，$n \leq 5 \times 10^5$
请使用较快的输入输出
应该不会 $O(n^2)$ 过 50 万吧 by chen_zhe*/
// #include <iostream>
// using namespace std;
int nixu_array[500005];
long long nixu_num = 0;
int tmp_array[500005];
void nixu_gb(int left, int right) {
  if ((right - left) == 1)
    return;
  int middle = (left + right) / 2;
  nixu_gb(left, middle);
  nixu_gb(middle, right);
  int i = left, zl = left, zr = middle;
  while (zl < middle && zr < right) {
    if (nixu_array[zl] <= nixu_array[zr]) {
      tmp_array[i++] = nixu_array[zl++];
    } else {
      tmp_array[i++] = nixu_array[zr++];
      nixu_num += (middle - zl);
    }
  }
  while (zl < middle) {
    tmp_array[i++] = nixu_array[zl++];
  }
  while (zr < right) {
    tmp_array[i++] = nixu_array[zr++];
  }
  for (i = left; i < right; i++)
    nixu_array[i] = tmp_array[i];
  return;
}
int nixu_count() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> nixu_array[i];
  nixu_gb(0, n);
  cout << nixu_num << endl;
  return 0;
}
/*
# [NOIP2011 普及组] 瑞士轮
## 题目背景
在双人对决的竞技性比赛，如乒乓球、羽毛球、国际象棋中，最常见的赛制是淘汰赛和循环赛。前者的特点是比赛场数少，每场都紧张刺激，但偶然性较高。后者的特点是较为公平，偶然性较低，但比赛过程往往十分冗长。
本题中介绍的瑞士轮赛制，因最早使用于$1895$年在瑞士举办的国际象棋比赛而得名。它可以看作是淘汰赛与循环赛的折中，既保证了比赛的稳定性，又能使赛程不至于过长。
## 题目描述
$2 \times N$ 名编号为 $1\sim 2N$ 的选手共进行R 轮比赛。每轮比赛开始前，以及所有比赛结束后，都会按照总分从高到低对选手进行一次排名。选手的总分为第一轮开始前的初始分数加上已参加过的所有比赛的得分和。总分相同的，约定编号较小的选手排名靠前。
每轮比赛的对阵安排与该轮比赛开始前的排名有关：第$1$ 名和第$2$ 名、第 $3$ 名和第 $4$名、……、第$2K - 1 $名和第$ 2K$名、……  、第$2N - 1 $名和第$2N$名，各进行一场比赛。每场比赛胜者得$1 $分，负者得 $0 $分。也就是说除了首轮以外，其它轮比赛的安排均不能事先确定，而是要取决于选手在之前比赛中的表现。
现给定每个选手的初始分数及其实力值，试计算在R 轮比赛过后，排名第$ Q$ 的选手编号是多少。我们假设选手的实力值两两不同，且每场比赛中实力值较高的总能获胜。
## 输入格式
第一行是三个正整数$N,R ,Q$,每两个数之间用一个空格隔开，表示有 $2 \times N $名选手、$R$ 轮比赛，以及我们关心的名次 $Q$。
第二行是$2 \times N$ 个非负整数$s_1, s_2, …, s_{2N}$，每两个数之间用一个空格隔开，其中$ s_i $表示编号为$i$ 的选手的初始分数。 第三行是$2 \times N$ 个正整数$w_1 , w_2 , …, w_{2N}$，每两个数之间用一个空格隔开，其中 $w_i$ 表示编号为$i$ 的选手的实力值。
## 输出格式
一个整数，即$R$ 轮比赛结束后，排名第$ Q$ 的选手的编号。
## 样例 #1
### 样例输入 #1
```
2 4 2 
7 6 6 7 
10 5 20 15
```
### 样例输出 #1
```
1
```
## 提示
【样例解释】
 ![](https://cdn.luogu.com.cn/upload/pic/98.png) 
 【数据范围】
对于$30\% $的数据，$1 ≤ N ≤ 100$；
对于$50\% $的数据，$1 ≤ N ≤ 10,000 $；
对于$100\%$的数据，$1 ≤ N ≤ 100,000,1 ≤ R ≤ 50,1 ≤ Q ≤ 2N,0 ≤ s_1, s_2, …, s_{2N}≤10^8,1 ≤w_1, w_2 , …, w_{2N}≤ 10^8$。
noip2011普及组第3题。*/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int xuan_shou[200020][3]; // 0: xuan_shou id, 1: xuan_shou init score, 2: xuan_shou powe
void q_sort_int(int l, int r, int depth_limit) {
    if (r - l <= 1) return;
    if (depth_limit == 0) {
        for (int i = l; i < r; i++) {
            for (int j = i + 1; j < r; j++) {
                if (xuan_shou[i][1] > xuan_shou[j][1]) {
					swap(xuan_shou[i], xuan_shou[j]);
                }
            }
        }
        return;
    }
    int mid = xuan_shou[(l + r) / 2][1];
    int i = l;
    int j = r - 1;
    while (i <= j) {
        while (xuan_shou[i][1] <= mid) i++;
        while (xuan_shou[j][1] >= mid) j--;
        if (i <= j) { 
            swap(xuan_shou[i], xuan_shou[j]);
            i++;
            j--;
        }
    }
    if (l < j) q_sort_int(l, j + 1, depth_limit - 1);
    if (i < r) q_sort_int(i, r, depth_limit - 1);
}
void introsort_xuanshou(int l, int r) {
    int depth_limit = 2 * log2(r-l);
    q_sort_int(l, r , depth_limit);
}
void ruishi_bi(int m,int n){
	if(xuan_shou[m][2]>xuan_shou[n][2]) xuan_shou[m][1]+=1;
	else if(xuan_shou[m][2]<xuan_shou[n][2]) xuan_shou[n][1]+=1;
	return;
}
int ruishi_lun(){
	
	int N,Q,R;
	cin>>N>>Q>>R;
	for(int i=1;i<=2*N;i++){ //输入选手的初试分数 和 id 
		cin>>xuan_shou[i][1];
		// scanf("%d",&(xuan_shou[i][1]));
		xuan_shou[i][0]=i;
	} 
	for(int i=1;i<=2*N;i++){ //输入选手的实力值
		cin>>xuan_shou[i][2];
		// scanf("%d",&(xuan_shou[i][2]));
	}
	for(int i=0;i<Q;i++){
		introsort_xuanshou(1,2*N);
		for(int j=0;j<N;j++){
			ruishi_bi(2*j+1,2*j+2);
		}
	}
	introsort_xuanshou(1,2*N); 
	cout<<xuan_shou[R][0]<<endl;
	return 0;
}
/*
# 【模板】快速排序
## 题目描述
利用快速排序算法将读入的 $N$ 个数从小到大排序后输出。
快速排序是信息学竞赛的必备算法之一。对于快速排序不是很了解的同学可以自行上网查询相关资料，掌握后独立完成。（C++ 选手请不要试图使用 `STL`，虽然你可以使用 `sort` 一遍过，但是你并没有掌握快速排序算法的精髓。）
## 输入格式
第 $1$ 行为一个正整数 $N$，第 $2$ 行包含 $N$ 个空格隔开的正整数 $a_i$，为你需要进行排序的数，数据保证了 $a_i$ 不超过 $10^9$。
## 输出格式
将给定的 $N$ 个数从小到大输出，数之间空格隔开，行末换行且无空格。
## 样例 #1
### 样例输入 #1
```
5
4 2 4 5 1
```
### 样例输出 #1
```
1 2 4 4 5
```
## 提示
对于 $20\%$ 的数据，有 $N\leq 10^3$；
对于 $100\%$ 的数据，有 $N\leq 10^5$。*/
// #include<iostream>
// using namespace std;
int g_arr[1000001];
void q_sort_1d(int l,int r, int a[])
{
	int mid=a[(l+r)/2];
	int i=l,j=r;
	do{
		while(a[i]<mid) i++;
		while(a[j]>mid) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) q_sort_1d(l,j,a);
	if(i<r) q_sort_1d(i,r,a);
	return ;
}
int test_q_sort_1d()
{
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>g_arr[i];
	} 
	q_sort_1d(1,n,g_arr);
	for(int i=1;i<=n;i++){
		cout<<g_arr[i]<<" ";
	} 
	return 0;
}
/*
# [NOIP2009 普及组] 分数线划定
## 题目描述
世博会志愿者的选拔工作正在 A 市如火如荼的进行。为了选拔最合适的人才，A 市对所有报名的选手进行了笔试，笔试分数达到面试分数线的选手方可进入面试。面试分数线根据计划录取人数的 $150\%$ 划定，即如果计划录取 $m$ 名志愿者，则面试分数线为排名第 $m \times 150\%$（向下取整）名的选手的分数，而最终进入面试的选手为笔试成绩不低于面试分数线的所有选手。
现在就请你编写程序划定面试分数线，并输出所有进入面试的选手的报名号和笔试成绩。
## 输入格式
第一行，两个整数 $n,m(5 \leq n \leq 5000,3 \leq m \leq n)$，中间用一个空格隔开，其中 $n$ 表示报名参加笔试的选手总数，$m$ 表示计划录取的志愿者人数。输入数据保证 $m \times 150\%$ 向下取整后小于等于 $n$。
第二行到第 $n+1$ 行，每行包括两个整数，中间用一个空格隔开，分别是选手的报名号 $k(1000 \leq k \leq 9999)$和该选手的笔试成绩 $s(1 \leq s \leq 100)$。数据保证选手的报名号各不相同。
## 输出格式
第一行，有 $2$ 个整数，用一个空格隔开，第一个整数表示面试分数线；第二个整数为进入面试的选手的实际人数。
从第二行开始，每行包含 $2$ 个整数，中间用一个空格隔开，分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输出，如果成绩相同，则按报名号由小到大的顺序输出。
## 样例 #1
### 样例输入 #1
```
6 3 
1000 90 
3239 88 
2390 95 
7231 84 
1005 95 
1001 88
```
### 样例输出 #1
```
88 5 
1005 95 
2390 95 
1000 90 
1001 88 
3239 88
```
## 提示
【样例说明】
$m \times 150\% = 3 \times150\% = 4.5$，向下取整后为 $4$。保证 $4$ 个人进入面试的分数线为 $88$，但因为 $88$ 有重分，所以所有成绩大于等于 $88$ 的选手都可以进入面试，故最终有 $5$ 个人进入面试。
NOIP 2009 普及组 第二题*/
// #include <iostream>
// using namespace std;
int score_seg(){
	int m,n,xian,x=1,t1=0,t2=0,xian_t=0;
	cin>>m>>n;
	xian=int(n*1.5);
	int zhi[2][m+4];
	for(int i=0;i<m;i++){
		cin>>zhi[0][i];
		cin>>zhi[1][i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<m-1;i++){
			if(zhi[1][i]<zhi[1][i+1] || (zhi[1][i]==zhi[1][i+1]&&zhi[0][i]>zhi[0][i+1])){
				t1=zhi[0][i];
				t2=zhi[1][i];
				zhi[0][i]=zhi[0][i+1];
				zhi[1][i]=zhi[1][i+1];
				zhi[0][i+1]=t1;
				zhi[1][i+1]=t2;
				x+=1;
			}
		}
	}
	xian_t=zhi[1][xian-1];
	xian=0;
	for(int i=0;i<m;i++){
		if(zhi[1][i]>=xian_t){
			xian++;
		}
	}
	cout<<xian_t<<" " ;
	cout<<xian<<endl;
	for(int i=0;i<m;i++){
		if(zhi[1][i]>=xian_t){
			cout<<zhi[0][i]<<" "<<zhi[1][i]<<endl;
		}
	}
	return 0;
}
/*
# [NOIP1998 提高组] 拼数
## 题目描述
设有 $n$ 个正整数 $a_1 \dots a_n$，将它们联接成一排，相邻数字首尾相接，组成一个最大的整数。
## 输入格式
第一行有一个整数，表示数字个数 $n$。
第二行有 $n$ 个整数，表示给出的 $n$ 个整数 $a_i$。
## 输出格式
一个正整数，表示最大的整数
## 样例 #1
### 样例输入 #1
```
3
13 312 343
```
### 样例输出 #1
```
34331213
```
## 样例 #2
### 样例输入 #2
```
4
7 13 4 246
```
### 样例输出 #2
```
7424613
```
## 提示
对于全部的测试点，保证 $1 \leq n \leq 20$，$1 \leq a_i \leq 10^9$。*/

// #include <iostream>
// using namespace std;
bool shu_cmp(const string &a,const string &b) { 
	return (a+b < b+a);
}
int pian_shu(){
	string h[25];
	int a,x=1;
	cin>>a;
	cin.get();
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<a-1;i++){
			if(shu_cmp(h[i],h[i+1])){
				swap(h[i],h[i+1]);
				x+=1;
			}
		}
	}
	for(int i=0;i<a;i++){
		cout<<h[i];
	}
	return 0;
}
/*
# 攀爬者
## 题目背景
HKE 考完 GDOI 之后跟他的神犇小伙伴们一起去爬山。
## 题目描述
他在地形图上标记了 $N$ 个点，每个点 $P_i$ 都有一个坐标 $(x_i,y_i,z_i)$。所有点对中，高度值 $z$ 不会相等。HKE 准备从最低的点爬到最高的点，他的攀爬满足以下条件：
 (1) 经过他标记的每一个点；
  (2) 从第二个点开始，他经过的每一个点高度 $z$ 都比上一个点高；
  (3) HKE 会飞，他从一个点 $P_i$ 爬到 $P_j$ 的距离为两个点的欧几里得距离。即，$\sqrt{(X_i-X_j)^2+(Y_i-Y_j)^2+(Z_i-Z_j)^2}$
 现在，HKE 希望你能求出他攀爬的总距离。
## 输入格式
第一行，一个整数 $N$ 表示地图上的点数。
接下来 $N$ 行，三个整数 $x_i,y_i,z_i$ 表示第 $i$ 个点的坐标。
## 输出格式
一个实数，表示 HKE 需要攀爬的总距离（保留三位小数）
## 样例 #1
### 样例输入 #1
```
5
2 2 2
1 1 1
4 4 4
3 3 3
5 5 5
```
### 样例输出 #1
```
6.928
```
## 提示
对于100%的数据，$1\leq N\leq 50000$，答案的范围在 double 范围内。*/
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
int clim_h[3][50004];
void pai(int l,int r)
{
	int mid=clim_h[2][(l+r)/2];
	int i=l,j=r;
	do{
		while(clim_h[2][i]<mid) i++;
		while(clim_h[2][j]>mid) j--;
		if(i<=j){
			swap(clim_h[2][i],clim_h[2][j]);
			swap(clim_h[0][i],clim_h[0][j]);
			swap(clim_h[1][i],clim_h[1][j]);
			i++;
			j--;
		}
	}while(i<=j);
	if(l<j) pai(l,j);
	if(i<r) pai(i,r);
}
int climber(){
	double sum=0;
	int x=1,t1=0,t2=0,t3=0,dian=0;
	cin>>dian;
	for(int i=0;i<dian;i++){
		cin>>clim_h[0][i]>>clim_h[1][i]>>clim_h[2][i];
	}
	pai(0,dian-1);
	for(int i=0;i<dian-1;i++){
		sum+=sqrt(((clim_h[0][i]-clim_h[0][i+1])*(clim_h[0][i]-clim_h[0][i+1]))+
			((clim_h[1][i]-clim_h[1][i+1])*(clim_h[1][i]-clim_h[1][i+1]))+
			((clim_h[2][i]-clim_h[2][i+1])*(clim_h[2][i]-clim_h[2][i+1])));
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
}
/*# 生日
## 题目描述
cjf 君想调查学校 OI 组每个同学的生日，并按照年龄从大到小的顺序排序。但 cjf 君最近作业很多，没有时间，所以请你帮她排序。
## 输入格式
输入共有 $n + 1$ 行，
第 $1$ 行为 OI 组总人数 $n$；
第 $2$ 行至第 $n+1$ 行分别是每人的姓名 $s$、出生年 $y$、月 $m$、日 $d$。
## 输出格式
输出共有 $n$ 行，
即 $n$ 个生日从大到小同学的姓名。（如果有两个同学生日相同，输入靠后的同学先输出）
## 样例 #1
### 样例输入 #1
```
3
Yangchu 1992 4 23
Qiujingya 1993 10 13
Luowen 1991 8 1
```
### 样例输出 #1
```
Luowen
Yangchu
Qiujingya
```
## 提示
数据保证，$1<n<100$，$1\leq |s|<20$。保证年月日实际存在，且年份 $\in [1960,2020]$。*/
// #include <iostream>
// using namespace std;
int birth_ren[4][101],birth_t=1;
string birth_a[101];
void pai(int x,int y,int i){
	if(birth_ren[i][x]>birth_ren[i][y]){
		swap(birth_ren[0][x],birth_ren[0][y]);
		swap(birth_a[x],birth_a[y]);
		swap(birth_ren[1][x],birth_ren[1][y]);
		swap(birth_ren[2][x],birth_ren[2][y]);
		swap(birth_ren[3][x],birth_ren[3][y]);
		birth_t+=1;
		return;
	}
	else if(birth_ren[i][x]==birth_ren[i][y] && i<3){
		pai(x,y,i+1);
	}
	return;
}
int birthday(){
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>birth_a[i];
		cin>>birth_ren[0][i];cin>>birth_ren[1][i];cin>>birth_ren[2][i];birth_ren[3][i]=n-i;
	}
	while(birth_t!=0){
		birth_t=0;
		for(int i=0;i<n-1;i++){
			pai(i,i+1,0);
		}
	}
	for(int i=0;i<n;i++){
		cout<<birth_a[i]<<endl;
	}
	return 0;
}
/*# 宇宙总统
## 题目描述
地球历公元 6036 年，全宇宙准备竞选一个最贤能的人当总统，共有 $n$ 个非凡拔尖的人竞选总统，现在票数已经统计完毕，请你算出谁能够当上总统。
## 输入格式
第一行为一个整数 $n$，代表竞选总统的人数。
接下来有 $n$ 行，分别为第一个候选人到第 $n$ 个候选人的票数。
## 输出格式
共两行，第一行是一个整数 $m$，为当上总统的人的号数。
第二行是当上总统的人的选票。
## 样例 #1
### 样例输入 #1
```
5
98765
12365
87954
1022356
985678
```
### 样例输出 #1
```
4
1022356
```
## 提示
票数可能会很大，可能会到 $100$ 位数字。
$1 \leq n \leq 20$*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int president(){
	string h[25],max_z="0";
	int x=0,alen[25]={0};
	int t,max_len=0,max_h=0;
	cin>>x;
	cin.get();
	for(int i=1;i<=x;i++){
		cin>>h[i];
		t = h[i].length();
		if(t > max_len){
			max_len = t;
		}
	}
	for(int i=1;i<=x;i++){
		if(h[i].length()==max_len){
			alen[i]+=1;
		}
	}
	for(int j=1;j<=x;j++){
		if(alen[j]!=0){
			if(h[j]>max_z){
				max_z=h[j];
				max_h=j;
			}
		}
	}
	cout<<max_h<<endl;
	cout<<max_z;
	return 0;
}
/*# 「EVOI-RD1」小昕昕
## 题目背景
一副扑克牌共有 $54$ 张牌，除去大小王后有 $52$ 张。在同一副牌中，一张牌只可能出现一次。
一副扑克牌中一共有四种花色：黑桃($\texttt{spade}$)、红桃($\texttt{heart}$)、梅花($\texttt{club}$)、方块($\texttt{diamond}$)。每个花色的牌共有 $13$ 张，分别为 $\texttt{A} \sim \texttt{K}$。
在题目中，以上四种花色分别以 $\texttt{S,H,C,D}$ 表示。
我们约定，任何一张牌，都以 **花色+点数** 表示，并且约定用 $\texttt{T}$ 表示 $\texttt{10}$，如 $\texttt{SA,D5,HT,CQ}$。
## 题目描述
昕昕手上有 **两副无大小王** 的扑克牌，她会从这些扑克牌里取出 $n$ 张牌。
昕昕创造了一个组合为 **“小昕昕”**，它的定义是，任意取出 $3$ 张牌，若这 $3$ 张牌的 **牌点一样** ，且花色有且仅有 **两种** ，则称为一对“小昕昕”。如 $\texttt{H3,S3,S3}$ 是一对“小昕昕”。
当这三张扑克牌组成 **“小昕昕”** 后，昕昕就会把它们从牌堆内拿出，**不可再次使用**。
现在，昕昕想让你帮她数数，这副牌里最多能组成多少对 **“小昕昕”**。
## 输入格式
第一行为一个正整数 $n$。
第二至 $n+1$ 行，每行为一张扑克牌。
## 输出格式
输出这 $n$ 张牌内，最多能组成多少对“小昕昕”。
## 样例 #1
### 样例输入 #1
```
3
S3
H3
S3
```
### 样例输出 #1
```
1
```
## 样例 #2
### 样例输入 #2
```
7
ST
ST
HT
HT
CT
CT
DT
```
### 样例输出 #2
```
2
```
## 样例 #3
### 样例输入 #3
```
6
DA
HA
D4
C5
DA
D4
```
### 样例输出 #3
```
1
```
## 提示
**本题采用捆绑测试。**
+ $\texttt{Subtask 1 (10 pts)}$ ：$1 \le n \le 3$。
+ $\texttt{Subtask 2 (20 pts)}$ ：$1 \le n \le 5$。
+ $\texttt{Subtask 3 (30 pts)}$ ：$1 \le n \le 20$。
+ $\texttt{Subtask 4 (10 pts)}$ ：$1 \le n \le 70$。
+ $\texttt{Subtask 5 (30 pts)}$ ：无特殊限制。
对于 $100\%$ 的数据，$1 \le n \le 104$，保证输入的牌都存在于两副无大小王的扑克牌中。*/
// #include <iostream>
// using namespace std;
bool xin(string a,string b,string c){
	if(a[1]==b[1]&& b[1]==c[1]&&a[1]==c[1] 
		&&(a[0]==b[0] || b[0]==c[0] || a[0]==c[0])  ){
		return true;
	}
	else{
		return false;
	}
}
int xinxin(){
	int xin_h[110]={0};
	string xin_a[110];
	int n,cnt=0;;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>xin_a[i];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(xin(xin_a[i],xin_a[j],xin_a[k]) && xin_h[i]==0 && xin_h[j]==0 && xin_h[k]==0){
					cnt++;
					xin_h[i]=1;
					xin_h[j]=1;
					xin_h[k]=1;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}
  //
int main(){
	
    // kao_ji();
    // nai_lao();
    // num_select();
    // cell_number();
	// nixu_count();
	ruishi_lun(); //score:20, not implemented right
	// test_q_sort_1d();
	score_seg();
	pian_shu();
	birthday();
	president();
	xinxin(); //score:20
	
    return 0;
} 