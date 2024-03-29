
#include <iostream>
using namespace std;
/*
# [USACO1.3]混合牛奶 Mixing Milk
## 题目描述
由于乳制品产业利润很低，所以降低原材料（牛奶）价格就变得十分重要。帮助 Marry 乳业找到最优的牛奶采购方案。
Marry 乳业从一些奶农手中采购牛奶，并且每一位奶农为乳制品加工企业提供的价格可能相同。此外，就像每头奶牛每天只能挤出固定数量的奶，每位奶农每天能提供的牛奶数量是一定的。每天 Marry 乳业可以从奶农手中采购到小于或者等于奶农最大产量的整数数量的牛奶。
给出 Marry 乳业每天对牛奶的需求量，还有每位奶农提供的牛奶单价和产量。计算采购足够数量的牛奶所需的最小花费。
注：每天所有奶农的总产量大于 Marry 乳业的需求量。
## 输入格式
第一行二个整数 $n,m$，表示需要牛奶的总量，和提供牛奶的农民个数。
接下来 $m$ 行，每行两个整数 $p_i,a_i$，表示第 $i$ 个农民牛奶的单价，和农民 $i$ 一天最多能卖出的牛奶量。
## 输出格式
单独的一行包含单独的一个整数，表示 Marry 的牛奶制造公司拿到所需的牛奶所要的最小费用。
## 样例 #1
### 样例输入 #1
```
100 5
5 20
9 40
3 10
8 80
6 30
```
### 样例输出 #1
```
630
```
## 提示
【数据范围】  
对于 $100\%$ 的数据：  
$0 \le n,a_i \le 2 \times 10^6$，$0\le m \le 5000$，$0 \le p_i \le 1000$
题目翻译来自 NOCOW。
USACO Training Section 1.3*/
// #include <iostream>
// using namespace std;
int Mix_milk(){
	int a,b;
	cin>>a>>b;
	int h[2][b+2],x=1,t1,t2,jia=0,j=0;
	for(int i=0;i<b;i++){
		cin>>h[0][i];
		cin>>h[1][i];
	}
	while(x!=0){
		x=0;
		for(int i=0;i<b-1;i++){
			if(h[0][i]>h[0][i+1]){
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
	while(a-h[1][j]>=0){
		a-=h[1][j];
		jia+=h[0][j]*h[1][j];
		j++;
	}
	if(a!=0){
		jia+=a*h[0][j];
	}
	cout<<jia;
        return 0;
    }

/*
# [USACO07DEC]Bookshelf B
## 题目描述
Farmer John最近为奶牛们的图书馆添置了一个巨大的书架，尽管它是如此的大，但它还是几乎瞬间就被各种各样的书塞满了。现在，只有书架的顶上还留有一点空间。 
所有 $N(1 \le N \le 20,000)$ 头奶牛都有一个确定的身高 $H_i(1 \le H_i \le 10,000)$。设所有奶牛身高的和为S。书架的高度为B，并且保证 $1 \le B \le S < 2,000,000,007$。 
为了够到比最高的那头奶牛还要高的书架顶，奶牛们不得不像演杂技一般，一头站在另一头的背上，叠成一座“奶牛塔”。当然，这个塔的高度，就是塔中所有奶牛的身高之和。为了往书架顶上放东西，所有奶牛的身高和必须不小于书架的高度。
显然，塔中的奶牛数目越多，整座塔就越不稳定，于是奶牛们希望在能够到书架顶的前提下，让塔中奶牛的数目尽量少。 现在，奶牛们找到了你，希望你帮她们计算这个最小的数目。
## 输入格式
* 第 $1$ 行: 2 个用空格隔开的整数：$N$ 和 $B$；
* 第 $2\dots N+1$ 行: 第 $i+1$ 行是 $1$ 个整数：$H_i$。
## 输出格式
* 第 $1$ 行: 输出 $1$ 个整数，即最少要多少头奶牛叠成塔，才能够到书架顶部
## 样例 #1
### 样例输入 #1
```
6 40
6
18
11
13
19
11
```
### 样例输出 #1
```
3
```
## 提示
输入说明:
一共有 $6$ 头奶牛，书架的高度为 $40$，奶牛们的身高在 $6\dots19$之间。

输出说明:
一种只用 $3$ 头奶牛就达到高度 $40$ 的方法：$18+11+13$。当然还有其他方法，在此不一一列出了。*/
int booK_shelf(){
        return 0;
}

/*
# A+B Problem（升级版）
## 题目背景
小明这在写作业，其中有一道A+B Problem ，他想啊想啊想，就是想不出来，于是就找到了会编程的你......
## 题目描述
这里的A＋B是很奇特的。它是按质数的顺序来进位的。例如：1,0+2,1＝1,0,1（用，来分隔每一位）。个位是2进制，十位是3进制，百位是5进制，千位是7进制，万位是11进制……两个加数的最高位是万位（万位可能有两位）。
## 输入格式
输入一个形如1,0+2,1字符串s。
## 输出格式
输出相加后的结果。
## 样例 #1
### 样例输入 #1
```
1,0+2,1
```
### 样例输出 #1
```
1,0,1
```*/
int A_add_B_plus(){
        return 0;
}
/*
# [NOIP2007 普及组] Hanoi 双塔问题
## 题目描述
给定$A$、$B$、$C$三根足够长的细柱，在$A$柱上放有$2n$个中间有孔的圆盘，共有$n$个不同的尺寸，每个尺寸都有两个相同的圆盘，注意这两个圆盘是不加区分的（下图为$n=3$的情形）。
 ![](https://cdn.luogu.com.cn/upload/pic/33.png) 
 现要将这些圆盘移到$C$柱上，在移动过程中可放在$B$柱上暂存。要求：
（1）每次只能移动一个圆盘；
（2）$A$、$B$、$C$三根细柱上的圆盘都要保持上小下大的顺序；
任务：设$A_n$为$2n$个圆盘完成上述任务所需的最少移动次数，对于输入的$n$，输出$A_n$。
## 输入格式
一个正整数$n$，表示在$A$柱上放有$2n$个圆盘。
## 输出格式
一个正整数, 为完成上述任务所需的最少移动次数$A_n$。
## 样例 #1
### 样例输入 #1
```
1
```
### 样例输出 #1
```
2
```
## 样例 #2
### 样例输入 #2
```
2
```
### 样例输出 #2
```
6
```
## 提示
【限制】
对于$50\%$的数据，$1  \le  n  \le  25$
对于$100\%$的数据，$1  \le  n  \le  200$
【提示】
设法建立$A_n$与$A_{n-1}$的递推关系式。*/

int hanno_double(){
        return 0;
}

/*
# A/B Problem
## 题目描述
输入两个整数 $a,b$，输出它们的商。
## 输入格式
两行，第一行是被除数，第二行是除数。
## 输出格式
一行，商的整数部分。
## 样例 #1
### 样例输入 #1
```
10
2
```
### 样例输出 #1
```
5
```
## 提示
$0\le a\le 10^{5000}$，$1\le b\le 10^9$。*/
int A_Div_B(){
        return 0;
}

int main(){
    
    Mix_milk();
    booK_shelf(); //no implementation
    A_add_B_plus(); // no implementation
    hanno_double();  //no implementation 
    A_Div_B();
    
    return 0;
}