#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
/*
# n个hello
## 题目描述
输入一个整数n，输出n个hello 
## 输入格式
一个整数n
## 输出格式
n个hello,每行一个hello
## 样例 #1   
### 样例输入 #1
```
5
```
### 样例输出 #1
```
hello
hello
hello
hello
hello
```
## 提示
n的范围是2^64-1
 */
int n_hello(){
	int a,i;
	cin>>a;
	while(i<a){
		cout<<"hello"<<endl;
		i+=1;
	}
	return 0;
}

/*
# 1020计算两点间的距离
## 题目描述
输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
## 输入格式
输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
## 输出格式
对于每组输入数据，输出一行，结果保留两位小数。
## 样例 #1
### 样例输入 #1
```
0 0 0 1
0 1 1 0
```
### 样例输出 #1
```
1.00
1.41
```
## 提示
本题的输入可以用while(cin>>x1>>y1>>x2>>y2)
两点间的距离公式，同学们网上搜一下。
 */
 int distance1020(){
	double x1,y1,x2,y2,c;
	while(cin>>x1>>y1>>x2>>y2){
		c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		cout<<fixed<<setprecision(2)<<c<<endl;
	}
	return 0;
}
/*
# 1035：成绩转换
## 题目描述
输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下： 
- 90~100为A; 
- 80~89为B; 
- 70~79为C; 
- 60~69为D; 
- 0~59为E;
## 输入格式
输入数据有多组，每组占一行，由一个整数组成。
## 输出格式
对于每组输入数据，输出一行。如果输入数据不在 $0$~$100$ 范围内，请输出一行： `Score is error!`。
## 样例 #1
### 样例输入 #1
```
56
67
100
123
```
### 样例输出 #1
```
E
D
A
Score is error!
```
 */
 int score_zhuanhuan(){
	int a;
	while(cin>>a){
		if(a>100 || a<0){
			cout<<"Score is error!"<<endl;
		}
		else if(a<=100 && a>=90){
			cout<<"A"<<endl;
		}	
		else if(a<=89 && a>=80){
			cout<<"B"<<endl;
		}	
		else if(a<=79 && a>=70){
			cout<<"C"<<endl;
		}	
		else if(a<=69 && a>=60){
			cout<<"D"<<endl;
		}	
		else if(a<=59 && a>=0){
			cout<<"E"<<endl;
		}		
	}
	return 0;
}

/*
# 1024: 计算M~N之间所有奇数之和
## 题目描述
计算M~N之间所有奇数之和
## 输入格式
两个正整数M和N，输入保证M<=N
## 输出格式
M~N之间所有奇数之和
## 样例 #1
### 样例输入 #1
```
1
10
```
### 样例输出 #1
```
25
```
## 提示
n<=1000
 */
int sum_jishu(){
	int a,b,sum;
	cin>>a;
	cin>>b;
	if(a%2==0){
		a+=1;
	}
	while(a<=b){
		sum=sum+a;
		a+=2;
	}
	cout<<sum;
	return 0;
}
/*
# 1022: 求具有abcd=(ab+cd)^2性质的四位数
## 题目描述
3025这个数具有一种独特的性质：将它平分为二段，即30和25，使之相加后求平方，即(30+25)^2，恰好等于3025本身。请求出具有这样性质的全部四位数。
## 输入格式
## 输出格式
满足题意的数全部四位数(从小到大输出,且每个数占用一行)
 */

 int ABCD(){
	int a,c;
	a=1000;
	while(a<=9999){
		c=((a/100)+(a%100))*((a/100)+(a%100));
		if(c==a){
			cout<<c<<endl;
		}
		a+=1;
	}

	return 0;
}


/*
# n个数的平均数
## 题目描述
输入n个数，求n个数的平均数，结果保留两位小数。
## 输入格式
第一行是n，n代表有多少个数；接下来n行，每行一个数，代表这n个数。
## 输出格式
一行，一个整数，表示n个数的平均数。
## 样例 #1
### 样例输入 #1
```
3
1
2
3
```
### 样例输出 #1
```
2.00
```
 */
int n_average(){
	double l,a,b,d;
	cin>>l;
	d=0;
	while(d<l){
		cin>>a;
		b=b+a;
		d+=1;
	}
	a=b/l;
	cout<<fixed<<setprecision(2)<<a;
	return 0;
}
/*
# 1025: 计算一个整数N的阶乘
## 题目描述
计算一个整数N的阶乘.
## 输入格式
一个整数N, (0〈=N〈=100)
## 输出格式
整数N的阶乘.
## 样例 #1
### 样例输入 #1
```
5
```
### 样例输出 #1
```
120
```
 */
int jie_cheng(){
	long double a,b,c;
	cin>>a;
	b=1;
	c=1;
	while(b<=a){
		c=c*b;
		b+=1;
	}
	cout<<c;
	return 0;
}
/*
# 统计每类字符各几个
## 题目描述
输入一行字符，分别统计其中英文字母、数字和其他字符的个数，以英文“.”位结束标志，不包含空格。
## 输入格式
一行字符，以英文“.”位结束标志。
## 输出格式
3行，每行一个整数，分别表示英文字母、数字和其他字符的个数。
## 样例 #1
### 样例输入 #1
```
aAa88,-+!.
```
### 样例输出 #1
```
3
2
4
```
 */
int char_count(){
	string a;
	cin>>a;
	int c_a,c_b,c_c;
	c_a=c_b=c_c=0;
	for(int i=0;i<a.size();i++){
		if(isalpha(a[i])!=0){
			c_a+=1;
		}
		else if(isdigit(a[i])!=0){
			c_b+=1;
		}
		else if(a[i]=='.'){
			break;
		}
		else{
			c_c++;
		}
	}
	cout<<c_a<<endl;
	cout<<c_b<<endl;
	cout<<c_c<<endl;
	return 0;
}
/*# n个数中奇数的个数
## 题目描述
输入n个数，统计n个数中奇数的个数，并输出。
## 输入格式
第一行是n，n代表有多少个数；接下来n行，每行一个数，代表这n个数。
## 输出格式
一行，输出n个数中奇数的个数。
## 样例 #1
### 样例输入 #1
```
3
1
2
3
```
### 样例输出 #1
```
2
```*/
int count_jishu(){
	int a,b;
	b=0;
	while(cin>>a){
		if(a%2!=0){
			b+=1;
		}
	}
	cout<<b;
	return 0;
}
/*# mn之间被3整除的和及个数
## 题目描述
输入两个整数 $m$ 和 $n$ ，保证 $m<n$，求 $[m,n]$ 能被 $3$ 整除的数之和。
## 输入格式
两行，每行分别为一个整数，表示 $m$ 和 $n$ 。
## 输出格式
两行，每行分别一个整数，表示 $[m,n]$ 能被3整除的数的个数、 $[m,n]$ 能被 $3$ 整除的数的总和。
## 样例 #1
### 样例输入 #1
```
2
8
```
### 样例输出 #1
```
2
9
```
## 提示
要求使用循环结构实现。*/
int sum_div3(){
	int a,b,c,sum;
	cin>>a;
	cin>>b;
	c=0;
	if(a%3==1){
		a+=2;
	}
	else if(a%3==2){
		a+=1;
	}
	while(a<=b){
		sum+=a;
		a+=3;
		c+=1;
	}
	cout<<c<<endl;
	cout<<sum<<endl;
	return 0;
}
/*# 求两个整数的最大公约数
## 题目描述
输入两个整数，求他们的最大公约数。
## 输入格式
两个整数，范围在2^64-1
## 输出格式
一个整数，表示输入的两个整数的最大公约数。
## 样例 #1
### 样例输入 #1
```
5
7
```
### 样例输出 #1
```
1
```*/
int GCD(){
	long long a,b,i;
	cin>>a;
	cin>>b;
	if(a>b){
		i=b;
	}
	else{
		i=a;
	}
	while(i>0){
		if(a%i==0 && b%i==0){
			break;
		}
		i-=1;
	}
	cout<<i<<endl;
	return 0;
}
/*
# Peter 的烟
## 题目背景

 **温馨提醒：吸烟有害健康，请勿尝试吸烟！**
 ## 题目描述
 Peter 有 $n$ 根烟，他每吸完一根烟就把烟蒂保存起来，$k$（$k>1$）个烟蒂可以换一个新的烟，那么 Peter 最终能吸到多少根烟呢？
 吸烟有害健康。
 ## 输入格式
 每组测试数据一行包括两个整数 $n, k$（$1 < n, k \le 10^8$）。
 ## 输出格式
 对于每组测试数据，输出一行包括一个整数表示最终烟的根数。
 ## 样例 #1
 ### 样例输入 #1
 ```
 4 3
 ```
 ### 样例输出 #1
 ```
 5
 ```
 ## 样例 #2
 ### 样例输入 #2
 ```
 10 3
 ```
 ### 样例输出 #2
 ```
 14
 ```
 ## 提示
 对于 $100\%$ 的数据，$1<n, k \le 10^8$。*/
int Peter_smock(){
	int a,b,c;
	cin>>a;
	cin>>b;
	c=a;
	while(a/b!=0){
		if(a/b!=0){
			c=c+(a/b);
			a=a/b+a%b;
		}
		else{
			break;
		}
	}
	cout<<c;
	return 0;
}   
/*# 小鱼的航程(改进版)
## 题目背景
## 题目描述
有一只小鱼，它平日每天游泳 $250$ 公里，周末休息（实行双休日)，假设从周 $x$ 开始算起，过了 $n$ 天以后，小鱼一共累计游泳了多少公里呢？
## 输入格式
输入两个正整数 $x,n$，表示从周 $x$ 算起，经过 $n$ 天。
## 输出格式
输出一个整数，表示小鱼累计游泳了多少公里。
## 样例 #1
### 样例输入 #1
```
3 10
```
### 样例输出 #1
```
2000
```
## 提示
数据保证，$1\le x \le 7$，$1 \le n\le 10^6$。*/
int fish_swim()
{
	unsigned long long n,sum;
	sum=0;
	int x,i;
	cin >> x >> n; 
	i=0;
	while(i<n){
		if((x!=6)&&(x!=7)){
			sum += 250; 
		}
		if(x==7){
			x=0; 	
		}
		x=x+1;
		i+=1;	 
	}
	cout <<sum; 
	return 0;
}
//测试
int main()
{
	cout<<"n hello"<<endl;
	n_hello();
	distance1020();
	score_zhuanhuan();
	sum_jishu();
	ABCD();
	n_average();
	jie_cheng();
	char_count();
	count_jishu();
	sum_div3();
	GCD();
	Peter_smock();
	fish_swim();
	return 0;
}
