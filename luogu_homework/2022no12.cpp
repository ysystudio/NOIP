
#include <iostream>
#include <cstring>
using namespace std;
/*
# 桶排序
## 题目描述
n个正整数，用桶按从大到小的顺序排好。
## 输入格式
第一行输入一个正整数n
第二行是n个正整数,均小于100。
## 输出格式
一行，n个正整数，用空格隔开。
## 样例 #1
### 样例输入 #1
```
3
1 2 3
```
### 样例输出 #1
```
3 2 1
```
## 提示
n<=100*/
// #include <iostream>
// using namespace std;
int tong_arr[102];
int tong_sort(){
	int a,t[101]={0};
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>tong_arr[i];
	}
	for(int i=0;i<a;i++){
		t[tong_arr[i]]+=1;
	}
	for(int i=99;i>=0;i--){
		if(t[i]>0){
			for(int j=0;j<t[i];j++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
/*
# [NOIP2006 普及组] 明明的随机数
## 题目描述
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了 $N$ 个 $1$ 到 $1000$ 之间的随机整数 $(N\leq100)$，对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
## 输入格式
输入有两行，第 $1$ 行为 $1$ 个正整数，表示所生成的随机数的个数 $N$。
第 $2$ 行有 $N$ 个用空格隔开的正整数，为所产生的随机数。
## 输出格式
输出也是两行，第 $1$ 行为 $1$ 个正整数 $M$，表示不相同的随机数的个数。
第 $2$ 行为 $M$ 个用空格隔开的正整数，为从小到大排好序的不相同的随机数。
## 样例 #1
### 样例输入 #1
```
10
20 40 32 67 40 20 89 300 400 15
```
### 样例输出 #1
```
8
15 20 32 40 67 89 300 400
```
## 提示
NOIP 2006 普及组 第一题*/
// #include <iostream>
// using namespace std;
int rand_mingming(){
	int a,h[1000],b=0,t[1005]={0};
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>h[i];
	}
	for(int i=0;i<a;i++){
		t[h[i]]+=1;
	}
	for(int i=0;i<1001;i++){
		if(t[i]>0){
			b+=1;
		}	
	}
	cout<<b<<endl;
	for(int i=0;i<1001;i++){
		if(t[i]>0){
			cout<<i<<" ";
		}
	}
	return 0;
}
/*
# A+B Problem（高精）
## 题目描述
高精度加法，相当于 a+b problem，**不用考虑负数**。
## 输入格式
分两行输入。$a,b \leq 10^{500}$。
## 输出格式
输出只有一行，代表 $a+b$ 的值。
## 样例 #1
### 样例输入 #1
```
1
1
```
### 样例输出 #1
```
2
```
## 样例 #2
### 样例输入 #2
```
1001
9099
```
### 样例输出 #2
```
10100
```*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int a_plus_b(){
	char a[505],b[505];
	int c[505]={0},d[505]={0},e[505]={0},jin=0,l1,l2;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0;i<l1;i++){
		c[i]=a[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		d[i]=b[l2-i-1]-'0';
	}
	if(l2>l1){
		l1=l2;
	}
	for(int i=0;i<l1;i++){
		e[i]=c[i]+d[i]+jin;
		jin=0;
		if(e[i]>=10){
			e[i]=e[i]%10;
			jin=1;
		}
	}
	if(jin==1)
		cout<<jin;
	for(int i=l1-1;i>=0;i--)
		cout<<e[i];
	return 0;
}
/*
# B进制星球
## 题目背景
进制题目，而且还是个计算器~~
## 题目描述
话说有一天，小Z乘坐宇宙飞船，飞到一个美丽的星球。因为历史的原因，科技在这个美丽的星球上并不很发达，星球上人们普遍采用B（2<=B<=36）进制计数。星球上的人们用美味的食物招待了小Z，作为回报，小Z希望送一个能够完成B进制加法的计算器给他们。 现在小Z希望你可以帮助他，编写实现B进制加法的程序。
## 输入格式
共3行第1行：一个十进制的整数,表示进制B。第2-3行：每行一个B进制数正整数。数字的每一位属于{0，1，2，3，4，5，6，7，8，9，A，B……}，每个数字长度<=2000位。
## 输出格式
一个B进制数，表示输入的两个数的和。
## 样例 #1
### 样例输入 #1
```
4
123
321
```
### 样例输出 #1
```
1110
```
## 提示
进制计算器*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int B_Base(){ // 66 score
	char a[2001],b[2001];
	int c[2001]={0},d[2001]={0},e[2005]={0},jin=0,l1,l2,zhi;
	cin>>zhi;
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	for(int i=0;i<l1;i++){
		if(int(a[l1-i-1])>='A' && int(a[l1-i-1])<='Z'){
			c[i]=a[l1-i-1]-'A'+10;
		}
		else{
			c[i]=a[l1-i-1]-'0';
		}
	}
	for(int i=0;i<l2;i++){
		if(int(a[l2-i-1])>='A' && int(a[l2-i-1])<='Z'){
			d[i]=a[l2-i-1]-'A'+10;
		}
		else{
			d[i]=b[l2-i-1]-'0';
		}		
	}
	if(l2>l1){
		l1=l2;
	}
	for(int i=0;i<l1;i++){
		e[i]=c[i]+d[i]+jin;
		jin=0;
		if(e[i]>=zhi){
            jin=e[i]/zhi;
			e[i]=e[i]%zhi;
		}
	}
	if(jin!=0)
		cout<<jin;
	for(int i=l1-1;i>=0;i--){
		if(e[i]>9){
			cout<<char(55+e[i]);
		}
		else{
			cout<<e[i];
		}	
	}	
	return 0;
}

int main() {
        tong_sort();
    rand_mingming();
    a_plus_b();
    B_Base();
        return 0;
}
