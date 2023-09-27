#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

/*
# 高精度减法
## 题目描述
高精度减法。
## 输入格式
两个整数 $a,b$（第二个可能比第一个大）。
## 输出格式
结果（是负数要输出负号）。
## 样例 #1
### 样例输入 #1
```
2
1
```
### 样例输出 #1
```
1
```
## 提示
- $20\%$ 数据 $a,b$ 在 long long 范围内；
- $100\%$ 数据 $0<a,b\le 10^{10086}$。*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int accurate_minus(){
	int c[10088]={0},d[10088]={0},e[10088]={0},l=0,l1,l2;
	char a[10088],b[10088];
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0;i<l1;i++){
		c[i]=a[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		d[i]=b[l2-i-1]-'0';
	}
	l=l1;
	if(l1<l2)
		l=l2;
	for(int i=0;i<l;i++){
		if (c[i]<d[i] && i+1<l1){
			c[i+1]-=1;
			c[i]+=10;
		}
		e[i]=c[i]-d[i];
	}
	for(int i=l1+5;i>=0;i--){
		if(e[i]!=0){
			l1=i;
			break;
		}
	}
	for(int i=l1;i>=0;i--){
		cout<<e[i];
	}	
	return 0;
}
/*
# A*B Problem
## 题目描述
给出两个非负整数，求它们的乘积。
## 输入格式
输入共两行，每行一个非负整数。
## 输出格式
输出一个非负整数表示乘积。
## 样例 #1
### 样例输入 #1
```
1 
2
```
### 样例输出 #1
```
2
```
## 提示
每个非负整数不超过 $10^{2000}$。*/
int A_mul_B(){
    
    return 0;
}
/*
# 车厢重组
## 题目描述
在一个旧式的火车站旁边有一座桥，其桥面可以绕河中心的桥墩水平旋转。一个车站的职工发现桥的长度最多能容纳两节车厢，如果将桥旋转 $180$ 度，则可以把相邻两节车厢的位置交换，用这种方法可以重新排列车厢的顺序。于是他就负责用这座桥将进站的车厢按车厢号从小到大排列。他退休后，火车站决定将这一工作自动化，其中一项重要的工作是编一个程序，输入初始的车厢顺序，计算最少用多少步就能将车厢排序。
## 输入格式
共两行。  
第一行是车厢总数 $N( \le 10000)$。
  
第二行是 $N$ 个不同的数表示初始的车厢顺序。
## 输出格式
一个整数，最少的旋转次数。
## 样例 #1
### 样例输入 #1
```
4
4 3 2 1
```
### 样例输出 #1
```
6
```
## 提示*/
// #include <iostream>
// using namespace std;
int chexiang_orgnize(){
	int a,s=0,x=1,t;
	cin>>a;
	int h[a];
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<a-1;i++){
			if(h[i]>h[i+1]){
				t=h[i];
				h[i]=h[i+1];
				h[i+1]=t;
				x+=1;
				s+=1;
			}	
		}
	}
	cout<<s;
    return 0;
    }
/*
# 欢乐的跳
## 题目描述
一个 $n$ 个元素的整数数组，如果数组两个连续元素之间差的绝对值包括了 $[1,n-1]$ 之间的所有整数，则称之符合“欢乐的跳”，如数组 $\{1,4,2,3\}$ 符合“欢乐的跳”，因为差的绝对值分别为：$3,2,1$。
给定一个数组，你的任务是判断该数组是否符合“欢乐的跳”。
## 输入格式
每组测试数据第一行以一个整数 $n(1 \le n \le 1000)$ 开始，接下来 $n$ 个空格隔开的在 $[-10^8,10^8]$ 之间的整数。
## 输出格式
对于每组测试数据，输出一行若该数组符合“欢乐的跳”则输出 `Jolly`，否则输出 `Not jolly`。
## 样例 #1
### 样例输入 #1
```
4 1 4 2 3
```
### 样例输出 #1
```
Jolly
```
## 样例 #2
### 样例输入 #2
```
5 1 4 2 -1 6
```
### 样例输出 #2
```
Not jolly
```
## 提示
$1 \le n \le 1000$*/
// #include <iostream>
// using namespace std;
int happy_jump(){
	int a; // [1,1000]
	int h[1001];
	int jie[1001] = {0};
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	for(int i=0;i<a-1;i++){
		if(abs(h[i]-h[i+1])<a)
			jie[abs(h[i]-h[i+1])]+=1;
	}
	for(int i=1;i<a-1;i++){
		if(jie[i]==0){
			cout<<"Not jolly";
			return 0;
		}	
	}
	cout<<"Jolly";
	return 0;
}
/*
# 宇宙总统
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
int present(){
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
/*
# 排队接水
## 题目描述
有 $n$ 个人在一个水龙头前排队接水，假如每个人接水的时间为 $T_i$，请编程找出这 $n$ 个人排队的一种顺序，使得 $n$ 个人的平均等待时间最小。
## 输入格式
第一行为一个整数 $n$。
第二行 $n$ 个整数，第 $i$ 个整数 $T_i$ 表示第 $i$ 个人的等待时间 $T_i$。
## 输出格式
输出文件有两行，第一行为一种平均时间最短的排队顺序；第二行为这种排列方案下的平均等待时间（输出结果精确到小数点后两位）。
## 样例 #1
### 样例输入 #1
```
10 
56 12 1 99 1000 234 33 55 99 812
```
### 样例输出 #1
```
3 2 7 8 1 4 9 6 10 5
291.90
```
## 提示
$n \leq 1000,t_i \leq 10^6$，不保证 $t_i$ 不重复。
当 $t_i$ 重复时，按照输入顺序即可（sort 是可以的）*/

// #include <iostream>
// #include <iomanip>
// using namespace std;
int water_line(){
	int a;
	cin>>a;
	int h[2][a+3],x=1,t1,t2;
	double time=0;
	for(int i=1;i<=a;i++){
		cin>>h[1][i];
		h[0][i]=i;
	}
	while(x!=0){
		x=0;
		for(int i=1;i<a;i++){
			if(h[1][i]>h[1][i+1]){
				t1=h[1][i];
				h[1][i]=h[1][i+1];
				h[1][i+1]=t1;
				t2=h[0][i];
				h[0][i]=h[0][i+1];
				h[0][i+1]=t2;
				x+=1;
			}
		}
	}
	for(int i=1;i<=a;i++){
		time+=h[1][i]*(a-i);
		cout<<h[0][i]<<" ";
	}
	cout<<endl<<fixed<<setprecision(2)<<time/a<<endl;
	return 0;
}
/*
# 数列分段 Section I
## 题目描述
对于给定的一个长度为 $N$ 的正整数数列 $A_i$，现要将其分成**连续**的若干段，并且每段和不超过 $M$（可以等于$M$），问最少能将其分成多少段使得满足要求。
## 输入格式
第1行包含两个正整数 $N,M$，表示了数列 $A_i$ 的长度与每段和的最大值，第 $2$ 行包含 $N$ 个空格隔开的非负整数 $A_i$，如题目所述。
## 输出格式
一个正整数，输出最少划分的段数。
## 样例 #1
### 样例输入 #1
```
5 6
4 2 4 5 1
```
### 样例输出 #1
```
3
```
## 提示
对于$20\%$的数据，有$N≤10$；
对于$40\%$的数据，有$N≤1000$；
对于$100\%$的数据，有$N≤100000,M≤10^9$，$M$大于所有数的最大值，$A_i$之和不超过$10^9$。

将数列如下划分：
$[4][2 4][5 1]$
第一段和为$4$，第$2$段和为$6$，第$3$段和为$6$均满足和不超过$M=6$，并可以证明$3$是最少划分的段数。*/
// #include <iostream>
// using namespace std;
int shulei_segment(){
	int m,n,s=1,t=0;
	cin>>n;
	cin>>m;
	int h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	for(int i=0;i<n-1;i++){
		if(t+h[i]>m){
			t=h[i];
			s+=1;
		}
		else
			t+=h[i];	
	}
	cout<<s;
	return 0;
}

/*
# 阶乘数码
## 题目描述
求 $n!$ 中某个数码出现的次数。
## 输入格式
第一行为 $t(t \leq 10)$，表示数据组数。接下来 $t$ 行，每行一个正整数 $n(n \leq 1000)$ 和数码 $a$。
## 输出格式
对于每组数据，输出一个整数，表示 $n!$ 中 $a$ 出现的次数。
## 样例 #1
### 样例输入 #1
```
2
5 2
7 0
```
### 样例输出 #1
```
1
2
```*/
int jie_cheng(){
    
    return 0;
}
int main()
{
    accurate_minus();
    chexiang_orgnize();
    happy_jump();
    present();
    water_line();
    shulei_segment();
    
    return 0;
}