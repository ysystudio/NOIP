
#include <cmath>
#include <iostream>
#include <cstring>
using namespace std;
/*
# 军军的排名
## 题目描述
军军的班级又考试了，为了能够清楚自己在班级中的情况，军军想给办理的同学来个小排名。为了能够清晰地看到排名情况，军军在排名中增加了同学的名字。请你帮军军编写一个程序，根据学生的成绩，由高到低地列出军军班级中所有同学的学习情况。
## 输入格式
文件第一行，有一个整数n ，代表有军军班中多少名同学。以下的n行，均分为两部分，第一部分为学生的姓名（由汉语拼音表示），第二部分为此同学的成绩，这两部分之间用一个空格隔开。
## 输出格式
文件由n行组成，均分为两部分，第一部分为学生的姓名（由汉语拼音表示）；第二部分为此名学生的成绩；这两部分之间用一个空格隔开。列出的顺序以成绩为参考，由高到低列出。
## 样例 #1
### 样例输入 #1
```
6
Junjun 88
Fengfeng 100
Mingming 77
Haihai 87
Yanyan 67
Qiuqiu 90
```
### 样例输出 #1
```
Fengfeng 100
Qiuqiu 90
Junjun 88
Haihai 87
Mingming 77
Yanyan 67
```
## 提示
n<10*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int rank_junjun(){
	int a;
	cin>>a;
	cin.get();
	char h[a][30],huan[30];
	int ch[a],s[a],c=1,j=0,t;
	for(int i=0;i<a;i++){
		cin>>h[i];
		cin>>ch[i];
		s[i]=i;
	}
	
	while(c!=0){
		c=0;
		for(int i=0;i<a-1;i++){
			if(ch[i]<ch[i+1]){
				t=ch[i+1];
				ch[i+1]=ch[i];
				ch[i]=t;
				strcpy(huan,h[i+1]);
				strcpy(h[i+1],h[i]);
				strcpy(h[i],huan);
				c+=1;
			}
		}	
	}
	for(int i=0;i<a;i++){
		cout<<h[i]<<' ';
		cout<<ch[i]<<endl;
	}
	return 0;
}
/*
# 援救
## 题目描述
假设洪水把一个山村给淹没了，只有那些比较高大的房屋的屋顶露出水面，人们都已经爬上屋顶等待救援。用平面上的点表示救援队的大本营和哥哥屋顶的地理位置。其中，救援队大本营的位置在坐标原点。第i个屋顶用一个点来描述，其坐标为（xi,yi），单位为米，上面有pi个人等待救援。假设救援队的船只行进的速度是50米/分钟，船只达到屋顶后，每个人上船需要1分钟。救援船每次从大本营出发，开到某个屋顶，接到屋顶上的所有人，再开会大本营，每个被救出的人花0.5分钟下船。救援船再驶向另一个屋顶救人。
已知屋顶的个数n和这n个屋顶的位置以及屋顶上的人数。开始时，救援船在大本营，计算需要多长时间才能救出所有屋顶上的人并使他们都在大本营登陆。
## 输入格式
输入n，表示n个屋顶；接下来是n行数据，每行分别为屋顶的坐标及该屋顶的人数。
## 输出格式
输出是一个数据，表示所用时间。
## 样例 #1
### 样例输入 #1
```
2
30 40 2
-30 -40 2
```
### 样例输出 #1
```
10
```*/
// #include <iostream>
// #include <cmath>
// using namespace std;
int save_them(){
	int a,t=0;
	cin>>a;
	struct house{
		int x;
		int y;
		int ren;
	};
	house h[a];
	for(int i=0;i<a;i++){
		cin>>h[i].x;
		cin>>h[i].y;
		cin>>h[i].ren;
	}
	for(int i=0;i<a;i++){
		t+=(sqrt(h[i].x*h[i].x+h[i].y*h[i].y)/50)*2;
		t+=h[i].ren*1.5;
	}
	cout<<t;
}
/*
# 1058: 语法百题 进制转换
## 题目描述
一个十进制数n（n<=200000000）转换成二进制数，例如输入10，输出1010.
## 输入格式
一个整数n
## 输出格式
二进制数
## 样例 #1
### 样例输入 #1
```
10
```
### 样例输出 #1
```
1010
```*/
// #include <iostream>
// #include <cmath>
// using namespace std;
int jin_zhi(){
	long long n,i=0;
	cin>>n;
	int a[int(sqrt(n))+5];
	while(n!=0){
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j];
	}
	return 0;
}
/*
# 1079: 语法百题 人民币问题
## 题目描述
给出任意的人民币(>10元)的整币兑换成5元、2元和1元币值（要求三种币值均有）的方法有多少种。
## 输入格式
输入任意的人民币(>10元)的整币100,50,20,10
## 输出格式
计算出兑换成5元、2元和1元币值（要求三种币值均有）的方法有多少种
## 样例 #1
### 样例输入 #1
```
50
```
### 样例输出 #1
```
106
```*/
int RMB()
{
    return 0;
    }

/*
# 1080: 语法百题 众数问题
## 题目描述
给定含有n个元素的多重集合S，每个元素在S中出现的次数称为该元素的重数。多重集S中重数最大的元素称为众数。例如，S={1，2，2，2，3，5}。多重集S的众数是2，其重数为3。 编程任务： 对于给定的由n 个自然数组成的多重集S，编程计算S 的众数及其重数。
## 输入格式
第1行多重集S中元素个数n(n<=50000)；接下来的n 行中，每行有一个自然数。
## 输出格式
输出文件有2 行，第1 行给出众数，第2 行是重数。(如果有多个众数，只输出最小的)
## 样例 #1
### 样例输入 #1
```
6
1
2
2
2
3
5
```
### 样例输出 #1
```
2
3
```*/
// #include <iostream>
// using namespace std;
int zhong[1000000]={0};
int zhong_number(){ // 33 score
	int i=0,k,m=0,b=0;
	cin>>i;
	for(int j=0;j<i;j++){
		cin>>b;
		zhong[b]+=1;
	}
	for(int i=0;i<10;i++){
		if(m<zhong[i]){
			m=zhong[i];
            k=i;
		}
	}
    cout<<i<<endl;
	cout<<zhong[i];
	return 0;
}
int main()
{
        rank_junjun();
    save_them();
    jin_zhi();
    RMB();
    zhong_number();
        return 0;
}