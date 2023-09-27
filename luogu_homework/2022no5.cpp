#include <iostream>
#include <cmath>
using namespace std;
/*# 多个数求最大值
## 题目描述
输入n个数，请输出它们的最大值。
## 输入格式
n+1行，第一行是整数n，表示n个整数，接下来的n行，每行一个整数。
## 输出格式
n个数中的最大值。
## 样例 #1
### 样例输入 #1
```
5
1
2
3
4
5
```
### 样例输出 #1
```
5
```
## 提示
n是2^32-1以内的整数，n个数是2^64-1
 */

int get_max(){
	int n;
	long long c,m;
	cin>>n;
	cin>>c;
	for (n;n>1;n--){
		cin>>m;
		if (m>c){
			c=m;
		}
	}
	cout<<c<<endl;
	return 0;
}

/*# 1023:  判断素数
## 题目描述
输入一个整数，输出是否是素数的消息。
如果是素数输出T 如果不是输出F
## 输入格式
一个自然数
## 输出格式
若素数输出T；若合数输出F。
## 样例 #1
### 样例输入 #1
```
97
```
### 样例输出 #1
```
T
```
## 提示
自然数范围是2^32-1*/

using namespace std;
int is_sushu(){
	int a,f=0;
	cin>>a;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0)
			f+=1;break;
	}
	if(!f)
		cout<<"T"<<endl;
	else
		cout<<"F"<<endl;
	return 0;
}

/*# 完全数
## 题目描述
完全数（Perfect number），又称完美数或完备数，它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。比如6=1+2+3，6是完全数。请编写一个程序，输入一个自然数，如果是完全数，则输出True，否则输出False。
## 输入格式
一个自然数。
## 输出格式
一个单词True或者False。
## 样例 #1
### 样例输入 #1
```
6
```
### 样例输出 #1
```
True
```*/
int Perfect_number(){
	long long a,sum;
	cin>>a;
	for(int i=1;i<a;i++){
		if(a%i==0)
			sum+=i;
	}
	if(sum==a)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}

/*# 角谷猜想
## 题目描述
对整数n，n>0，若n为偶数，则将它除以2；若n为奇数，则将它乘以3加1。将得到的结果继续同样的计算。经过若干步之后，总会使得数变为1。
## 输入格式
一个整数n
## 输出格式
若干行，输出在这个变化过程中的值，具体见样例。
## 样例 #1
### 样例输入 #1
```
5
```
### 样例输出 #1
```
16
8
4
2
1
```*/
int gujiao_guess(){
	long long a;
	cin>>a;
	do{
		if(a%2==0){
			a/=2;
			cout<<a<<endl;
		}
		else{
			a=a*3+1;
			cout<<a<<endl;
		}	
	}while(a>1);
	return 0;
}

/*# 猴子吃桃子问题
## 题目描述
猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，有多吃了一个。第二天早上又将剩下的桃子吃掉一半，有多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想吃的时候，见只剩下一个桃子了。求第一天工摘到多少个桃子？
## 输入格式
无输入
## 输出格式
一个整数，表示桃子的总数。
## 样例 #1
### 样例输入 #1
```
```
### 样例输出 #1
```
1534
```*/
int monky_pitch(){
	int sum=1;
	for(int i=9;i>=1;i--){
		sum=(sum+1)*2;
	}
	cout<<sum;
	return 0;
}

/*# 1030: 分解质因数
## 题目描述
输入一个正整数，分解为质因数乘积如 $12=2*2*3$
## 输入格式
一行,一个整数
## 输出格式
一行,乘积表达式
## 样例 #1
### 样例输入 #1
```
12
```
### 样例输出 #1
```
2*2*3
```
## 提示
输入的整数是 $[2, 2^{32}-1]$*/
int fenjie_zhiyinshu(){ 
	int n,i;
	cin>>n;
	i=2;
	while(i<=n){
		if(n % i==0 and (i==2 or i==3 or i==5 or i==7 or i==11)){ 
			n=n/i;
			if(n!=1){
				
				cout<<i<<"*";
			}
			else{
				cout<<i;
			}
		}
		else{
			i+=1;
		}
	}
	return 0;
}

int main(){
	get_max();
	is_sushu();
	Perfect_number();
	gujiao_guess();
	monky_pitch();
	fenjie_zhiyinshu();
}
