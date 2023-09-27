#include <iostream>//插入排序
using namespace std;
/*
# 直接插入排序
## 题目背景
####
## 题目描述
输入4个数，然后对4个数进行排序，由小到大输出这组数。
## 输入格式
一行，有4个数字。
## 输出格式
一行，有4个数字，用空格隔开。
## 样例 #1
### 样例输入 #1
```
10 6 1 4
```
### 样例输出 #1
```
1 4 6 10
```*/
// #include <iostream>//插入排序
// using namespace std;
int insert_sort(){
	double a[5],x=0;
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	for(int i=1;i<4;i++){
		x=a[i];
		for(int j=i-1;j>=0;j--){
			if(x<a[j]){
			    a[j+1]=a[j];
				a[j]=x;
		    }
		}	
	}
	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
	return 0;
}

/*
# 3-统计字母个数
## 题目描述
从文件中读入若干个字符，全部由小写英文字符组成，最多不超过30个字符，以%字符作为输入结束标志。试设计程序统计输入字符中每个字母出现的次数，并按出现的次数的降序输出结果。
## 输入格式
## 输出格式
## 样例 #1
### 样例输入 #1
```
adaabcdacdfg%
```
### 样例输出 #1
```
A 4
D 3
C 2
B 1
F 1
G 1
```*/
// #include <iostream>
// using namespace std;
int count_char(){
	int i=0,h[27]={0},m=1,m1[26]={0},c=0;
	char a[500];
	cin>>a;
	while(a[i]!='\0'){
		h[a[i]-'a']+=1;
		i++;
	}
	while(m!=0){
		m=0;
		for(int i=0;i<26;i++){
			if(m<h[i]){
				m=h[i];
				c=i;
			}
		}
		if(m==0)
			break;
		h[c]=0;
		cout<<char(c+65)<<' '<<m<<endl;
		
	}
	return 0;
}
/*
# 统计空格个数[A07P15]
## 题目描述
输入一个字符串（可能含有空格），统计其中空格出现的次数。
## 输入格式
一个字符串（长度不超过200）
## 输出格式
一行，一个整数，表示输入字符串中空格的个数
## 样例 #1
### 样例输入 #1
```
I am a student.
```
### 样例输出 #1
```
3
```*/
// #include <iostream>
// using namespace std;
int count_space(){
    char a[100];
	int i=0,s=0;
	cin.getline(a,205) ;
	while(a[i]!='\0'){
		if(a[i]==32)
			s+=1;
		i++;
	}
	cout<<s;
	return 0;
}
/*
# 密码翻译[A07P08]
## 题目描述
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。
## 输入格式
输入一行，包含一个字符串，长度小于80个字符。
## 输出格式
输出每行字符串的加密字符串。
## 样例 #1
### 样例输入 #1
```
Hello! How are you!
```
### 样例输出 #1
```
Ifmmp! Ipx bsf zpv!
```*/
/*
# 简单密码[A07P09]
## 题目描述
Julius Caesar曾经使用过一种很简单的密码。对于明文中的每个字符，将它用它字母表中后5位对应的字符来代替，这样就得到了密文。比如字符A用F来代替。如下是密文和明文中字符的对应关系。
密文
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
明文
V W X Y Z A B C D E F G H I J K L M N O P Q R S T U 
你的任务是对给定的密文进行解密得到明文。
你需要注意的是，密文中出现的字母都是大写字母。密文中也包括非字母的字符，对这些字符不用进行解码。
## 输入格式
一行，给出密文，密文不为空，而且其中的字符数不超过200。
## 输出格式
输出一行，即密文对应的明文。
## 样例 #1
### 样例输入 #1
```
NS BFW, JAJSYX TK NRUTWYFSHJ FWJ YMJ WJXZQY TK YWNANFQ HFZXJX
```
### 样例输出 #1
```
IN WAR, EVENTS OF IMPORTANCE ARE THE RESULT OF TRIVIAL CAUSES
```*/
/*
# [NOIP2018 普及组] 标题统计
## 题目描述
凯凯刚写了一篇美妙的作文，请问这篇作文的标题中有多少个字符？   注意：标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内。
## 输入格式
输入文件只有一行，一个字符串 $s$。
## 输出格式
输出文件只有一行，包含一个整数，即作文标题的字符数（不含空格和换行符）。
## 样例 #1
### 样例输入 #1
```
234
```
### 样例输出 #1
```
3
```
## 样例 #2
### 样例输入 #2
```
Ca 45
```
### 样例输出 #2
```
4
```
## 提示
【输入输出样例 1 说明】   
标题中共有 3 个字符，这 3 个字符都是数字字符。   
【输入输出样例 2 说明】 标题中共有$ 5$ 个字符，包括 $1$ 个大写英文字母， $1$ 个小写英文字母和 $2$ 个数字字符， 还有 $1$ 个空格。由于空格不计入结果中，故标题的有效字符数为 $4$ 个。   
【数据规模与约定】  
规定 $|s|$ 表示字符串 $s$ 的长度（即字符串中的字符和空格数）。    
对于 $40\%$ 的数据，$1 ≤ |s| ≤ 5$，保证输入为数字字符及行末换行符。   
对于 $80\%$ 的数据，$1 ≤ |s| ≤ 5$，输入只可能包含大、小写英文字母、数字字符及行末换行符。   
对于 $100\%$ 的数据，$1 ≤ |s| ≤ 5$，输入可能包含大、小写英文字母、数字字符、空格和行末换行符。*/
/*
# 1044: 语法百题 电报文字
## 题目描述
输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
## 输入格式
一行字符
## 输出格式
加密处理后的字符
## 样例 #1
### 样例输入 #1
```
a b
```
### 样例输出 #1
```
b c
```
## 提示
电报长度<=1000*/
// #include <iostream>
// using namespace std;
int dian_bao(){
	char a[1000];
	int i=0;
	cin.getline(a,1000);
	while(a[i]!='\0'){
		if(a[i]>=97 && a[i]<=122){
			if(a[i]+1>122)
				cout<<char(a[i]-25)<<' ';
			else
				cout<<char(a[i]+1)<<' ';
		}	
		i++;
	}
	return 0;
}
/*
# 1055: 语法百题 保留字母
## 题目描述
编一个程序，输入一个字符串，将组成字符串的所有非英文字母的字符删除后输出。英文大小写都可以。
## 输入格式
一个字符串，长度不超过80个字符
## 输出格式
删掉非英文字母后的字符串。
## 样例 #1
### 样例输入 #1
```
abc123+xyz.5
```
### 样例输出 #1
```
abcxyz
```*/
// #include <iostream>
// using namespace std;
int reserved_char(){
	char a[81];
	int i=0;
	cin.getline(a,81);
	while(a[i]!='\0'){
		if((a[i]>=97 && a[i]<=122) || (a[i]>=65 && a[i]<=90)){
			cout<<a[i];
		}	
		i++;
	}
	return 0;
}
/*
# 1047: 语法百题-选票统计
## 题目描述
又要选队长了。所有人都要投票。
## 输入格式
输入n和s，n为整数，s为一个字符串。n代表一共要参加选举的人数。s为选票。n个人分别用abcde……表示，所以s如果是aabc的话就代表a有俩票，b和c各一票。不区分大小写，如果有其他字符则无视。
## 输出格式
输出一共n行，每行输出每个人的选票。
注意下面的输出格式：
a:...
b:...
c:...
d:...
...
## 样例 #1
### 样例输入 #1
```
3
aBcAcb123a
```
### 样例输出 #1
```
a:3
b:2
c:2
```
## 提示
s选票最多有10000张。最多有26个参选人。*/
// #include <iostream>
// using namespace std;
char xiao_piao_line[10000];
int static_xuan_piao(){
	char a;
	int i=0,j=0;
	cin>>i;
	cin.get();			
	int xuan_piao[26]={0};
	cin.getline(xiao_piao_line,10000);
	while(xiao_piao_line[j]!='\0'){
		a = xiao_piao_line[j];
		if(a>=97 && a<=122){
			xuan_piao[a-97]+=1;
		}
		else if(a>=65 && a<=90){
			xuan_piao[a-65]+=1;
		}
		j++;
	}
			
	for(int j=0;j<i;j++){
		cout<<char(j+97)<<':'<<xuan_piao[j]<<endl;
	}
	return 0;
}
int main(){
	    insert_sort();
    count_char();
    count_space();
	dian_bao();
	reserved_char();
	static_xuan_piao();
	    return 0;
}