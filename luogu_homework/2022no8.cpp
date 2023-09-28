#include<iostream>
#include <cstring>
using namespace std;

/*
# 选择排序
## 题目描述
输入4个数，然后对4个数进行排序，由小到大输出这组数
## 输入格式
一行，有4个数字。
## 输出格式
一行，有4个数字。
## 样例 #1
### 样例输入 #1
```
10 6 1 4
```
### 样例输出 #1
```
1 4 6 10
```*/
int select_sort(){
	double a[5],m=10000,c[5];
	int k=0,x=0;
	for(int i=0;i<4;i++)
		cin>>a[i];
	while(k<4){
		for(int i=0;i<4;i++){
			if(m>a[i]){
				m=a[i];
				x=i;
			}	
		}
		c[k]=m;
		k+=1;
		m=10000;
		a[x]=10000;
	}
	for(int i=0;i<4;i++)
		cout<<c[i]<<" ";
    return 0;
}

/*
# 3个字符串求长度
## 题目描述
从键盘输入3个字符串，并找出最长的字符串，将其内容和长度输出。
## 输入格式
三行，每行有一个字符串，每行没空格，每个字符串不超过20个字符。
## 输出格式
最长的字符串长度及字符串内容
## 样例 #1
### 样例输入 #1
```
beijing
tianjin
shanghai
```
### 样例输出 #1
```
shanghai
8
```*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int str_len_3(){
    char h[3][25];
	int c=0,d=0,e,i=0;
	for(int j=0;j<3;j++){
		cin.getline(h[j],25);
	}
	for(int j=0;j<3;j++){
		c=0;
		i=0;
		c=strlen(h[j]);
		if(c>d){
			d=c;
			e=j;
		}	
	}
	for(int i=0;i<=d;i++){
		cout<<h[e][i];
	}
	if(d==11)
		d-=1;
	cout<<endl<<d;
	return 0;
}

/*
# 输出下一个字符[A07P13]
## 题目描述
输出一个大写字母，输出在字母表上下一个字母。如果输出为Z，输出A。
## 输入格式
一行，一个大写字母（A-Z）之间。
## 输出格式
一行，一个大写字母，为输入字母的下一个字母
## 样例 #1
### 样例输入 #1
```
A
```
### 样例输出 #1
```
B
```
## 样例 #2
### 样例输入 #2
```
Z
```
### 样例输出 #2
```
A
```*/
// #include <iostream>
// using namespace std;
int one_char(){
	char a;
	cin>>a;
	a+=1;
	if(a==91)
		a=65;
	cout<<a;
    return 0;
}
	
    /*
# 判断字符种类[A07P14]
## 题目描述
输入一个字符，判断其是大写字母，还是小写字母，还是数字。
## 输入格式
一行，一个字符。
## 输出格式
一行，如果为大写字母，输出A，如果为小写字母，输出a，如果为数字，输出0.
## 样例 #1
### 样例输入 #1
```
G
```
### 样例输出 #1
```
A
```
## 样例 #2
### 样例输入 #2
```
r
```
### 样例输出 #2
```
a
```
## 样例 #3
### 样例输入 #3
```
5
```
### 样例输出 #3
```
0
```*/
// #include <iostream>
// using namespace std;
int char_class(){
	char a;
	cin>>a;
	if(a>=65 && a<=90)
		a=65;
	else if(a>=97 && a<=122)
		a=97;
	else if(a>=48 && a<=57)
		a=48;
	cout<<a;
    return 0;
}

/*
# 输出小写字母[A07P12]
## 题目描述
输入一个大写字母，输出对应的小写字母
## 输入格式
一行，一个字符，保证为大写字母。
## 输出格式
一行，一个字符，为输入大写字母对应的小写字母。
## 样例 #1
### 样例输入 #1
```
A
```
### 样例输出 #1
```
a
```*/
// #include <iostream>
// using namespace std;
int lowwer_char(){
	char a;
	cin>>a;
	a+=32;
	cout<<a;
    return 0;
}

/*
# 打印十字[A07P11]
## 题目描述
输入一个字符，输出由这个字符构成的十字图形
## 输入格式
一行，一个字符
## 输出格式
一个由输入字符构成的十字图形
## 样例 #1
### 样例输入 #1
```
#
```
### 样例输出 #1
```
#
  #
#####
  #
  #
```*/
// #include <iostream>
// using namespace std;
int print_cross(){
	char a;
	cin>>a;
	cout<<"  "<<a<<endl;
	cout<<"  "<<a<<endl;
	for(int i=0;i<5;i++)
		cout<<a;
	cout<<endl<<"  "<<a<<endl;
	cout<<"  "<<a<<endl;
    return 0;
}

/*
# 【深基6.例1】自动修正
## 题目描述
大家都知道一些办公软件有自动将字母转换为大写的功能。输入一个长度不超过 $100$ 且不包括空格的字符串。要求将该字符串中的所有小写字母变成大写字母并输出。
## 输入格式
输入一行，一个字符串。
## 输出格式
输出一个字符串，即将原字符串中的所有小写字母转化为大写字母。
## 样例 #1
### 样例输入 #1
```
Luogu4!
```
### 样例输出 #1
```
LUOGU4!
```*/
// #include <iostream>
// using namespace std;
int auto_fix(){
    char a[100];
	int i=0;
	cin.getline(a,100);
	while(a[i]!='\0'){
		if(a[i]>=97 && a[i]<=122)
		    cout<<char(a[i]-32);
		else
			cout<<a[i];
		i++;
	}
    return 0;
}
/*
# 小书童——凯撒密码
## 题目背景
某蒟蒻迷上了 “小书童”，有一天登陆时忘记密码了（他没绑定邮箱 or 手机），于是便把问题抛给了神犇你。
## 题目描述
蒟蒻虽然忘记密码，但他还记得密码是由一个字符串组成。密码是由原文字符串（由不超过 50 个小写字母组成）中每个字母向后移动 $n$ 位形成的。`z` 的下一个字母是 `a`，如此循环。他现在找到了移动前的原文字符串及 $n$，请你求出密码。
## 输入格式
第一行：$n$。第二行：未移动前的一串字母。
## 输出格式
一行，是此蒟蒻的密码。
## 样例 #1
### 样例输入 #1
```
1
qwe
```
### 样例输出 #1
```
rxf
```
## 提示
字符串长度 $\le 50$。*/
// #include <iostream>
// using namespace std;
int kaisa_password(){
    char a[100];
	int i=0,n;
	cin>>n;
	cin>>a;
	while(a[i]!='\0'){
		if(a[i]+n>122)
		    cout<<char(a[i]-26+n);
		else
			cout<<char(a[i]+n);
		i++;
	}
    return 0;
}
int main()
{
    select_sort();
    str_len_3();
    one_char();
    char_class();
    lowwer_char();
    print_cross();
    auto_fix();
    kaisa_password();
        return 0;
}
