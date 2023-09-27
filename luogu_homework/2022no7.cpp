#include <iostream>
using namespace std;
#include <iomanip>
/*# 冒泡排序
## 题目描述
输入4个数，然后对4个数进行排序，由小到大输出这组数
## 输入格式
四个数
## 输出格式
由小到大输出4个数
## 样例 #1
### 样例输入 #1
```
10 6 1 4
```
### 样例输出 #1
```
1 4 6 10
```*/
int bubble_sort(){
	double a[4],b,s=1;
	for(int i=0;i<4;i++)
		cin>>a[i];
	while(s!=0){
		s=0;
		for(int i=1;i<4;i++){
			if(a[i]<a[i-1]){
				b=a[i-1];
				a[i-1]=a[i];
				a[i]=b;
				s+=1;
			}
		}
	}
	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
	return 0;	
}
/*
# 陶陶摘苹果
## 题目描述
陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个30厘米高的板凳，当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
现在已知10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
## 输入格式
输入包括两行数据。第一行包含10个100到200之间（包括100和200）的整数（以厘米为单位）分别表示10个苹果到地面的高度，两个相邻的整数之间用一个空格隔开。
第二行只包括一个100到120之间（包含100和120）的整数（以厘米为单位），表示陶陶把手伸直的时候能够达到的最大高度。
## 输出格式
输出包括一行，这一行只包含一个整数，表示陶陶能够摘到的苹果的数目。
## 样例 #1
### 样例输入 #1
```
100 200 150 140 129 134 167 198 200 111
110
```
### 样例输出 #1
```
5
```*/

// #include <iostream>
// using namespace std;
int taotao_apple(){
	int a,b[11],s=0;
	for(int i=0;i<10;i++)
		cin>>b[i];
    cin>>a;
    a+=30;
    for(int i=0;i<10;i++){
        if(b[i]<=a)
            s+=1;
    }
	cout<<s;
	return 0;	
}
/*
# 数组重放
## 题目描述
将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
## 输入格式
输入为两行：第一行数组中元素的个数n(n大于1,n小于100)
第二行是n个整数，每两个整数之间用空格分隔。
## 输出格式
输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
## 样例 #1
### 样例输入 #1
```
5
8 6 5 4 1
```
### 样例输出 #1
```
1 4 5 6 8
```*/
// #include <iostream>
// using namespace std;
int array_replay(){
	long long a;
	cin>>a;
	long long h[a];
	for(int i=a-1;i>=0;i--)
		cin>>h[i];
	for(int i=0;i<a;i++)
		cout<<h[i]<<" ";
	return 0;	
}

/*
# 数组距离
## 题目描述
已知元素从小到大排列的两个数组f[]和g[]，请写出一个程序算出两个数组彼此之间差的绝对值中最小的一个，这叫做数组的距离.
## 输入格式
第一行为两个整数m, n(1≤m, n≤1000)，分别代表数组f[], g[]的长度。 第二行有m个元素，为数组f[]。 第三行有n个元素，为数组g[]。
## 输出格式
数组的最短距离
## 样例 #1
### 样例输入 #1
```
5 5
1 2 3 4 5
6 7 8 9 10
```
### 样例输出 #1
```
1
```*/

// #include <iostream>
// using namespace std;
int array_distance(){
	long long a,b,c=100,d=0;
	cin>>a;
	cin>>b;
	long long h[a],x[b];
	for(int i=0;i<a;i++)
		cin>>h[i];
	for(int j=0;j<b;j++)
		cin>>x[j];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			d=h[i]-x[j];
			if(h[i]-x[j]<0){
				d=0-(h[i]-x[j]);
			}	
			if(d<c)
				c=d;
		}
	}
	cout<<c;
	return 0;
		
}

/*
# 相关数问题
## 题目描述
列出一组数（10～99之间的数）中所有与指定数（3、5或者7）相关的数。所谓相关数，以7为例，是哪些个位或十位数上包含7，或它能被7整除的整数。
## 输入格式
第一行是整数n，接着n行每行一个整数（10～99之间的数）。最后一行为指定数（3、5或者7）（共有n+2行）。
## 输出格式
输出有多行。按输入顺序，输出所有与指定数相关的相关数，每个数单独一行。
## 样例 #1
### 样例输入 #1
```
10
79
73
54
64
90
75
49
56
43
74
3
```
### 样例输出 #1
```
73
54
90
75
43
```*/
// #include <iostream>
// using namespace std;
int xiang_guan_shu(){
	int a;
	cin>>a;
	long long h[a],b;
	for(int i=0;i<a;i++)
		cin>>h[i];
	cin>>b;
	for(int i=0;i<a;i++){
		if(h[i]%10==b)//gewei
			cout<<h[i]<<endl;
		else if((h[i]/10)%10==b)//shiwei
			cout<<h[i]<<endl;
		else if(h[i]%b==0)
			cout<<h[i]<<endl;
	}
	return 0;
}

/*
# 寻找山顶
## 题目描述
在一个m×n的山地上，已知每个地块的平均高程，请求出所有山顶所在的地块（所谓山顶，就是其他地块平均高程不比其上下左右相邻的四个地块的平均高程小的地方）。
## 输入格式
第一行是两个整数，表示山地的长m（5≤m≤20）和宽n（5≤n≤20）。
	其后m行为一个m×n的整数矩阵，表示每个地块的平均高程。每行的整数间用一个空格分隔。
	## 输出格式
输出所有山顶所在地块的位置。每行一个。按先m值从小到大，再n值从小到大的顺序输出。
## 样例 #1
### 样例输入 #1
```
10 5
0 76 81 34 66
1 13 58 4 40
5 24 17 6 65
13 13 76 3 20
8 36 12 60 37
42 53 87 10 65
42 25 47 41 33
71 69 94 24 12
92 11 71 3 82
91 90 20 95 44
```
### 样例输出 #1
```
0 2
0 4
2 1
2 4
3 0
3 2
4 3
5 2
5 4
7 2
8 0
8 4
9 3
```*/
// #include <iostream>
// using namespace std;
int find_hill(){
	int a,b;
	cin>>a;
	cin>>b;
	long long h[a+2][b+2],x=0;
	for(int i=0;i<a+2;i++){
		for(int j=0;j<b+2;j++)
			h[i][j]=0;
	}	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++)
			cin>>h[i][j];
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			x=0;
			if(h[i][j]>=h[i-1][j])
				x+=1;
			if(h[i][j]>=h[i][j-1])
				x+=1;
			if(h[i][j]>=h[i+1][j])
				x+=1;
			if(h[i][j]>=h[i][j+1])
				x+=1;
			if(x==4)
				cout<<i-1<<" "<<j-1<<endl;
		}	
	}
	return 0;
}
/*
# 1053: 插入数字
## 题目描述
题目描述
已有一个从小到大排好顺序的n个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
## 输入格式
第一行，一个整数n。第二行，原始数列。 第三行，需要插入的数字。
## 输出格式
排序后的数列
## 样例 #1
### 样例输入 #1
```
9
1 7 8 17 23 24 59 62 101
50
```
### 样例输出 #1
```
1 7 8 17 23 24 50 59 62 101
```
## 提示
n<1000*/

// #include <iostream>
// using namespace std;	
int inset_arr[1000];
int insert_numbers(){
	long long a,b,x,i=0,j;
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>inset_arr[i];
	cin>>b;
	while(b>inset_arr[i]){
		i++;
	}
	for(int x=0;x<a;x++){
		if(i==x){
			i=0;
			cout<<b<<" ";
		}
		cout<<inset_arr[x]<<" ";
	}
	return 0;	
}
/*
# 阿姆斯特朗数
## 题目描述
如果一个正整数等于其各个数字的立方和，则称该数为阿姆斯特朗数(亦称为自恋性数)。 如 407=4^3+0^3+7^3就是一个阿姆斯特朗数。试编程求1-n以内所有阿姆斯特朗数。n<=1000000
## 输入格式
一个整数n
## 输出格式
从小到大输出,每行一个数
## 样例 #1
### 样例输入 #1
```
1000
```
### 样例输出 #1
```
1
153
370
371
407
```*/
// #include <iostream>
// using namespace std;	
int arsteron(){
	long long a,b,c,d,e;
	cin>>a;
	for(int i=1;i<a;i++){
		b=i%10;
		c=i/10%10;
		d=i/100%100;
		e=i/1000%1000;
		if(b*b*b+c*c*c+d*d*d+e*e*e==i)
			cout<<i<<endl;
	}
	return 0;	
}

/*
# 1034求和
## 题目描述
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和.
## 输入格式
一行，三个整数a b c
## 输出格式
一行，有一个数，是1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c的值，结果保留2位小数。
## 样例 #1
### 样例输入 #1
```
100 50 10
```
### 样例输出 #1
```
47977.93
```*/
// #include <iostream>
// using namespace std;
int sum_1034(){
	double a,b,c,s1=0,s2=0;
	cin>>a;
	cin>>b;
	cin>>c;
	a=a/2*(a+1);
	for(int i=1;i<=b;i++)
		s1=s1+i*i;
	for(int j=1;j<=c;j++)
		s2=s2+1.0/j;
	cout<<fixed<<setprecision(2)<<a+s1+s2;
	return 0;
}
/*
# 1056：分数序列
## 题目描述
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
## 输入格式
N
## 输出格式
数列前N项和
## 样例 #1
### 样例输入 #1
```
10
```
### 样例输出 #1
```
16.48
```*/
// #include <iostream>
// #include <iomanip>
using namespace std;
int fenshu_sequence(){
	double a=2,b=1,c,d,s=0;
	cin>>d;
	for(int i=0;i<d;i++){
		s+=a/b;
		c=a;
		a=a+b;
		b=c;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;	
}

int main(){
	bubble_sort();
	taotao_apple();
	array_replay();
	array_distance();
	xiang_guan_shu();
	find_hill();
	insert_numbers();
	insert_numbers();
	arsteron();
	sum_1034();
	fenshu_sequence();
	return 0;
}